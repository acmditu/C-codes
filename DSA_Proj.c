#include<stdio.h>
#include<stdlib.h>

void display(int a[],int n);
int binary_search();
int linear_search();
void bubble_sort();
void selection_sort();
void insertion_sort();

int main(){
   int n,choice,i,res1,res2;
   char ch[20];
   printf("Enter no. of elements u want to Search/sort : ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
   }
   printf("Please select any option Given Below for Sorting : \n");

 while(1){
    printf("1.Binary seach\n2.Linear search\n3. Bubble Sort\n4. Selection Sort\n5. Insertion Sort\n6. Display Array.\n7. Exit the Program.\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        res1=binary_search(arr,n);
        printf("The element Was found at index %d",res1);
        break;
    case 2:
        res2=linear_search(arr,n);
        printf("The element Was found at Position %d",res2);
        break;
    case 3:
        bubble_sort(arr,n);
        break;
    case 4:
        selection_sort(arr,n);
        break;

    case 5:
        insertion_sort(arr,n);
        break;

    case 6:
        display(arr,n);
        break;
    case 7:
        return 0;
    default:
        printf("\nPlease Select only 1-7 option ----\n");
    }
    break;
}
return 0;
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",arr[i]);
   }
}

int binary_search(int arr[], int n)
{
    int element;
    printf("Enter element to be searched ");
    scanf("%d",&element);
    int low = 0, mid, high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int linear_search(int arr[],int n){
    int element1;
    printf("Enter the element you want to search ");
    scanf("%d",&element1);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element1)
        {
            return i;
        }
    }
    return -1;
}

void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-i-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
      }
  }
printf("After Bubble sort Elements are : ");
display(arr,n);
}

void selection_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
printf("After Selection sort Elements are : ");
display(arr,n);
}

void insertion_sort(int arr[],int n)
{
    int i,j,min;
    for(i=1;i<n;i++)
    {
        min=arr[i];
        j=i-1;
        while(min<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
printf("After Insertion sort Elements are : ");
display(arr,n);
} 