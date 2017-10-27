# include <stdio.h>
float comparison(float a,float b);
int main (){
	float x,y,z;
	printf("x=");
	scanf("%f",&x);
	printf("y=");
	scanf("%f",&y);
	z=comparison(x,y);
printf ("较大数是%f",z)	;
	return 0;
}
float comparison(float a,float b)
{if(a>=b)
return a;
else return b;
}

