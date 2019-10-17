#include<reg52.h>
#include<stdio.h>
#include<robot.h>

unsigned int a;

void main()
{
	while(1)
	{
		a=P0&0x0f;
		
		if(a==0x02)
			P2=st;
		if(a==0x04)
			P2=lt;
		if(a==0x06)
			P2=rt;
		if(a==0x08)
			P2=rev;
		if(a==0x05)
			P2=stop;
	}
}