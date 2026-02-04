#include <stdio.h>
int main() {
    double pereh=3000.0;
    int menny=0;
    int l=1;
    while (menny<pereh){
        menny=menny+100;
        printf("今天是存钱的第%d天，存了%d元。\n",l,menny);
        l=l+1;
        if(menny>=pereh){
            printf("一共存了%d天钱。\n",l);
        }
    }
    return 0;
}