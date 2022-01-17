#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void Input(int *,int);
void Display(int *,int);
void InsertionSort(int *,int);
int main()
{
	int a[100];
	Input(a,100);
	Display(a,100);
	InsertionSort(a,100);
	Display(a,100);
}

void Input(int *p,int s)
{
	int i;
	printf("Random 100 no. has been taken in range ( 0-1000 ):\n");
	srand(getpid());
	for(i=0;i<s;i++)
		p[i]=rand()%1001;
}


void Display(int *p,int s)
{
	int i;
	for(i=0;i<s;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void InsertionSort(int *p,int s)
{
	int i,j,temp;
	for(i=1;i<s;i++)
	{
		j=i-1;  // j represents the last index of sorted part
		temp=p[i];// unsorted ele
		while(j>=0 && temp<p[j])
		{
			p[j+1]=p[j];
			j--;
		}
		p[j+1]=temp;
	}
        printf("Insertion sorted element are :\n");
}
