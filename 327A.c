#include<stdio.h>

	int rc(int l,int mid,int j,int * a,int * sum,int * max);
	int main(){

int n,l,a[103],fin=0,mid=0,i,j,s,sn,max=0,sum;
scanf("%d",&n);

		for(l=0;l<n;l++){
		if(l == (n-1)){scanf("%d",&a[l]);break;}
scanf("%d ",&a[l]);
				}
		for(l=0;l<n;l++)if(a[l] != 1){i=l;break;}
		for(l=n-1;l>-1;l--)if(a[l] != 1){j=l;break;}
		for(l=i;l<j+1;l++)mid+=a[l];

printf("%d %d\n",i,j);
		for(l=i;l<j+1;l++){sum=0;sum+=rc(l,mid,j,a,&sum,&max);if(sum>max)max=sum;}

		for(l=0;l<n;l++)fin+=a[l];
printf("%d %d %d\n",fin+max,fin,max);
return 0;
		  }
	int rc(int l,int mid,int j,int * a,int * sum,int * max){
		if(l!=j){*sum += rc(l,mid,j-1,a,sum,max);}
		if(*sum>*max)*max=*sum;

//printf("%d\n",*max);
return (a[j] > 0)?-1:1;//(value of most)
			     }


