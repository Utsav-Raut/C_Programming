#include<stdio.h>

int *insertion_sort(int a[], int len_of_arr)
{
	
	for(int j=1; j < len_of_arr; j++)
	{
		int key = a[j];
		int i = j - 1;
		while(i>=0 && a[i] < key)
		{
			a[i+1] = a[i];
			i = i - 1;
		}
		a[i+1] = key;
	}
	return a;
}

int main()
{
	int *get_sorted_list, n;
	printf("Enter the lenght of the array:\n");
	scanf("%d",&n);
	printf("\nNow enter the array elements:\n");
	int arr[n];
	for(int k=0; k<n; k++)
	{
		scanf("%d",&arr[k]);
	}

	int len_of_arr = (int)(sizeof(arr) / sizeof(arr[0]));
	printf("Size of array = %d\n",(int)sizeof(arr));
	printf("The Length of the array is = %d\n",len_of_arr);

	get_sorted_list = insertion_sort(arr, len_of_arr);

	printf("The sorted array is:\n");

	for(int k=0; k<n; k++)
	{
		printf("%d, ",get_sorted_list[k]);
	}

}
