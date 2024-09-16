#include<stdio.h>
/*
Name:
Date:
Description:
Sample input:
Sample output:
 */
int main()
{
    char str1[100],str2[100],str3[100],str4[100],str5[100];
    int item[100];
    int cost[100],i=0;
    //enter the str1,itemname and cost
    printf("\nEnter the Item %d\t\t: ",i+1);
    scanf("%[^\n]",str1);
    printf("Enter the number of item\t: ");
    scanf("%d",&item[i]);
    printf("Enter the cost of each item\t: ");
    scanf("%d",&cost[i++]);

    getchar();

    printf("\nEnter the Item %d\t\t: ",i+1);
    scanf("%[^\n]",str2);
    printf("Enter the number of item\t: ");
    scanf("%d",&item[i]);
    printf("Enter the cost of each item\t: ");
    scanf("%d",&cost[i++]);

    getchar();

    printf("\nEnter the Item %d\t\t: ",i+1);
    scanf("%[^\n]",str3);
    printf("Enter the number of item\t: ");
    scanf("%d",&item[i]);
    printf("Enter the cost of each item\t: ");
    scanf("%d",&cost[i++]);

    getchar();

    printf("\nEnter the Item %d\t\t: ",i+1);
    scanf("%[^\n]",str4);
    printf("Enter the number of item\t: ");
    scanf("%d",&item[i]);
    printf("Enter the cost of each item\t: ");
    scanf("%d",&cost[i++]);

    getchar();

    printf("\nEnter the Item %d\t\t: ",i+1);
    scanf("%[^\n]",str5);
    printf("Enter the number of item\t: ");
    scanf("%d",&item[i]);
    printf("Enter the cost of each item\t: ");
    scanf("%d",&cost[i++]);

    getchar();


    int j=0;
    int a,b,sum=0;
    //to print the list
    printf("\t\t ╔══════════════════════════════════════════════════════╗\n");


    printf("\t\t ║ sl.No.║ Item\t\t║ No of Item\t║ cost\t║ total\t║\n");
    printf("\t\t  ══════════════════════════════════════════════════════\n");

    printf("\t\t ║ %d     ║ %s\t║ %d\t\t║ %d  \t║ %d   \t║\n",j+1,str1,item[j],cost[j],item[j]*cost[j]);
    sum=sum+item[j]*cost[j];
    j++;

    printf("\t\t ║ %d     ║ %s\t║ %d\t\t║ %d  \t║ %d   \t║\n",j+1,str2,item[j],cost[j],item[j]*cost[j]);
    sum=sum+item[j]*cost[j];
    j++;

    printf("\t\t ║ %d     ║ %s\t║ %d\t\t║ %d  \t║ %d   \t║\n",j+1,str3,item[j],cost[j],item[j]*cost[j]);
    sum=sum+item[j]*cost[j];
    j++;

    printf("\t\t ║ %d     ║ %s\t║ %d\t\t║ %d  \t║ %d   \t║\n",j+1,str4,item[j],cost[j],item[j]*cost[j]);
    sum=sum+item[j]*cost[j];
    j++;

    printf("\t\t ║ %d     ║ %s\t║ %d\t\t║ %d  \t║ %d   \t║\n",j+1,str5,item[j],cost[j],item[j]*cost[j]);
    sum=sum+item[j]*cost[j];

    printf("\t\t  ══════════════════════════════════════════════════════\n");

    printf("\t\t ║ Total\t\t\t\t\t║ %d \t║\n",sum);
    printf("\t\t ╚══════════════════════════════════════════════════════╝\n");
    return 0;
}
