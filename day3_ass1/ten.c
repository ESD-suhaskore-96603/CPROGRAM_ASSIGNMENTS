#include<stdio.h>
#include<math.h>
int main()
{
		int a,b,c;
		printf("Enter the sides od triangle");
		scanf("%d %d %d",&a,&b,&c);

		int perimeter=a+b+c;
		float s=perimeter/2;
        float res=(s*(s-a)*(s-b)*(s-c));
		float area=sqrt(res);

		printf("Perimeter is %d\n",perimeter);
		printf("Area is %.2f\n",res);
}

