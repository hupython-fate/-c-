#include <stdio.h>
int main() {
	int year=1900;
	int leap=0;
	
	while(year<=2500){
		
		if(year%4==0){
			
			
			if(year%100==0){
				
				if(year%400==0){
					leap=1;
					if(leap=1){printf("%d(year)是润年！\n",year);}
				}
				
				else{
			        leap=0;
		    }
				
			}
			
			
			else{
				leap=1;
				if(leap=1){printf("%d(year)是润年！\n",year);}
			}
			
			
	
	
	
		}
		
		
		else{
			leap=0;
		}
		year++;
		
		
		
	}
	return 0;
}
