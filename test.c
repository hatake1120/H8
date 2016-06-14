#include "3052.h"
main(){
	short i,j,a,b;
	P1.DDR=0xff;
	while(1){
		a=1;
		b=1;
		while (b<=256) {
			if (b<2){
				 P1.DR.BYTE=1;
				 b=2;				
				for(i=0;i<100;i++){
                                for(j=0;j<1000;j++);
				}
			}

			P1.DR.BYTE=b;
			b=b*2;
			for(i=0;i<100;i++){
                        	for(j=0;j<1000;j++);
			}
		}
		while (b>=1){
			b=b/2;
			P1.DR.BYTE=b;
			for(i=0;i<100;i++){
                        for(j=0;j<1000;j++);
		}		
		}
	}
}
