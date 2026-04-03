#include <stdio.h>
int main() {
	char fate[2][5]={//二行五列。 
	{1,2,3,0},
	{1,23,65,98,0}
};
    for(int i=0;i<5;i++){
    	for(int j=0;j<5;j++){
    		 printf("fate里的数字有%d\n",fate[i][j]);
		}
	}	
	return 0;
}
