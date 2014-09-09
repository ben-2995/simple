#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 50

void inp(int t,int a[]){
	int i;
	for(i=0;i<t;i++){
                scanf("%d",&a[i]);
                }
	}
void op(int t,int x[]){
	int i;
	for(i=0;i<t;i++){
		  printf("%d\n",x[i]);
                        }
		}
int main(){
	int a[MAX];
	int i,t;
	scanf("%d",&t);
	inp(t,a);
	op(t,a);
	/*for(i=0;i<t;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<t;i++){
		printf("%d\n",a[i]);
			}*/
	return 0;
	}

