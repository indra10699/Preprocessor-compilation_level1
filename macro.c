#include"header.h"

void macro(char *a)
{
	char old[50],new[50],*z;
	int i,j,k,x,i2=0,i3=0,i4=0,i5=0;
l1:
	if(z=strstr(a,"#define"))//if #define found
	{
		for(i=0;z[i]!=' ';i++);//travel upto first space
		for(j=i+1,x=0;z[j]!=' ';j++,x++)//save macro name in old buffer
			old[x]=z[j];
		old[x]=0;

		for(k=j+1,x=0;z[k]!='\n';k++,x++)//save macro body in new buffer
			new[x]=z[k];
		new[x]=0;
	}

	if(z=strstr(a,"#define"))//if #define found
	{
		for(i=0;z[i]!='\n';i++)//remove line in which #define is present
			z[i]=' ';
	}

	z=a;
	i2=strlen(old);//finding lenth of macro name
	i3=strlen(new);//finding length of macro body
	if(i2==i3)//replace word for lenth of old==new
	{
		while(z=strstr(z,old))
		{
			for(i2=0;i2<i3;i2++)
				z[i2]=new[i2];
			z=z+1;
		}
	}
	else if(i2>i3)//replace word for length of old>new
	{
		while(z=strstr(z,old))
		{
			for(i4=0;i4<i2;i4++)
			{
				if(i4<i3)
					z[i4]=new[i4];
				else
					z[i4]=' ';
			}
			z=z+1;
		}
	}
	else if(i2<i3)//replace word for length of old<new
		{
			i5=i3-i2;
			while(z=strstr(z,old))
			{
				i4=strlen(z);
				for(i4;i4>=0;i4--)
					z[i4+i5]=z[i4];
				for(i2=0;i2<i3;i2++)
					z[i2]=new[i2];
				z=z+1;
			}
		}
		if(strstr(a,"#define"))//if still #define is present in file 
			goto l1;//then repeat again
	
}
