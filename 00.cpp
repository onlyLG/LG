#include<stdio.h>
#include<string.h>
int main()
{
	int a[10],b,c,d,i,n;
	scanf("%d",&n);
	while(n--){
		memset(a,0,sizeof(a));
		scanf("%d",&b);
		for(i=1;i<=b;i++){
			d=i;
			while(d!=0){
				c=d%10;
				a[c]++;
				d/=10;
			}
		}
		for(i=0;i<9;i++)
		printf("%d ",a[i]);
		printf("%d\n",a[9]);
	} 
	return 0;
}
