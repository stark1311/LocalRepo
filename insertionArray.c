#include<stdio.h>

void display(int arr[],int n)
{

    // Traversal
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",arr[i]);

    }
    printf("\n");
}

    int indexInsertion (int arr[] , int size , int element , int capacity, int index  )
    {

        // incertion in array

        if (size >=capacity ) {
            return -1 ;

        }

        for (int i = size -1; i >= index ; i--)
        {
            arr[i+1] = arr[i];
        }

        arr[index] = element ;
         return 1;

    }
   
    

int main()
{

    int arr[100]={2,32,56,85,45,99,13,18};
    int size = 8 , index , capacity ;
    int element ;
    printf("Current  Elements of the array are : \n");
     display(arr,size);

    printf("Enter the element you want to insert : ");
    scanf ("%d",&element); 

    printf("Enter the position of index where you want to insert : ");
    scanf ("%d",&index); 

    indexInsertion (arr, size,element ,100, index  );
    size+=1;
     printf("After INSERTION the Elements of the array are: ");
    display(arr,size);
    return 0;

}