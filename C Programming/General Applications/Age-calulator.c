#include<stdio.h>
main()
{
	int d,m,y,d1,m1,y1,age,ad=0,am=0;
	printf("Enter Your Birthday (DD/MM/YY) : ");
	scanf("%d/%d/%d",&d,&m,&y);	
	printf("Enter current date : ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	age=y1-(y+1);
	if((m1>=m && d1>=d) || (m1==1 && m==12))
	{
		age++;
	}
	if(m1<m)
	{
		while(m != m1)
		{
			am++;
			m++;
			if(m==13)
			{
				m=1;
			}
		}
	}
	else
	{
		am=m1-m;
	}
	if(d1<d)
	{
		while(d1!=d)
		{
			ad++;
			d1--;
			if(d1==0)
			{
				d1=30;
			}
		}
	}
	else{
		ad=d1-d;
	}
	printf("Your Are %d Year %d Month %d Day Old",age,am,ad);
}
