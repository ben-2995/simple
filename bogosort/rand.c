#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int r,i;
	for(i=1;i<=5;i++){
		r= rand()%329;
		printf("%d\n",r);
			}
	return 0;
}
