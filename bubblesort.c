#include <stdio.h>
int bubblesort(int a[], int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    for(j=0;j<size-1-i;j++)
{
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;    
    
    }
}    
}

int main(void) 
{

	int m[10],size,i;
	printf("Enter the size:\t");
	scanf("%d",&size);
	printf("Enter the elements:\n");
	for(i=0;i<size;i++)
	scanf("%d",&m[i]);
	bubblesort(m,size);
    printf("The sorted array is:\n");
	for(i=0;i<size;i++)
	printf("%d\t",m[i]);
	
	return 0;
}
