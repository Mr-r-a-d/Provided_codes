// This program demonstates arithematic operations on Array

#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};

	//int i[5]={1,2,3,4,5,6,7}; //error to many intialisation

	printf("----------One dimentional array----------\n\n");

	printf("int a[5]={1,2,3,4,5};\n");

	printf("a = \t%d\n",a);

	printf("a[0] = \t%d\n",a[0]);

	printf("0[a] = \t%d\n",0[a]);

	printf("a[5] = \t%d\n",a[5]);

	printf("&a = \t%d\n",&a);

	printf("&a[4] = \t%d\n",&a[4]);

	printf("a+1 = \t%d\n",a+1);

	printf("&a+1 = \t%d\n",&a+1);

	printf("*(a+1) = \t%d\n",*(a+1));

	printf("*(1+a) = \t%d\n",*(1+a));

	printf("*(&a+1) = \t%d\n",*(&a+1));

	printf("b=a+1 = \t%d\n",a+1);

	printf("sizeof(a) = \t%d\n",sizeof(a));

	printf("sizeof(&a) = \t%d\n",sizeof(&a));

	printf("sizeof(a[1]) = \t%d\n",sizeof(a[1]));

	printf("sizeof(&(a[1])) = \t%d\n",sizeof(a[1]));

	if(a == b)
	{
		printf("Both arrays are equal\n");
	}
	else
	{
		printf("Both arrays are not equal\n");
	}
	return 0;
}
