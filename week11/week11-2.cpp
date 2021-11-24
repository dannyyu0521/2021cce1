#include <stdio.h>
int a[10000000]={0};
int main()
{
	printf("請問你想要幾個質數? (最大的質數不超過10000000,請給小一點)");

	int b;
	scanf("%d",&b);
    int ans=0;
	for(int i=2;ans<b;i++){
		if (a[i]==0){
            ans++;
			printf("%d ",i);
			for(int c=i+i;c<10000000;c=c+i){
				a[c]=1;
			}
		}
	}
}


