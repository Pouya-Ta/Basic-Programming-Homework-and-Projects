#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define n 3       

struct book
{
	int code;
	char title[100];
	char author[100];
	int year;
	float price;
};

void iWrite(FILE* p,book b[],int size,int i);
void Write(FILE* p,book b[],int size);
void List(FILE* p,book b[],int size);                         
void Delete(FILE* p,book b[],int size,int CODE);             
void Update(FILE* p,book b[],int size);                       
void Add(FILE* p);                                            
void Search(FILE* p,book b[],int size);                     
void swap(char* a, char* b);
void BubbleSort(char a[], int length);
int func(char str1[] , char str2[]); 

int main(void)
{
	FILE* p;
	p = fopen("Books.txt","w");
	book b[n];
	printf("Enter information of %d books : \n\n", n);
	for(int i = 0; i < n; i++)
	{
		printf("Enter the code of %d-th book : ", i + 1);
		scanf("%d", &b[i].code);
		printf("\n\nEnter the title of %d-th book : ", i + 1);
		scanf("%s",b[i].title);
		printf("\n\nEnter the author of %d-th book : ", i + 1);
		scanf("%s",b[i].author);
		printf("\n\nEnter the year of %d-th book : ", i + 1);
		scanf("%d",&b[i].year);
		printf("\n\nEnter the price of %d-th book : ", i + 1);
		scanf("%f",&b[i].price);
		printf("\n------------------------------------------------\n");
	}
	
	Write(p, b, n);
	
	printf("Now, consider the following options and choose one of them to proceed : \n\n");
	printf("1. List Books\n2. Delete a Book\n3. Update a Book\n4. Add a Book\n5. Search\n6. Exit\n\n");
	int c = 1;
	while(c != 6)
	{
		
		printf("\nEnter your choice (1,2,...,6)\tEnter 6 to exit : ");
		scanf("%d", &c);
		
		if(c == 1)
		{
			List(p, b, n);
			printf("\n\nAll books sorted seccessfully.");
		}
		else if(c == 2)
		{
			int CODE;
			printf("\n\nEnter the code of the book which is going to be deleted : ");
			scanf("%d", &CODE);
			int flag = 1;
			for(int i = 0;i < n; i++)
			{
				if(b[i].code == CODE)
				{
					Delete(p, b, n, b[i].code);
					printf("\n\nThe book with the code %d deleted seccessfully.", b[i].code);
					flag = 0;
				}
			}
			if(flag)
				printf("\n\nYour code is out of range! no book was deleted!");
		}
		else if(c == 3)
		{
			Update(p, b, n);
			printf("\n\nUpdate done seccessfully.");
		}
		else if(c == 4)
		{
			FILE* q;
			q = fopen("Books.txt", "a");
			Add(q);
			printf("\n\nNew book added seccessfully.");
		}
		else if(c == 5)
		{
			Search(p, b, n);
		}
	}
	
}

void iWrite(FILE* p, book b[], int size, int i)
{
	fprintf(p, "%d ", b[i].code);
	fprintf(p, "%s ", b[i].title);
	fprintf(p, "%s ", b[i].author);
	fprintf(p, "%d ", b[i].year);
	fprintf(p, "%.1f ", b[i].price);
}
void Write(FILE* p, book b[], int size)
{
	for(int i = 0; i < size; i++)
	{
		fprintf(p, "%d ", b[i].code);
		fprintf(p, "%s ", b[i].title);
		fprintf(p, "%s ", b[i].author);
		fprintf(p, "%d ", b[i].year);
		fprintf(p, "%.1f ", b[i].price);
		fprintf(p, "\n"); 
	}
}

void List(FILE* p, book b[], int size)
{ 
	FILE* q1;
	q1 = fopen("SortedList.txt", "w");
	char* temp;
	temp = (char*)malloc(n+1);  
	int i;
	for(i = 0; i <= n - 1; i++)
	{
		*(temp+i) = b[i].title[0];
	}
	*(temp+i) = '\0'; 
	BubbleSort(temp,n+1);  
	
	int j, k;
	for(j = n - 1; j >= 0; j--)
	{ 
		for(k = 0; k < n; k++)
		{
			if(b[k].title[0] == temp[j])
			{
				iWrite(q1, b, size, k);
			}
			fprintf(q1, "\n");
		}
	}
}
void Delete(FILE* p,book b[], int size, int CODE)
{ 
	FILE* q2;
	q2 = fopen("NewListAfterDeleteaBook.txt","w");
	for(int k = 0; k < n; k++)
	{
		if(b[k].code == CODE)
			;
		else
			iWrite(q2,b,size,k);
		fprintf(q2,"\n");
	}
}
void Update(FILE* p,book b[],int size)
{ 
	FILE* q3;
	q3=fopen("NewListAfterUpdateaBook.txt","w");
	printf("Which book do you want to update(Enter the index) ? ");
	int s; 
	scanf("%d",&s);
	printf("\n\nYou entered %d that is the book %d is going to be updated.",s,s+1);
	printf("\n\nEnter the new code for the book : ");
	scanf("%d",&b[s].code);
	printf("\n\nEnter the new title for the book : ");
	scanf("%s",b[s].title);
	printf("\n\nEnter the new author for the book : ");
	scanf("%s",b[s].author);
	printf("\n\nEnter the new year for the book : ");
	scanf("%d",&b[s].year);
	printf("\n\nEnter the new price for the book : ");
	scanf("%f",&b[s].price);
	Write(q3,b,size);
}
void Add(FILE* p)
{
	book nb;
	printf("Enter information of new book (book %d) : ",n+1);
	printf("\n\nEnter the code : ");

	scanf("%d",&nb.code);
	fprintf(p,"%d ",nb.code);
	
	printf("\n\nEnter the title : ");
	scanf("%s",nb.title);
	fprintf(p,"%s ",nb.title);
	
	printf("\n\nEnter the author : ");
	scanf("%s",nb.author);
	fprintf(p,"%s ",nb.author);
	
	printf("\n\nEnter the year : ");
	scanf("%d",&nb.year);
	fprintf(p,"%d ",nb.year);
	
	printf("\n\nEnter the price : ");
	scanf("%f",&nb.price);
	fprintf(p,"%f",nb.price);
}
void Search(FILE* p,book b[],int size)
{ 
	FILE* q5;
	q5=fopen("ListContainWord.txt","w");
	char word[1000];
	printf("Enter a word : ");
	scanf("%s",word);
	int k; int flag=1;
	for(k = 0; k < n; k++)
	{
		if(func(word,b[k].title))
		{
			iWrite(q5,b,size,k);
			flag = 0;
		}
		fprintf(q5,"\n");
	}
	if(!flag)
		printf("\n\nSome of the books contain your word.");
	if(flag)
		printf("\n\nNone of the books contain your word!");
}

void swap(char* a, char* b)
{      
   int t;
   t=*a; *a=*b; *b=t;
}
void BubbleSort(char* a, int length)
{ 
   for(int i = 0; i<length; i++) 
   { 
      int flag = 1;         
      for(int j = 0; j<length-i-1; j++) 
	  {
         if(a[j] < a[j+1]) 
		 {       
            swap(&a[j], &a[j+1]);
            flag = 0;    
         }
      }
      if(flag)
         break;      
   }
}
int func(char str1[] , char str2[])
{ 
	if(strlen(str1)>strlen(str2))
		return 0;
	char ch = str1[0];    
	int i,j=0,k;
	for(;str2[j]!='\0';j++)
	{
		k = j;
		if(str2[j] == ch)
		{
			i = 1; k++;
			for(;str1[i] != '\0'; i++)
			{
				if(str1[i] == str2[k])
				{
					k++;
					continue;
				}
				else 
					break;
			}
			if(i == strlen(str1)) 
				return 1;
		}
	}
	return 0;
}

