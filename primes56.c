#include <stdio.h>
int calculateprime(unsigned long a);

main()
{
	printf("enter low-high enter, low must be > 2, high at least 1,000,000,000,000,000,000\n");
	unsigned long l, i;
	scanf("%lu-%lu", &i, &l);
	int j;
	for(;i<l;i++)
	{
		j=i%10;
		if( i<10 || (i>10 && (j==1 || j==3 || j==7 || j==9))  )
		{	
			if (calculateprime(i)==1) printf("%lu\n", i);
		}
	}
}

int calculateprime(unsigned long a)
{
        int l;
        int p=1;

        for(l=2; l<=(a/l); l++)     {
		if ((a%l) == 0) return 0;
    	}
        if (p==1) return 1;
}
