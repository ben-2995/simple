#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
	}
int max(int arr[],int n){
	return arr[n];}
int min(int arr[]){
	int x;
	return arr[1];
	}	

void op(int a[],int n){
        int i;
        for(i=0;i<n;i++){
                printf("%d\n",a[i]);
                }      
	 }

void sort(int arr[],int n){
	int key;
	int i,j;
	for(i=1;i<n;i++){
		j=i-1;
		key=arr[i];
		while(arr[j]>key && j >=0){
			arr[j+1]=arr[j];
			j=j-1;
			}
		arr[j+1]=key;
		}
//	op(arr,n);
	}
void inp(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	}
void cpy(int arr[],int b[],int n){
	int i;
	for(i=1;i<=n;i++){
		b[i]=arr[i];
		}}

int comp(int arr[], int b[],int c[],int n,int z[]){
	int i,count=0;
	int k=0;
	for(i=0;i<n;i++){
		if(arr[i]!=b[i]){
			c[k]=arr[i];
			k++;
		}
		else{
		 z[count]=i; ;
		 count++;
		 }
		}
	return count-1;
		}
/*void elemcomp(int a[],int b[],int k){
	int i,j;
	for(i=0;i<=k;i++){
			if(a[i]!=b[i]){
				randomarray(b,k);
				elemcomp(a,b,k);}
			}
	printf("no os sequences if ");
}


int main(){
	int k,i;
	int h[50],f[50],c[50],z[50];
	scanf("%d",&k);
	inp(h,k);
	cpy(h,f,k);
	sort(h,k);
	int x = comp(h,f,c,k,z);
//	printf("%d",x);
	for(i=0;i<x;i++){
		printf("%d",z[i]);
			}
	return 0;
	}*/
