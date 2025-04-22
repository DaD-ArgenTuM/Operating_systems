#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
void main() 
{ 
int i,j,n,bt[10],compt[10],at[10], wt[10],tat[10]; 
float sumwt=0.0,sumtat=0.0,avgwt,avgtat; 
clrscr(); 
printf("Enter number of processes: "); 
scanf("%d",&n); 
printf("Enter the burst time of %d process\n", n); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&bt[i]); 
} 
printf("Enter the arrival time of %d process\n", n); 
for(i=0;i<n;i++) 
{ 
scanf("%d",&at[i]); 
} 
compt[0]=bt[0]-at[0]; 
for(i=1;i<n;i++) 
compt[i]=bt[i]+compt[i-1]; 
for(i=0;i<n;i++) 
{ 
tat[i]=compt[i]-at[i]; 
wt[i]=tat[i]-bt[i]; 
sumtat+=tat[i]; 
sumwt+=wt[i]; 
} 
avgwt=sumwt/n; 
avgtat=sumtat/n; 
printf("----------------------------------\n"); 
printf("PN\tBt\tCt\tTat\tWt\n"); 
printf("----------------------------------\n"); 
for(i=0;i<n;i++) 
{ 
printf("%d\t%2d\t%2d\t%2d\t%2d\n",i,bt[i],compt[i],tat[i],wt[i]); 
} 
printf("----------------------------------\n"); 
printf(" Avgwt = %.2f\tAvgtat = %.2f\n",avgwt,avgtat); 
printf("-----------------------------------\n"); 
getch(); 
} 
 
