//
//  
//  RENKON
//
//  Created by Ritwik Chandra Pandey on 20/08/20.
//  Copyright © 2020 Ritwik Chandra Pandey. All rights reserved.
//


#include <stdio.h>

void PrintingData(float Erate[],char* N[])
{
    printf("Conversion No.    Ex. Rate            A/B\n\n");
    for (int i = 0; i<25; i++)
    {printf("%d                %f             %s\n",i+1,Erate[i],N[i]);
        printf("\n");}
    
}

void CalcDisp(int z,float A,int num,float Erate[]) {
    
    if (z==1)
    {printf("The result is %f\n",A*Erate[num-1]);
        printf("Last updated on Aug 28, 2020, 13:36:48 IST\n\n");
        
    }
    else if (z==2)
    {printf("The result is %f\n",A/Erate[num-1]);
        printf("Last updated on Aug 28, 2020, 13:36:48 IST\n\n");
        
    }
    else
    {printf("Enter either 1 or 2\n\n");}
    
}

int main()
{float A;int z,num;
    float Erate[]= {0.013650,0.011459,0.010254,0.018588,0.017822,0.840753,0.752582,1.362904,1.306687,6.863338, 0.122494,0.1096211,10.66856,0.198542,0.190379,0.009487,0.007973,0.007136,0.012921,0.694782,1.117456,1.811053,1.738038,1.201374,1.807283};
    
    char* N[]= {"I/US","I/EURO","I/B","I/AUS","I/CAN","US/EURO","US/B","US/AUS","US/CAN","US/PRC","PRC/EURO","PRC/B","PRC/I","PRC/AUS","PRC/CAN","JAP/US","JAP/EURO","JAP/B","JAP/AUS","JAP/I","B/EURO","B/AUS","B/CAN","B/SWISS","B/SNG"};
    
    PrintingData(Erate,N);
    printf("\n\nPlease enter the amount that you would like to convert\n");
    scanf("%f",&A);
    printf("Enter the conversion number i.e. 1,2,3... for corresponding conversion\n");
    scanf("%d",&num);
    printf("A/B : Enter 1 to convert from A to B; Enter 2 to convert from B to A\n");
    scanf("%d",&z);
    CalcDisp(z,A,num,Erate);
    
    
    return 0;
    
}


