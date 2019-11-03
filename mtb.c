#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<time.h>

int a[50],b[50],c[50];

struct node
{
	int tkt_id;
	int movie_no;
    char ph_no[9];
	int tkt_no[4];
	int tkts;
	char name[20];
	int cost;
	struct node *link;
};
struct node *start=NULL,*dup=NULL;
int p[5],bkid=1000;

void create()
{
	int i;
	for(i=0;i<50;i++)
	{
		a[i]=b[i]=c[i]=i+1;
		

	}
}

int book1(int n)
{
	int m[5],i,j;
	for(i=0;i<n;i++)
	{
	    int d=-1;
		printf("Enter seat no.");
		scanf("%d",&m[i]);
		if(m[i]<1 || m[i]>50)
		{
			printf("Invalid\n");
			return -1;
		}
		for(j=0;j<50;j++)
	    {
		    if(m[i]==a[j])
		    {
			    a[j]=0;
			    d++;
		    }
	    }
	    if(d==-1)
	    {
	        printf("Seat not available\n");
	        return -1;
	    }
	}
    printf("\nYour seats are: ");
    for(i=0;i<n;i++)
    {
	    printf("%d\t",m[i]);
	    p[i]=m[i];
    }
    printf("\n");
	return 0;
}

int book2(int n)
{
	int m[5],i,j;
	for(i=0;i<n;i++)
	{
	    int d=-1;
		printf("Enter seat no.");
		scanf("%d",&m[i]);
		if(m[i]<1 || m[i]>50)
		{
			printf("Invalid\n");
			return -1;
		}
		for(j=0;j<50;j++)
	    {
		    if(m[i]==b[j])
		    {
			    b[j]=0;
			    d++;
		    }
	    }
	    if(d==-1)
	    {
	        printf("Seat not available\n");
	        return -1;
	    }
	}
    printf("\nYour seats are: ");
    for(i=0;i<n;i++)
    {
	    printf("%d\t",m[i]);
	    p[i]=m[i];
    }
    printf("\n");
	return 0;
}

int book3(int n)
{
	int m[5],i,j;
	for(i=0;i<n;i++)
	{
	    int d=-1;
		printf("Enter seat no.");
		scanf("%d",&m[i]);
		if(m[i]<1 || m[i]>50)
		{
			printf("Invalid\n");
			return -1;
		}
		for(j=0;j<50;j++)
	    {
		    if(m[i]==c[j])
		    {
			    c[j]=0;
			    d++;
		    }
	    }
	    if(d==-1)
	    {
	        printf("Seat not available\n");
	        return -1;
	    }
	}
    printf("\nYour seats are: ");
    for(i=0;i<n;i++)
    {
	    printf("%d\t",m[i]);
	    p[i]=m[i];
    }
    printf("\n");
	return 0;
}

void display1()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("%d\t ",a[i]);
	}
}

void display2()
{
	int i;
	for( i=0;i<50;i++)
	{
		printf("%d\t ",b[i]);
	}
}

void display3()
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("%d\t ",c[i]);
	}
}
	

struct node *read()
{
    int n,ch,a[5],sum,b=0;
    char ph[10];
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    printf("\n*****************************************************************************\n");
	printf("**                     Choose the movie you want to book                   **\n");
	printf("**                     1.Barate (9:00 IST)                                 **\n");
	printf("**                     2.Housefull4(13:00 IST)                             **\n");
	printf("**                     3.Sky is Pink(16:00 IST)                            **\n");
	printf("*****************************************************************************\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:system("clear");
		    printf("        The movie name is Barate and its price per ticket is Rs 250\n");
			display1();
			printf("\n                               Screen this way\n");
			printf("\nPlease enter the number of tickets");
			scanf("%d",&n);
			if(n>5)
			{
			    free(temp);
			    printf("Maximum limit exceeded");
			    return;
			}
			sum=n*250;
			b=book1(n);
			if(b==-1)
			{
			    free(temp);
			    return;
			}
			printf("In case of cancellation your booking id :%d is required\n",bkid);
			temp->tkt_id=bkid;
			bkid++;
			printf("You have choosen Barate \nThe timing of the show is 9:00 IST\n");
			printf("Your total price is %d\n",sum);
			temp->movie_no=1;
			break;
		case 2:system("clear");
		    printf("        The movie name is Housefull4 and its price per ticket is Rs 250\n");
			display2();
			printf("\n                               Screen this way\n");
			printf("\nPlease enter the number of tickets");
			scanf("%d",&n);
			if(n>5)
			{
			    free(temp);
			    printf("Maximum limit exceeded");
			    return;
			}
			if(n<=0)
			{
			    free(temp);
			    printf("Invalid");
			    return;
			}
			sum=n*250;
			b=book2(n);
			if(b==-1)
			{
			    free(temp);
			    return;
			}
			printf("In case of cancellation your booking id :%d is required\n",bkid);
			temp->tkt_id=bkid;
			bkid++;
			printf("You have choosen Housefull4 \nThe timing of the show is 9:00 IST\n");
			printf("Your total price is %d\n",sum);
			temp->movie_no=2;
			break;
		case 3:system("clear");
		    printf("        The movie name is Sky is Pink and its price per ticket is Rs 250\n");
			display3();
			printf("\n                               Screen this way\n");
			printf("\nPlease enter the number of tickets");
			scanf("%d",&n);
			if(n>5)
			{
			    free(temp);
			    printf("Maximum limit exceeded");
			    return;
			}
			if(n<=0)
			{
			    free(temp);
			    printf("Invalid");
			    return;
			}
			sum=n*250;
			b=book3(n);
			if(b==-1)
			{
			    free(temp);
			    return;
			}
			printf("In case of cancellation your booking id :%d is required\n",bkid);
			temp->tkt_id=bkid;
			bkid++;
			printf("You have choosen Sky is Pink \nThe timing of the show is 9:00 IST\n");
			printf("Your total price is %d\n",sum);
			temp->movie_no=3;
			break; 
		default:free(temp);
		        printf("Invalid choice");
		        return;
	}
	printf("Enter your name:");
	scanf("%s",temp->name);
	printf("Enter phone number:");
	scanf("%s",temp->ph_no);
	while(strlen(temp->ph_no)!=10)
	{
	    printf("Enter valid phone number");
	    scanf("%s",temp->ph_no);
	}
	printf("Thanks for choosing our theatre\n");
	printf("Enjoy your movie!!!\n");
	temp->tkts=n;
	temp->cost=sum;
	for(int i=0;i<n;i++)
	{
	    temp->tkt_no[i]=p[i];
	}
	return temp;
}

void attach()
{
    struct node *t,*temp;
    temp=read();
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        t=start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void history()
{
    char u[8];
    char p[8];
    printf("Enter admin user name:");
    scanf("%s",u);
    printf("\nEnter password:");
    scanf("%s",p);
    if(strcmp(u,"user")==0 && strcmp(p,"pass")==0)
    {
	int n=0,sum=0,count=1;
	    struct node *t;
	    t=start;
	    if(t==NULL)
	    {
	        printf("Empty");
	    }
	while(t!=NULL)
	    {
	        printf("%d:\n",count);
	        printf("Ticket id: %d\n",t->tkt_id);
	        printf("customer name: %s\n",t->name);
	        printf("Customer phone No.: %s\n",t->ph_no);
	        if(t->movie_no==1)
	        {
	            printf("Movie name: Barate\n");
	        }
	        if(t->movie_no==2)
	        {
	            printf("Movie name: Housefull4\n");
	        }
	        if(t->movie_no==3)
	        {
	            printf("Movie name: Sky is Pink\n");
	        }
	        printf("No. of tickets: %d\n",t->tkts);
	        printf("Seat No:");
	        for(int i=0;i<t->tkts;i++)
	        {
	            printf("%d  ",t->tkt_no[i]);
	        }
	        printf("\n");
	        printf("Total cost: %d\n",t->cost);
	        t=t->link;
	        count++;
	    }
    }
    else
    {
        printf("Wrong user name or password");
        return;
    }
}
	
void cancellation()
{
    struct node *prev,*next,*temp;
    int id,t[5];
    printf("Enter Booking ID");
    scanf("%d",&id);
    temp=start;
    if(start==NULL)
    {
        printf("No Booking found");
    }
    else if(start->link==NULL)
    {
        if(start->tkt_id==id)
        {
            printf("Tickets cancelled");
            printf("\nBooking ID: %d",start->tkt_id);
            printf("\nCustomer name: %s",start->name);
            for(int i=0;i<start->tkts;i++)
            {
                t[i]=start->tkt_no[i];
            }
            if(start->movie_no==1)
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            a[j]=t[i];
                        }
                    }
                }
            }
            else if(start->movie_no==2)
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            b[j]=t[i];
                        }
                    }
                }
            }
            else
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            c[j]=t[i];
                        }
                    }
                }
            }
            start=NULL;
        }
        else
        {
            printf("No Booking found");
        }
    }
    else if(start->tkt_id==id)
        {
            for(int i=0;i<start->tkts;i++)
            {
                t[i]=start->tkt_no[i];
            }
            printf("Tickets cancelled");
            printf("\nBooking ID: %d",start->tkt_id);
            printf("\nCustomer name: %s",start->name);
            if(start->movie_no==1)
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            a[j]=t[i];
                        }
                    }
                }
            }
            else if(start->movie_no==2)
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            b[j]=t[i];
                        }
                    }
                }
            }
            else
            {
                for(int i=0;i<start->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            c[j]=t[i];
                        }
                    }
                }
            }
            start=start->link;
        }
    else
    {
        while(temp->link->tkt_id!=id && temp!=NULL)
        {
            temp=temp->link;
        }
        if(temp->link==NULL && temp->tkt_id!=id)
        {
            printf("No Booking found");
        }
        else
        {
            prev=temp;
            temp=temp->link;
            next=temp->link;
            prev->link=next;
            temp->link=NULL;
            printf("Tickets cancelled");
            printf("\nBooking ID: %d",temp->tkt_id);
            printf("\nCustomer name: %s",temp->name);
            for(int i=0;i<temp->tkts;i++)
            {
                t[i]=temp->tkt_no[i];
            }
            if(temp->movie_no==1)
            {
                for(int i=0;i<temp->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            a[j]=t[i];
                        }
                    }
                }
            }
            else if(temp->movie_no==2)
            {
                for(int i=0;i<temp->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            b[j]=t[i];
                        }
                    }
                }
            }
            else
            {
                for(int i=0;i<temp->tkts;i++)
                {
                    for(int j=0;j<50;j++)
                    {
                        if((j+1)==t[i])
                        {
                            c[j]=t[i];
                        }
                    }
                }
            }
            free(temp);
        }
    }
}

void main()
{
    system("clear");
	int choice;
	create();
	char u[5],p[5];
	do
	{
		printf("\n*****************************************************************************\n");
		printf("**                     Welcome to movie ticket booking                     **\n");
		printf("**                     Enter your choice                                   **\n");
		printf("**                     1.Booking                                           **\n");
		printf("**                     2.Cancellation                                      **\n");
		printf("**                     3.Exit                                              **\n");
		printf("**                     4.Booking history(only for admins)                  **\n");
		printf("**                     5.close application(only for admins)                **\n");
		printf("*****************************************************************************\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:system("clear"); 
			attach();
				break;
			case 2:system("clear");
			cancellation();
				break;
			case 3:system("clear");
				break;
			case 4: system("clear");
			    history();
			    break;
			case 5:printf("Enter user name: ");
			       scanf("%s",u);
			       printf("\nEnter passord:");
			       scanf("%s",p);
			       if(strcmp(u,"user")==0 && strcmp(p,"pass")==0)
			       {
			           exit(0);
			       }
			       else
			           printf("Invalid");
			       break;
			default:system("clear");
			printf("Invalid choice");
				break;
		}
	}
	while(choice !=100000000000000000000000);
}
