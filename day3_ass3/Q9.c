#include<stdio.h>
int main()
{
		int n1,n2;
		scanf("%d %d",&n1,&n2);
       int res;        
		while(n1%n2!=0)
		{
			
		     res=n1%n2;
				if(res>0)
				{
			     	printf("%d %% %d = %d\n ",n1,n2,res);
					n1=n2;
					n2=res;
				}
			//	n1=n2;
			//	n2=res;
		}

		printf("%d",res);
}

