#include <stdio.h>
int a[10000000]={0};
int main()
{
	printf("�аݧA�Q�n�X�ӽ��? (�̤j����Ƥ��W�L10000000,�е��p�@�I)");

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


