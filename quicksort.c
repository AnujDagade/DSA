#include <stdio.h>


int Partition(int a[], int low, int high)
{
	int pivot, i, j, temp;
	pivot = a[low];
	i = low+1;
	j = high;

	while(i<=j)
	{
		while(a[i]<=pivot)
			i++;
		while(a[j]>pivot)
			j--;

		if(i<j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	temp = a[j];
	a[j] = a[low];
	a[low] = temp;

	return j;

}

void quicksort(int a[], int low, int high)
{
	int PartitionIndex;
	
	if(low < high)
	{
		PartitionIndex = Partition(a, low, high);
		quicksort(a, low, PartitionIndex-1); //Left array
		quicksort(a, PartitionIndex+1, high); //Right  array
	}
}

void Display_Arr(int a[], int n)
{	
	printf("\n\tArray:");
	for(int i = 0; i <=n; i++)
		printf(" %d",a[i]);
}

int main()
{
	int a[] = {152,161,175,180,178};
	int n = 5;

	Display_Arr(a, n-1);
	printf("\n\t\nArray after sorting:");
	quicksort(a, 0, n-1);
	Display_Arr(a, n-1);

	return 0;

}
