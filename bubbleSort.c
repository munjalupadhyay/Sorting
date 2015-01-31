#include<stdio.h>

int main(void)
{

int a[6]={2,5,9,4,3,1};
int i,j,k,temp,n=0;
n=sizeof(a)/sizeof(int);


for(i=0;i<n;i++)
{

	for(j=0;j<(n-i-1);j++)
	{	
		if(a[j]>a[j+1])
		{
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
		}

	}


	

}


for(i=0;i<n;i++)
{
	printf("-%d-",a[i]);
}



return 0;
}
