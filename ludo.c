#include<PIC.h>
#include<stdlib.h>

void ds(int,int);



void delay(unsigned int x)
{
	while(x--);
}

void off()
{
	PORTA=0X00;
	PORTB=0X00;
		PORTC=0X00;
	PORTD=0X00;
		RC4=1;
	RC5=1;
	RD3=1;
	PORTE=0Xf;
TRISA=0XFF;
TRISB=0XFF;
TRISC=0XBF;
TRISD=0XFF;
TRISE=0XF;
}

void dss(int pl,int x,int y)
{
	int i=0;
	for(int t=x;t<y;t++)
	{
	
		ds(pl,x+i);
		delay(20000);
		off();
		i++;
	}
	ds(pl,y);
}		

void ds(int pl, int x)
{
	if(pl==1)
	{
		if(x==1)
		{TRISA=0XEF;TRISD=0XF7;
		RA4=1;RD3=0;}
		
		else if(x==2)
		{TRISA=0XF7;TRISD=0XF7;
		RA3=1;RD3=0;}
		
		else if(x==3)
		{TRISA=0XFB;TRISD=0XF7;
		RA2=1;RD3=0;}
		
		else if(x==4)
		{TRISA=0XFD;TRISD=0XF7;
		RA1=1;RD3=0;}
		
		else if(x==5)
		{TRISA=0XFE;TRISD=0XF7;
		RA0=1;RD3=0;}
		
		else if(x==6)
		{TRISD=0XFD;TRISE=0XE;
		RD1=1;RE0=0;}
		
		else if(x==7)
		{TRISD=0XFE;TRISE=0XE;
		RD0=1;RE0=0;}
		
		else if(x==8)
		{TRISC=0XB7;TRISE=0XE;
		RC3=1;RE0=0;}
		
		else if(x==9)
		{TRISC=0XBB;TRISE=0XE;
		RC2=1;RE0=0;}
		
		else if(x==10)
		{TRISC=0XBD;TRISE=0XE;
		RC1=1;RE0=0;}
		
		else if(x==11)
		{TRISC=0XBE;TRISE=0XE;
		RC0=1;RE0=0;}
		
		else if(x==12)
		{TRISC=0XBE;TRISE=0XD;
		RC0=1;RE1=0;}
		
		else if(x==13)
		{TRISC=0XBE;TRISE=0XB;
		RC0=1;RE2=0;}
	
		else if(x==14)
		{TRISC=0XBD;TRISE=0XB;
		RC1=1;RE2=0;}
		
		else if(x==15)
		{TRISC=0XBB;TRISE=0XB;
		RC2=1;RE2=0;}
		
		else if(x==16)
		{TRISC=0XB7;TRISE=0XB;
		RC3=1;RE2=0;}
		
		else if(x==17)
		{TRISD=0XFE;TRISE=0XB;
		RD0=1;RE2=0;}
		
		else if(x==18)
		{TRISD=0XFD;TRISE=0XB;
		RD1=1;RE2=0;}
		
		else if(x==19)
		{TRISB=0XFD;TRISD=0XF7;
		RB1=1;RD3=0;}
		
		else if(x==20)
		{TRISB=0XFE;TRISD=0Xf7;
		RB0=1;RD3=0;}
		
		else if(x==21)
		{TRISD=0X77;
		RD7=1;RD3=0;}
		
		else if(x==22)
		{TRISD=0XB7;
		RD6=1;RD3=0;}
		
		else if(x==23)
		{TRISD=0Xd7;
		RD5=1;RD3=0;}
		
		else if(x==24)
		{TRISD=0XE7;
		RD4=1;RD3=0;}
		
		else if(x==25)
		{TRISD=0XEF;TRISC=0XAF;
		RD4=1;RC4=0;}
		
		else if(x==26)
		{TRISD=0XeF;TRISC=0X9F;
		RD4=1;RC5=0;}
		
		else if(x==27)
		{TRISD=0XDF;TRISC=0X9F;
		RD5=1;RC5=0;}
		
		else if(x==28)
		{TRISD=0XBF;TRISC=0X9F;
		RD6=1;RC5=0;}
		
		else if(x==29)
		{TRISD=0X7F;TRISC=0X9F;
		RD7=1;RC5=0;}
		
		else if(x==30)
		{TRISB=0XFE;TRISC=0X9F;
		RB0=1;RC5=0;}
		
		else if(x==31)
		{TRISB=0XFD;TRISC=0X9F;
		RB1=1;RC5=0;}
		
		else if(x==32)
		{TRISB=0XFB;TRISE=0XB;
		RB2=1;RE2=0;}
		
		else if(x==33)
		{TRISB=0XF7;TRISE=0XB;
		RB3=1;RE2=0;}
		
		else if(x==34)
		{TRISB=0XEF;TRISE=0XB;
		RB4=1;RE2=0;}
		
		else if(x==35)
		{TRISB=0XDF;TRISE=0XB;
		RB5=1;RE2=0;}
		
		else if(x==36)
		{TRISB=0XBF;TRISE=0XB;
		RB6=1;RE2=0;}
		
		else if(x==37)
		{TRISB=0X7F;TRISE=0XB;
		RB7=1;RE2=0;}
		
		else if(x==38)
		{TRISB=0X7F;TRISE=0XD;
		RB7=1;RE1=0;}
		
		else if(x==39)
		{TRISB=0X7F;TRISE=0Xe;
		RB7=1;RE0=0;}
		
		else if(x==40)
		{TRISB=0XBF;TRISE=0Xe;
		RB6=1;RE0=0;}
		
		else if(x==41)
		{TRISB=0XDF;TRISE=0Xe;
		RB5=1;RE0=0;}
		
		else if(x==42)
		{TRISB=0XEF;TRISE=0Xe;
		RB4=1;RE0=0;}
		
		else if(x==43)
		{TRISB=0XF7;TRISE=0Xe;
		RB3=1;RE0=0;}
		
		else if(x==44)
		{TRISB=0XFB;TRISE=0Xe;
		RB2=1;RE0=0;}
		
		else if(x==45)
		{TRISA=0XFE;TRISC=0X9F;
		RA0=1;RC5=0;}
		
		else if(x==46)
		{TRISA=0XFD;TRISC=0X9F;
		RA1=1;RC5=0;}
		
		else if(x==47)
		{TRISA=0XFB;TRISC=0X9F;
		RA2=1;RC5=0;}
		
		else if(x==48)
		{TRISA=0XF7;TRISC=0X9F;
		RA3=1;RC5=0;}
		
		else if(x==49)
		{TRISA=0XEF;TRISC=0X9F;
		RA4=1;RC5=0;}
		
		else if(x==50)
		{TRISA=0XDF;TRISC=0X9F;
		RA5=1;RC5=0;}
		
		else if(x==51)
		{TRISA=0XDF;TRISC=0XAF;
		RA5=1;RC4=0;}
		
		else if(x==52)
		{TRISA=0XEF;TRISC=0XAF;
		RA4=1;RC4=0;}
		
		else if(x==53)
		{TRISA=0XF7;TRISC=0XAF;
		RA3=1;RC4=0;}
		
		else if(x==54)
		{TRISA=0XFB;TRISC=0XAF;
		RA2=1;RC4=0;}
		
		else if(x==55)
		{TRISA=0XFD;TRISC=0XAF;
		RA1=1;RC4=0;}
		
		else if(x==56)
		{TRISA=0XFe;TRISC=0XAF;
		RA0=1;RC4=0;}
	}

	else if(pl==2)
	{
		if(x==1)
		{TRISC=0XBD;TRISE=0XB;
		RC1=1;RE2=0;}
		
		else if(x==2)
		{TRISC=0XBB;TRISE=0XB;
		RC2=1;RE2=0;}
		
		else if(x==3)
		{TRISC=0XB7;TRISE=0XB;
		RC3=1;RE2=0;}
		
		else if(x==4)
		{TRISD=0XFE;TRISE=0XB;
		RD0=1;RE2=0;}
		
		else if(x==5)
		{TRISD=0XFD;TRISE=0XB;
		RD1=1;RE2=0;}
		
		else if(x==6)
		{TRISB=0XFD;TRISD=0XF7;
		RB1=1;RD3=0;}
		
		else if(x==7)
		{TRISB=0XFE;TRISD=0Xf7;
		RB0=1;RD3=0;}
		
		else if(x==8)
		{TRISD=0X77;
		RD7=1;RD3=0;}
		
		else if(x==9)
		{TRISD=0XB7;
		RD6=1;RD3=0;}
		
		else if(x==10)
		{TRISD=0Xd7;
		RD5=1;RD3=0;}
		
		else if(x==11)
		{TRISD=0XE7;
		RD4=1;RD3=0;}
		
		else if(x==12)
		{TRISD=0XEF;TRISC=0XAF;
		RD4=1;RC4=0;}
		
		else if(x==13)
		{TRISD=0XeF;TRISC=0X9F;
		RD4=1;RC5=0;}
		
		else if(x==14)
		{TRISD=0XDF;TRISC=0X9F;
		RD5=1;RC5=0;}
		
		else if(x==15)
		{TRISD=0XBF;TRISC=0X9F;
		RD6=1;RC5=0;}
		
		else if(x==16)
		{TRISD=0X7F;TRISC=0X9F;
		RD7=1;RC5=0;}
		
		else if(x==17)
		{TRISB=0XFE;TRISC=0X9F;
		RB0=1;RC5=0;}
		
		else if(x==18)
		{TRISB=0XFD;TRISC=0X9F;
		RB1=1;RC5=0;}
		
		else if(x==19)
		{TRISB=0XFB;TRISE=0XB;
		RB2=1;RE2=0;}
		
		else if(x==20)
		{TRISB=0XF7;TRISE=0XB;
		RB3=1;RE2=0;}
		
		else if(x==21)
		{TRISB=0XEF;TRISE=0XB;
		RB4=1;RE2=0;}
		
		else if(x==22)
		{TRISB=0XDF;TRISE=0XB;
		RB5=1;RE2=0;}
		
		else if(x==23)
		{TRISB=0XBF;TRISE=0XB;
		RB6=1;RE2=0;}
		
		else if(x==24)
		{TRISB=0X7F;TRISE=0XB;
		RB7=1;RE2=0;}
		
		else if(x==25)
		{TRISB=0X7F;TRISE=0XD;
		RB7=1;RE1=0;}
		
		else if(x==26)
		{TRISB=0X7F;TRISE=0Xe;
		RB7=1;RE0=0;}
		
		else if(x==27)
		{TRISB=0XBF;TRISE=0Xe;
		RB6=1;RE0=0;}
		
		else if(x==28)
		{TRISB=0XDF;TRISE=0Xe;
		RB5=1;RE0=0;}
		
		else if(x==29)
		{TRISB=0XEF;TRISE=0Xe;
		RB4=1;RE0=0;}
		
		else if(x==30)
		{TRISB=0XF7;TRISE=0Xe;
		RB3=1;RE0=0;}
		
		else if(x==31)
		{TRISB=0XFB;TRISE=0Xe;
		RB2=1;RE0=0;}
		
		else if(x==32)
		{TRISA=0XFE;TRISC=0X9F;
		RA0=1;RC5=0;}
		
		else if(x==33)
		{TRISA=0XFD;TRISC=0X9F;
		RA1=1;RC5=0;}
		
		else if(x==34)
		{TRISA=0XFB;TRISC=0X9F;
		RA2=1;RC5=0;}
		
		else if(x==35)
		{TRISA=0XF7;TRISC=0X9F;
		RA3=1;RC5=0;}
		
		else if(x==36)
		{TRISA=0XEF;TRISC=0X9F;
		RA4=1;RC5=0;}
		
		else if(x==37)
		{TRISA=0XDF;TRISC=0X9F;
		RA5=1;RC5=0;}
		
		else if(x==38)
		{TRISA=0XDF;TRISC=0XAF;
		RA5=1;RC4=0;}
		
		else if(x==39)
		{TRISA=0XDF;TRISD=0XF7;
		RA5=1;RD3=0;}
		
		else if(x==40)
		{TRISA=0XEF;TRISD=0XF7;
		RA4=1;RD3=0;}
		
		else if(x==41)
		{TRISA=0XF7;TRISD=0XF7;
		RA3=1;RD3=0;}
		
		else if(x==42)
		{TRISA=0XFB;TRISD=0XF7;
		RA2=1;RD3=0;}
		
		else if(x==43)
		{TRISA=0XFD;TRISD=0XF7;
		RA1=1;RD3=0;}
		
		else if(x==44)
		{TRISA=0XFE;TRISD=0XF7;
		RA0=1;RD3=0;}
		
		else if(x==45)
		{TRISD=0XFD;TRISE=0XE;
		RD1=1;RE0=0;}
		
		else if(x==46)
		{TRISD=0XFE;TRISE=0XE;
		RD0=1;RE0=0;}
		
		else if(x==47)
		{TRISC=0XB7;TRISE=0XE;
		RC3=1;RE0=0;}
		
		else if(x==48)
		{TRISC=0XBB;TRISE=0XE;
		RC2=1;RE0=0;}
		
		else if(x==49)
		{TRISC=0XBD;TRISE=0XE;
		RC1=1;RE0=0;}
		
		else if(x==50)
		{TRISC=0XBE;TRISE=0XE;
		RC0=1;RE0=0;}
		
		else if(x==51)
		{TRISC=0XBE;TRISE=0XD;
		RC0=1;RE1=0;}
		
		else if(x==52)
		{TRISC=0XBD;TRISE=0XD;
		RC1=1;RE1=0;}
		
		else if(x==53)
		{TRISC=0XBB;TRISE=0XD;
		RC2=1;RE1=0;}
		
		else if(x==54)
		{TRISC=0XB7;TRISE=0XD;
		RC3=1;RE1=0;}
		
		else if(x==55)
		{TRISD=0XFE;TRISE=0XD;
		RD0=1;RE1=0;}
		
		else if(x==56)
		{TRISD=0XFD;TRISE=0XD;
		RD1=1;RE1=0;}
	}

	else if(pl==3)
	{
		if(x==1)
		{TRISD=0XDF;TRISC=0X9F;
		RD5=1;RC5=0;}
		
		else if(x==2)
		{TRISD=0XBF;TRISC=0X9F;
		RD6=1;RC5=0;}
		
		else if(x==3)
		{TRISD=0X7F;TRISC=0X9F;
		RD7=1;RC5=0;}
		
		else if(x==4)
		{TRISB=0XFE;TRISC=0X9F;
		RB0=1;RC5=0;}
		
		else if(x==5)
		{TRISB=0XFD;TRISC=0X9F;
		RB1=1;RC5=0;}
		
		else if(x==6)
		{TRISB=0XFB;TRISE=0XB;
		RB2=1;RE2=0;}
		
		else if(x==7)
		{TRISB=0XF7;TRISE=0XB;
		RB3=1;RE2=0;}
		
		else if(x==8)
		{TRISB=0XEF;TRISE=0XB;
		RB4=1;RE2=0;}
		
		else if(x==9)
		{TRISB=0XDF;TRISE=0XB;
		RB5=1;RE2=0;}
		
		else if(x==10)
		{TRISB=0XBF;TRISE=0XB;
		RB6=1;RE2=0;}
		
		else if(x==11)
		{TRISB=0X7F;TRISE=0XB;
		RB7=1;RE2=0;}
		
		else if(x==12)
		{TRISB=0X7F;TRISE=0XD;
		RB7=1;RE1=0;}
		
		else if(x==13)
		{TRISB=0X7F;TRISE=0Xe;
		RB7=1;RE0=0;}
		
		else if(x==14)
		{TRISB=0XBF;TRISE=0Xe;
		RB6=1;RE0=0;}
		
		else if(x==15)
		{TRISB=0XDF;TRISE=0Xe;
		RB5=1;RE0=0;}
		
		else if(x==16)
		{TRISB=0XEF;TRISE=0Xe;
		RB4=1;RE0=0;}
		
		else if(x==17)
		{TRISB=0XF7;TRISE=0Xe;
		RB3=1;RE0=0;}
		
		else if(x==18)
		{TRISB=0XFB;TRISE=0Xe;
		RB2=1;RE0=0;}
		
		else if(x==19)
		{TRISA=0XFE;TRISC=0X9F;
		RA0=1;RC5=0;}
		
		else if(x==20)
		{TRISA=0XFD;TRISC=0X9F;
		RA1=1;RC5=0;}
		
		else if(x==21)
		{TRISA=0XFB;TRISC=0X9F;
		RA2=1;RC5=0;}
		
		else if(x==22)
		{TRISA=0XF7;TRISC=0X9F;
		RA3=1;RC5=0;}
		
		else if(x==23)
		{TRISA=0XEF;TRISC=0X9F;
		RA4=1;RC5=0;}
		
		else if(x==24)
		{TRISA=0XDF;TRISC=0X9F;
		RA5=1;RC5=0;}
		
		else if(x==25)
		{TRISA=0XDF;TRISC=0XAF;
		RA5=1;RC4=0;}
		
		else if(x==26)
		{TRISA=0XDF;TRISD=0XF7;
		RA5=1;RD3=0;}
		
		else if(x==27)
		{TRISA=0XEF;TRISD=0XF7;
		RA4=1;RD3=0;}
		
		else if(x==28)
		{TRISA=0XF7;TRISD=0XF7;
		RA3=1;RD3=0;}
		
		else if(x==29)
		{TRISA=0XFB;TRISD=0XF7;
		RA2=1;RD3=0;}
		
		else if(x==30)
		{TRISA=0XFD;TRISD=0XF7;
		RA1=1;RD3=0;}
		
		else if(x==31)
		{TRISA=0XFE;TRISD=0XF7;
		RA0=1;RD3=0;}
		
		else if(x==32)
		{TRISD=0XFD;TRISE=0XE;
		RD1=1;RE0=0;}
		
		else if(x==33)
		{TRISD=0XFE;TRISE=0XE;
		RD0=1;RE0=0;}
		
		else if(x==34)
		{TRISC=0XB7;TRISE=0XE;
		RC3=1;RE0=0;}
		
		else if(x==35)
		{TRISC=0XBB;TRISE=0XE;
		RC2=1;RE0=0;}
		
		else if(x==36)
		{TRISC=0XBD;TRISE=0XE;
		RC1=1;RE0=0;}
		
		else if(x==37)
		{TRISC=0XBE;TRISE=0XE;
		RC0=1;RE0=0;}
		
		else if(x==38)
		{TRISC=0XBE;TRISE=0XD;
		RC0=1;RE1=0;}
		
		else if(x==39)
		{TRISC=0XBE;TRISE=0XB;
		RC0=1;RE2=0;}
		
		else if(x==40)
		{TRISC=0XBD;TRISE=0XB;
		RC1=1;RE2=0;}
		
		else if(x==41)
		{TRISC=0XBB;TRISE=0XB;
		RC2=1;RE2=0;}
		
		else if(x==42)
		{TRISC=0XB7;TRISE=0XB;
		RC3=1;RE2=0;}
		
		else if(x==43)
		{TRISD=0XFE;TRISE=0XB;
		RD0=1;RE2=0;}
		
		else if(x==44)
		{TRISD=0XFD;TRISE=0XB;
		RD1=1;RE2=0;}
		
		else if(x==45)
		{TRISB=0XFD;TRISD=0XF7;
		RB1=1;RD3=0;}
		
		else if(x==46)
		{TRISB=0XFE;TRISD=0Xf7;
		RB0=1;RD3=0;}
		
		else if(x==47)
		{TRISD=0X77;
		RD7=1;RD3=0;}
		
		else if(x==48)
		{TRISD=0XB7;
		RD6=1;RD3=0;}
		
		else if(x==49)
		{TRISD=0Xd7;
		RD5=1;RD3=0;}
		
		else if(x==50)
		{TRISD=0XE7;
		RD4=1;RD3=0;}
		
		else if(x==51)
		{TRISD=0XEF;TRISC=0XAF;
		RD4=1;RC4=0;}
	
		else if(x==52)
		{TRISD=0XDF;TRISC=0XAF;
		RD5=1;RC4=0;}
		
		else if(x==53)
		{TRISD=0XBF;TRISC=0XAF;
		RD6=1;RC4=0;}
		
		else if(x==54)
		{TRISD=0X7F;TRISC=0XAF;
		RD7=1;RC4=0;}
		
		else if(x==55)
		{TRISB=0XFE;TRISC=0XAF;
		RB0=1;RC4=0;}
		
		else if(x==56)
		{TRISB=0XFD;TRISC=0XAF;
		RB1=1;RC4=0;}
	}

	else if(pl==4)
	{
		if(x==1)
		{TRISB=0XBF;TRISE=0Xe;
		RB6=1;RE0=0;}
		
		else if(x==2)
		{TRISB=0XDF;TRISE=0Xe;
		RB5=1;RE0=0;}
		
		else if(x==3)
		{TRISB=0XEF;TRISE=0Xe;
		RB4=1;RE0=0;}
		
		else if(x==4)
		{TRISB=0XF7;TRISE=0Xe;
		RB3=1;RE0=0;}
		
		else if(x==5)
		{TRISB=0XFB;TRISE=0Xe;
		RB2=1;RE0=0;}
		
		else if(x==6)
		{TRISA=0XFE;TRISC=0X9F;
		RA0=1;RC5=0;}
		
		else if(x==7)
		{TRISA=0XFD;TRISC=0X9F;
		RA1=1;RC5=0;}
		
		else if(x==8)
		{TRISA=0XFB;TRISC=0X9F;
		RA2=1;RC5=0;}
		
		else if(x==9)
		{TRISA=0XF7;TRISC=0X9F;
		RA3=1;RC5=0;}
		
		else if(x==10)
		{TRISA=0XEF;TRISC=0X9F;
		RA4=1;RC5=0;}
		
		else if(x==11)
		{TRISA=0XDF;TRISC=0X9F;
		RA5=1;RC5=0;}
		
		else if(x==12)
		{TRISA=0XDF;TRISC=0XAF;
		RA5=1;RC4=0;}
		
		else if(x==13)
		{TRISA=0XDF;TRISD=0XF7;
		RA5=1;RD3=0;}
		
		else if(x==14)
		{TRISA=0XEF;TRISD=0XF7;
		RA4=1;RD3=0;}
		
		else if(x==15)
		{TRISA=0XF7;TRISD=0XF7;
		RA3=1;RD3=0;}
		
		else if(x==16)
		{TRISA=0XFB;TRISD=0XF7;
		RA2=1;RD3=0;}
		
		else if(x==17)
		{TRISA=0XFD;TRISD=0XF7;
		RA1=1;RD3=0;}
		
		else if(x==18)
		{TRISA=0XFE;TRISD=0XF7;
		RA0=1;RD3=0;}
		
		else if(x==19)
		{TRISD=0XFD;TRISE=0XE;
		RD1=1;RE0=0;}
		
		else if(x==20)
		{TRISD=0XFE;TRISE=0XE;
		RD0=1;RE0=0;}
		
		else if(x==21)
		{TRISC=0XB7;TRISE=0XE;
		RC3=1;RE0=0;}
		
		else if(x==22)
		{TRISC=0XBB;TRISE=0XE;
		RC2=1;RE0=0;}
		
		else if(x==23)
		{TRISC=0XBD;TRISE=0XE;
		RC1=1;RE0=0;}
		
		else if(x==24)
		{TRISC=0XBE;TRISE=0XE;
		RC0=1;RE0=0;}
		
		else if(x==25)
		{TRISC=0XBE;TRISE=0XD;
		RC0=1;RE1=0;}
		
		else if(x==26)
		{TRISC=0XBE;TRISE=0XB;
		RC0=1;RE2=0;}
		
		else if(x==27)
		{TRISC=0XBD;TRISE=0XB;
		RC1=1;RE2=0;}
		
		else if(x==28)
		{TRISC=0XBB;TRISE=0XB;
		RC2=1;RE2=0;}
		
		else if(x==29)
		{TRISC=0XB7;TRISE=0XB;
		RC3=1;RE2=0;}
		
		else if(x==30)
		{TRISD=0XFE;TRISE=0XB;
		RD0=1;RE2=0;}
		
		else if(x==31)
		{TRISD=0XFD;TRISE=0XB;
		RD1=1;RE2=0;}
		
		else if(x==32)
		{TRISB=0XFD;TRISD=0XF7;
		RB1=1;RD3=0;}
		
		else if(x==33)
		{TRISB=0XFE;TRISD=0Xf7;
		RB0=1;RD3=0;}
		
		else if(x==34)
		{TRISD=0X77;
		RD7=1;RD3=0;}
		
		else if(x==35)
		{TRISD=0XB7;
		RD6=1;RD3=0;}
		
		else if(x==36)
		{TRISD=0Xd7;
		RD5=1;RD3=0;}
		
		else if(x==37)
		{TRISD=0XE7;
		RD4=1;RD3=0;}
		
		else if(x==38)
		{TRISD=0XEF;TRISC=0XAF;
		RD4=1;RC4=0;}
		
		else if(x==39)
		{TRISD=0XeF;TRISC=0X9F;
		RD4=1;RC5=0;}
		
		else if(x==40)
		{TRISD=0XDF;TRISC=0X9F;
		RD5=1;RC5=0;}
		
		else if(x==41)
		{TRISD=0XBF;TRISC=0X9F;
		RD6=1;RC5=0;}
		
		else if(x==42)
		{TRISD=0X7F;TRISC=0X9F;
		RD7=1;RC5=0;}
		
		else if(x==43)
		{TRISB=0XFE;TRISC=0X9F;
		RB0=1;RC5=0;}
		
		else if(x==44)
		{TRISB=0XFD;TRISC=0X9F;
		RB1=1;RC5=0;}
		
		else if(x==45)
		{TRISB=0XFB;TRISE=0XB;
		RB2=1;RE2=0;}
		
		else if(x==46)
		{TRISB=0XF7;TRISE=0XB;
		RB3=1;RE2=0;}
		
		else if(x==47)
		{TRISB=0XEF;TRISE=0XB;
		RB4=1;RE2=0;}
		
		else if(x==48)
		{TRISB=0XDF;TRISE=0XB;
		RB5=1;RE2=0;}
		
		else if(x==49)
		{TRISB=0XBF;TRISE=0XB;
		RB6=1;RE2=0;}
		
		else if(x==50)
		{TRISB=0X7F;TRISE=0XB;
		RB7=1;RE2=0;}
		
		else if(x==51)
		{TRISB=0X7F;TRISE=0XD;
		RB7=1;RE1=0;}
		
		else if(x==52)
		{TRISB=0XBF;TRISE=0XD;
		RB6=1;RE1=0;}
		
		else if(x==53)
		{TRISB=0XDF;TRISE=0XD;
		RB5=1;RE1=0;}
		
		else if(x==54)
		{TRISB=0XEF;TRISE=0XD;
		RB4=1;RE1=0;}
		
		else if(x==55)
		{TRISB=0XF7;TRISE=0XD;
		RB3=1;RE1=0;}
		
		else if(x==56)
		{TRISB=0XFB;TRISE=0XD;
		RB2=1;RE1=0;}
	}
	
	
}


void trans(char ch[])
{	 
	int i=0;
	 while(ch[i]!='\0')
	 {	
		  TXIF=0;
		  TXREG=ch[i];
		  while(TXIF==0);
		  i++;  
	 }
}
 


int random()
{
	unsigned int x;
	int y;
	char z;
	
	y=rand();
	z=y%6+1;
	return z;
}




int checksafe(int score)
{
	if(score==1||score==9||score==14||score==22||score==27||score==35||score==40||score==48)
	return 1;
	else
	return 0;
}

int dice(int i)
{	off();
	delay(15000);
	trans("Ox /");
	
	delay(15000);
	if(i==0)
	{
		trans("Bx /");
	}
	else if(i==1)
	{
		trans("Gx /");
	}
	else if(i==2)
	{
		trans("Rx /");
	}
	else if(i==3)
	{
		trans("Yx /");
	}	
	
	
	
	delay(15000);	
	char str[20]="Lplayer x turn /";
	str[8]=i+48+1;
	
	delay(15000);
	trans(str);
	
	char str1[5]="Sx /";
	
	int flag,a,b,c;
	
	while(1)
	{
		if(RD2==1)
		{
			delay(5000);
			while(RD2==1);
			a=random();
			str1[1]=a+48;
			
			trans(str1);
			break;
		}	
	}
				
	if (a==6)
	{
		while(1)
		{
			if(RD2==1)
			{
				delay(5000);
				while(RD2==1);
				b=random();
				str1[1]=b+48;
				//delay(15000);
				trans(str1);
				break;	
			}
		}
		
		a=a+b;
		if(b==6)
		{
			while(1)
			{
				if(RD2==1)
				{
					delay(5000);
					while(RD2==1);
					c=random();
					str1[1]=c+48;
					//delay(15000);
					trans(str1);
					break;
				}
			}
			
			a=a+c;
			if (a==18)
				{
					a=0;
					delay(15000);
					trans("Lhaha....bad luck /");
				}
		}
	}
	return a;
}


void main()
{
	//OSCCON=0X60;
	int flag;
	int score[4]={0,0,0,0};
	int a,b,c,x,i;
	
	OPTION_REG=0x87;	//Timer 0 is being used for seed 
	
	ANSEL=0X00;			//Port E is being made digital
	ANSELH=0X00;		//Port B is being made digital 
	
	TRISA=0XC0;			//Port A pin 6 and 7 for crystal
	TRISB=0X00;
	TRISC=0X80;			//RC7 for receiver
	TRISD=0X00;			//rd2 is switch
	TRISE=0X0;			//RE3 reset
	off();
	
	TXSTA=0X24;
	RCSTA=0X90;
	SPBRG=25;   //9600 BAUD RATE AT 4MHz
	
	delay(65000);	//To process data on controller secondary
	
	trans("Lwelcome to the game /");
	

	

	
	
	delay(65000);
	delay(65000);
	
	trans("Cpush button to start /");
	
	while(1)
	{
		if(RD2==1)
		{
			delay(1000);
			while(RD2==1);
			delay(15000);
			trans("Lthe game has started /");
			delay(50000);
			break;
		}
	}
	
	
	while(1)
	{
		srand(TMR0);
		for(i=0;i<4;i++)
		{
			
			a=dice(i);
		
		
				if(score[i]==0)
				{
					if(a==1)
					{
						x=score[i];
						score[i]=score[i]+1;
						dss(i+1,x,score[i]);
					}
					else if(a==7)
					{
						x=score[i];
						score[i]=score[i]+a;
						dss(i+1,x,score[i]);
					}
					else if(a==13)
					{
						x=score[i];
						score[i]=score[i]+a;
						dss(i+1,x,score[i]);
					}
					else if(a>=6)
					{
						x=score[i];
						score[i]=score[i]+a-5;
						dss(i+1,x,score[i]);
					}
				}
				
				else if(score[i]>0&& score[i]<52)
				{
					x=score[i];
					score[i]=score[i]+a;
					dss(i+1,x,score[i]);
				}
				
				else if(score[i]>=52&& (score[i]+a)<=57)
				{
					x=score[i];
					score[i]=score[i]+a;	
					dss(i+1,x,score[i]);
				}
				
				else
				{
					delay(15000);
					trans("Lcan't move /");
				}		
					
				
				for(int j=0;j<4;j++)
				{
					if(score[i]==score[j]&& i!=j)
					{
						x=checksafe(score[j]);
						if (j==0)
						{
							score[j]=0;
							char send[20]="LPlayer x bombed /";
							send[9]=j;
							trans(send);
						}
					}
				}
				
				if(score[i]==57)
					break;	
					
					delay(65000);
			}
		}
}