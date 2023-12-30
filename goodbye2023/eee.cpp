#include <stdio.h>
#include <string.h>
char a[10005];//字符数组
int b[30];//记录次数数组
int main()
{
	int t,i,l,cnt;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<26;i++) b[i]=0;//多组需要初始化
		scanf("%s",a);
		l=strlen(a),cnt=0;
		for(i=0;i<l;i++)
		{
			if(++b[a[i]-'A']==1) cnt+=2;//第一次出现
			else cnt++;//非第一次出现
		}
		printf("%d\n",cnt);
	}
	return 0;
}

		 	 		  			 	 			  	  		 	  		