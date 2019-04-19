
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

 int main()
 { 	
 double pg_flt;
 double avg_t;	
 double memory_acc_t; 	
 double modi_per;	
 double t_n; 	
 double t_m;
 
 printf(" ----Demand Paged Memory Problem---- \n\n"); 
 printf("IN this problem take the values given below or you can take your own values! \n\n"); 
 
 printf("Average time = 200 | Memory Access Time = 100 | Modification Percentage = 70%%|"); 
 printf(" Time_n = 8 | Time_m = 20\n\n");
 printf("Average time :"); 
 scanf("%lf",&avg_t); 
 printf("\nMemory Access time :"); 
 scanf("%lf",&memory_acc_t); 
 printf("\nModification percentage :"); 
 scanf("%lf",&modi_per); 
 modi_per /= 100; 
 printf("\nTime when not modified(Time_n):"); 
 scanf("%lf",&t_n); 
 t_n *= 1000000;
 printf("\nTime when modified(Time_m):"); 
 scanf("%lf",&t_m); 
 t_m *= 1000000;
 pg_flt = (avg_t - memory_acc_t)/(( modi_per*(t_m)+(1 - modi_per)*(t_n)) - memory_acc_t); 
 printf("\nThe maximum acceptable page-fault rate for an effective access time : %lf%%\n\n",pg_flt);
} 
 
 

