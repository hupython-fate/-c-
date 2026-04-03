#!/bin/bash

# 安全设置：如果遇到错误或未定义变量则停止（可选，取消注释下一行）
# set -euo pipefail

# 查找当前目录下所有名为 src 的目录
find . -type d -name "src" | while read -r src_dir; do
    # 获取 src 所在的父目录
    parent_dir=$(dirname "$src_dir")
    
    echo "处理: $src_dir"
    
    # 1. 删除父目录下的 bin 和 obj（如果存在）
    if [ -d "$parent_dir/bin" ]; then
        echo "  删除 $parent_dir/bin"
        rm -rf "$parent_dir/bin"
    fi
    if [ -d "$parent_dir/obj" ]; then
        echo "  删除 $parent_dir/obj"
        rm -rf "$parent_dir/obj"
    fi
    
    # 2. 将 src 目录下的所有内容（包括隐藏文件）移动到父目录
    # 注意：使用 .[!.]* 匹配隐藏文件，需要先开启 dotglob
    shopt -s dotglob  # 让 * 匹配隐藏文件
    for item in "$src_dir"/*; do
        if [ -e "$item" ]; then
            mv -f "$item" "$parent_dir/"
        fi
    done
    shopt -u dotglob  # 恢复默认
    
    # 3. 删除空的 src 目录
    if [ -d "$src_dir" ]; then
        rmdir "$src_dir" 2>/dev/null && echo "  删除空目录 $src_dir" || echo "  警告: $src_dir 非空，未删除"
    fi
done

echo "处理完成。"