#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"sort.c"
void randomarray(int arr[],int n){
	srand(time(NULL));
	int i;
	for(i=n-1;i>0;i--){
		int j= rand() % (i+1);
		swap(&arr[i],&arr[j]);
		}
	}

void elemcomp(int a[],int b[],int k){
        int i,zz=0;
        for(i=0;i<k;i++){
                        if(a[i]!=b[i]){
                                randomarray(b,k);
                                elemcomp(a,b,k);
				zz++;}
                        }
        printf("no of sequences is %d ",zz);
}

int main(){
	int k,i;
        int h[50],f[50],c[50],z[50];
        scanf("%d",&k);
        inp(h,k);
        cpy(h,f,k);
        sort(h,k);
//	elemcomp(h,f,k);
//	randomarray(f,k);
//	op(f,k);
       int x = comp(h,f,c,k,z);
	printf("%d",x);	
	return 0;
	}
