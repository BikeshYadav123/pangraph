//panagram...all the alphabet is present in the string
#include<stdio.h>
#include<conio.h>
#include<string.h>


void main()
{
	char str1[20]={0};
	char str2[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int len,I,J,ccnt=0,wcnt=0,flag=0;
	printf("enter first string\n");
	scanf("%[^\n]s",&str1);
	
	len=strlen(str1);
	
		for(I=0;str1[I]!='\0';I++)
		{
			if(str1[I]==' ')
			{
				wcnt++;
			}
				
		
		}
		
		ccnt=len-wcnt;
			for(I=0;I<26;I++)
	  		{
	  			for(J=0;J<len;J++)
	  			{
		
	 			if(str2[I]==str1[J])
	    		{
		    		flag=1;
		    		break;
		    	}
				else
		   		{
		   			flag=0;	
		   		}
				}
	  		}
    
	  if(flag==1)
	   {
	     printf("pangram\n");	
	   }
	  else
	   {
	     printf("not pangram\n");	
	   }
	   		
	printf("no.of characters:%d\n",ccnt);
	
	}
		
		
		
	
	


