#include <stdio.h>
int main(){
	int i=3;
	int j=++i+i++;
	printf("%d，%d",j,i);
	return 0; 
}
