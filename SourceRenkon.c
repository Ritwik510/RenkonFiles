//
//  SourceRenkon.c
//  RenkonFinal
//
//  Created by Ritwik Chandra Pandey on 30/08/20.
//  Copyright © 2020 Ritwik Chandra Pandey. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include<curses.h>

#define MAX 25

void specifications()
{printf("PROGRAM SPECIFICATIONS:\n");
    printf("1.Working range for entered Amount(long double)-> Min: 2.22507e-308 and Max: 1.79769e+308\n");
    printf("2.Working range for Currency numbers(int)-> Min: -2147483648 and Max: 2147483647\n");
    printf("Important: Inputs other than numbers will terminate the program.\n");
    printf("The Program has been protected from entering into any kind of infinite loop.\n");
    printf("Entering invalid values as input to the program, more than 15 times, results in self-termination.\n");
    printf("Any unusual activity will result in immediate termination of the program so as to prevent an infinite loop/crash.\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    
    
};

void ReadCurrencies()
{FILE *fp;
    char str[MAX];
    char* filename = "/Users/rajiv/RenkonFinal/Currency names.txt";
    
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
      
    }
    while (fgets(str, MAX, fp) != NULL)
      printf("%s", str);
    printf("\n\n\n");
    fclose(fp);
  
}

long double* ReadExValues()
{FILE *fp;int i=0;
    static long double val[15];
    char* filename = "/Users/rajiv/RenkonFinal/Ex Rates.txt";
    
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        exit(1);
    }
   
    while((fscanf(fp,"%Lf",&val[i]))!=EOF) //scanf and check EOF
    {
    
        i++;
    }
    
    
    
    fclose(fp);
    return val;
    
}

long double Calc(long double A,int num1,int num2,long double *p)
{long double temp1,temp2;
 
    
    temp1= A / ( *( p + ( num1 - 1 ) ) );
    temp2= temp1* ( *(p + ( num2 - 1 ) ) );
    if(num1-1==num2-1)
        temp2=A;
    return temp2;
    };







int main()
{long double A,*p,result=0.0;int i=0,num1,num2;char a='1';
    specifications();
    p=ReadExValues();
    
    printf("This program is capable of converting the entered amount of money from one currency to another.\n\n");
    printf("The following is the list of currencies and their correspondng currency numbers :\n\n");
    printf("(NOTE:- The program supports only the following currencies)\n\n\n");
    ReadCurrencies();
    while(a=='1')
    {

    printf("\n\nPlease enter the amount that you would like to convert:(Warning:Inputs other than numbers terminates the program!)\n");
    Enter0:
        scanf("%Lf",&A);
        if (A<0)
        {printf("Please enter a valid amount\n");
            
            i++;
            if(i>15)
                exit(10);
            goto Enter0;
            
        };
        
    
    printf("Enter the currency number of the amount just entered:(Warning:Inputs other than integers terminates the program!)\n");
    Enter1:
        scanf("%d",&num1);
    
        if(num1<=0 || num1>15)
        {printf("Please enter a valid integer between 1 to 15 (including both)\n");
           
            i++;
            if(i>15)
                exit(10);
            goto Enter1;
        }
    printf("Enter the currency number of the currency you would like to convert to:(Warning:Inputs other than integers terminates the program!)\n");
    Enter2:
    scanf("%d",&num2);
        if(num2<=0 || num2>15)
        {printf("Please enter a valid integer between 1 to 15 (including both)\n");
            
            i++;
            if(i>15)
                exit(10);
            goto Enter2;}
        
            
    result=Calc(A,num1,num2,p);
        
    printf("\n\nThe result is %Lf",result);
    printf("\nLast updated on 30 Aug, 2020, 13:36:48 IST\n\n");
    printf("Convert Again? : Enter 1 for 'Yes'(Any other character terminates the program)\n");
        scanf(" %c",&a);
        if(a!='1')
        exit(0);
  
  
}
    
}



