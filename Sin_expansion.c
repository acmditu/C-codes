#include <stdio.h>
#include <math.h>
int fact(int f);
int main()
{
    int n, i, j;
    float result, tem, x;
    printf("Enter value of x:");
    scanf("%f", &x);
    printf("Enter number of elements:");
    scanf("%d", &n);
    // convert in radians
    tem = x;
    x = x * (3.1415 / 180);
    for(i=1,j=1;i<=n;i++,j=j+2)
	{
		if(i%2!=0)
		{
			result+=pow(x,j)/fact(j);
		}
		else
			result-=pow(x,j)/fact(j);
	}
}
int fact(int f)
{
    int fac, i;
    for (i = 1; i <= f; i++)
    {
        fac = f * i;
    }
    return fac;
}
