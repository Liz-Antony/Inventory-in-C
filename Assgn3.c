#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct part{
	int partNumber;
	char partName[50];
	int on_hand;
	struct part *next;
}Node;

Node *inventory=NULL;


Node* createNode()
{
	Node *nd=(Node*)malloc(sizeof(Node));
	if(nd==NULL)
	{
		printf("Not Have Enough Memory");
	}
	else
	{
		return nd;
	}
}

void insertingNewPart()
{
	int partNumber,on_hand;
	char partName[50];
	
	printf("\nPlease Enter the Part Number\t");
	scanf("%d",&partNumber);
	
	printf("\nPlease Enter the Part Name\t");
	scanf("%s",&partName);
	
	printf("\nPlease Enter the Number of Quantity On Hand\t\n");
	scanf("%d",&on_hand);
	
	Node *newInven= createNode();
	newInven->partNumber=partNumber;
	strcpy(newInven->partName,partName);
	newInven->on_hand=on_hand;
	if(inventory==NULL)
	{
		inventory=newInven;
		newInven->next=NULL;
	}
	else
	{
		Node *temp=inventory;
		Node *prev=temp;
		if(newInven->partNumber<temp->partNumber)
		{
			inventory=newInven;
			newInven->next=temp;
			
		}
		else
		{
		
		while(temp->next!=NULL)
		{
			
		     
		      if(temp->partNumber>newInven->partNumber)
		      {
		      	newInven->next=prev->next;
		      	prev->next=newInven;
		      	return;
			  }
			  else
			  {
			  	    prev=temp;
			  		temp=temp->next;
			  }
			 
		
		}
		temp->next=newInven;
		newInven->next=NULL;
	
	}
}
	

	printf("\n Inventory added Successfully !\n");
}

void  searchByPartNumber()
{
	int partNumber;
	if(inventory==NULL)
	{
		printf("\n The inventory is empty\n");
	}
	else
	{
		printf("\nEnter the Part Number \t");
		scanf("%d",&partNumber);
		Node *temp=inventory;
		while(temp!=NULL)
		{
			if(partNumber==temp->partNumber)
			{
				printf("\nPart Number: %d\n\nPart Name %s\n\nQuantity on Hand %d\n\n",temp->partNumber,temp->partName,temp->on_hand);
				return;
			}
			else
			{
				temp=temp->next;
			}
		}
		printf("\nSearch cannot find Part number\n");
   }
	
}

void updateInventory()
{
	int partNumber,on_hand;
	if(inventory==NULL)
	{
		printf("\nSorry the inventory is empty cannot do update operation on empty inventory!\n");
	}
	else
	{
		printf("\n Enter the Part Number \t");
		scanf("%d",&partNumber);
		Node *temp=inventory;
		while(temp!=NULL)
		{
			if(partNumber==temp->partNumber)
			{
				printf("\nEnter the Quantity on Hand\t");
				scanf("%d",&on_hand);
				temp->on_hand=on_hand;
				printf("\nPart Number: %d\n\nName %s\n\nQuantity on Hand %d\n\n",temp->partNumber,temp->partName,temp->on_hand);
				return;
			}
			else
			{
				temp=temp->next;
			}
		}
		printf("\nSearch cannot find Part number\n");
   }	
}
void displayInventory()
{
	Node *temp;
	temp=inventory;
	if(temp==NULL)
	{
		printf("\nInventory is Empty !\n");
		
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\nPart Number: %d \n\nName %s\n\nQuantity on Hand %d\n\n",temp->partNumber,temp->partName,temp->on_hand);
			temp=temp->next;
		}
		printf("\n");
	}
}



int main()
{
	do
	{
		int choice;



        printf("1)Insert Into the Inventory(i)\n\n");
   	    printf("2)Search in the Inventory(s)\n\n");
        printf("3)Update the Inventory(u)\n\n");
        printf("4)Display the Inventory(p)\n\n");
        printf("5)Terminate the Program(q)\n\n");
        printf(" Enter Your Choice\n\n");
    	scanf("%d",&choice);

		
		if(choice==1)
		{
		  insertingNewPart();
		}
		else if(choice==2)
		{
	 	 searchByPartNumber();
		}
		else if(choice==3)
		{
		  updateInventory();
		}
		else if(choice==4)
		{
		  displayInventory();
		}
		else exit(1);
		
	}while(1);
	
	
	return 0;
}

