#include <stdio.h>

int main() {
    int n, m, last_index=0;
    printf("Enter the length of the array and the element to be searched within the array:\n");
    scanf("%d %d",&n, &m);
    int a[n];
    
    printf("Enter the array elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=1; i<=n; i++)
    {
        if(a[i] == m)
	{
		last_index = i;
	}
    }
    if(last_index == 0)
	    last_index = -1;
    printf("%d\n",last_index);
    return 0;
}
