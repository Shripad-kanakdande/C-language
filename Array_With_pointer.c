#include<stdio.h>
int arr[100];
int size,*i,*j,choice;
void create(int []);
void display(int[]);
void swap(int *a, int *b)
void delete(int []);
void insert(int []);
void modify(int []);
void linear(int []);
void binary(int[]);
void bubble_sort(int []);
void selection_sort(int []);
void insertion_sort(int []);
int main()
{
    void create(int arr[])
    {
        printf("Enter the size of array ");
        scanf("%d",&size);
        printf("\nEnter the elements of array one at a time\n");  //creating array
        for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    }
    void display(int arr[])
    {
        printf("\nIndex  ");  //displaying the index of array elements
        for(i=0;i<size;i++)
        printf("a[%d]\t",i);
        printf("\nArray  ");  //displyaing array
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
    }
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void insert(int *arr)
    {
        int num1,postn;
        printf("\nYou have selected INSERTION operation\n");
        printf("\nEnter the element to be inserted: ");
        scanf("%d",&num1);
        printf("\nEnter the position where the element is to be inserted(First index is 0): ");
        scanf("%d",&postn);
        for(int i=0;i<=(size-postn-1);i++)
        {
           *(arr+size-i) = *(arr+size-i-1); //shifting elements to right
        }
        *(arr+postn) = num1;
        size++;
        printf("\nThe array after inserting the element: ");
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
    }
    void modify(int *arr)
    {
        int num;
        int chnge, positn;
        printf("\nYou have selected MODIFICATION operation\n");
        printf("\nEnter the element to be modified: "); 
        scanf("%d",&num);
        printf("\nEnter modification: ");
        scanf("%d",&chnge);
        for(i=0;i<size;i++)
        {
            if(*(arr+i)==num) //searching the element in array which is to be modified
            {
                positn = (arr+i);
                *(arr+positn) = chnge; //modification
            }
        }
        printf("The modified array is: ");
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
    }
    void delete(int arr[])
    {
        int elmnt; //deleting an element from array
        printf("\nYou have selected DELETION operation\n");
        printf("\nEnter the element to be deleted ");
        scanf("%d",&elmnt);
        for(i=0;i<size;i++) 
        {
            if(*(arr+i)==elmnt) //searching the element entered in array
            {
                int j = (arr+i);    //declaring the index of element to be deleted
                for(i=j;j<size;i++) //shifting left including the element to be deleted
                {
                    *(arr+i) = *(arr+i+1); //shifting algorithm
                }
            }
        }
        size--;
        printf("\nThe array after deleting element ");
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
    }
    void linear(int *arr)
    {
        int num1;
        int count=0;
        printf("\nEnter the element to be searched: "); //taking input the element to be searched
        scanf("%d",&num1);
        for(i=0;i<size;i++)
        {
            if(*(arr+i)==num1)
            {
                count++; 
            }
        }
        if(count==0)
        {
            printf("\nThe number %d is not present in the array",num1); //presence of element
        }
        else
        {
            printf("\nThe number %d is present in the array",num1); 
        }  
        printf("\nNumber of times the element occurs in array: %d",count); //count of number of occurrences
        printf("\nThe index at which the element is occuring: ");
        for(i=0;i<size;i++)
        {
            if(*(arr+i)==num1)
            {
                printf("\t%d",i);   //displaying the index where the element is present
            }
        } 
    }
    void binary(int *arr)
    {
        int lower,upper,mid,search,pass=1;
        printf("\nEnter element you want to search:");
        scanf("%d",&search);
        lower=0;
        upper=n-1;
        mid=(upper+lower)/2;
        int found=0;
        int temp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(*(arr+j)>*(arr+1+j))
                {
                    swap((arr+j),(arr+1+j));
                }
            }
        }
        if(arr[mid]<search)
        {
            lower=mid+1;
            mid=(upper+lower)/2;
        }
        else if(arr[mid]==search)
        {
        printf("\n\n%d is found. ",search);
        found=1;
        break;
        }
        else
        {
            upper=mid-1;
            mid=(upper+lower)/2;
        }
        if(found!=1)
        printf("\n\n%d not found in the list",search)
        if(found!=1)
        printf("\n%d not found in the list",search); 
    }

    void bubble_sort(int arr[])
    {
        int temp, swap, num;
        int count=0,pass=0,itn=0,comp=0;
        for(int i=0;i<size-1;i++)    //for passes
        {
            printf("\n-------------------------------------------------------------------------------------");
            printf("\nPass %d :",i+1);
            pass++;
            for(j=0;j<size-i-1;j++)  //for iteration and swapping wherever required
            {
                printf("\nIteration %d: ",j+1);
                itn++;
                if(*(arr+j)>*(arr+j+1))
                {
                    swap = 1;
                    count=count+1;  //counting number of swaps
                    comp++;    //counting number of comparisons
                    swap((arr+j),(arr+j+1));    //swapping
                    for(num=arr;num<(size+arr);num++)
                    printf("%d\t",*num);
                    printf("\tSwap");
                }
                else
                {
                    swap = 0;
                    for(num=arr;num<(size+arr);num++)
                    printf("%d\t",*num);
                }
            }
        }
        printf("\n-------------------------------------------------------------------------------------");
        printf("\nSorted Array:   ");
        for(i=arr;i<(size+arr);i++)      //displaying sorted array
        printf("%d\t",*i);
        if(count==0)
        printf("\nThis is the BEST CASE condition");
        else if(count==itn)
        printf("\nThis is the WORST CASE conditon");
        else
        printf("\nThis is the AVERAGE CASE condition");
        printf("\nNumber of swaps: %d",count);
        printf("\nNumber of Passes: %d",pass);
        printf("\nNumber of iterations: %d", itn); 
    }
    void selection_sort(int *arr)
    {
        int min,num,a,b,swaps,pass=0,swapnum=0;
        for(i=0;i<size-1;i++)
        {
            min = i;                   //assuming element at index i to be smallest
            for(int j=i+1;j<size;j++)
            {
                if(*(arr+min)>*(arr+j))    //swapping
                {
                    min = j;
                    swaps = 0;
                    pass++;
                }    
            }
            swap((arr+j), (arr+i));
            printf("\n------------------------------------------------------------");
            printf("\nPass %d: ",i+1);       //printing passes
            for(num=arr;num<(size+arr);num++)
            printf("%d\t",*num);
            printf("\nMin: %d", arr[min]);
        }
        printf("\n------------------------------------------------------------");
        printf("\nSorted Array ");
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
        if(swapnum==size-1)
        printf("\nThis is WORST CASE");
        else if(swapnum==0)
        printf("\nThis is BEST CASE");
        else
        printf("\nThis is AVERAGE CASE");
        printf("\nPasses: %d",pass);
        printf("\nSwaps: %d",swapnum);

    }
    void insertion_sort(int *arr)
    {
        int i, j;
        int temp,num;
        for(i=1;i<size;i++)
        {
            temp = *(arr+i);                   
            for(j=i-1;j>=0;j--)
            {
                if(*(arr+j)>temp)    
                {
                    *(arr+j+1) = *(arr+j);
                }
                else
                break;
                insert++;
            }
            *(arr+j+1) = temp;
            printf("\n------------------------------------------------------------");
            printf("\nPass %d: ",i);       
            for(num=arr;num<(size+arr);num++)
            printf("%d\t",*num);
        }
        printf("\n------------------------------------------------------------");
        printf("\nSorted Array ");
        for(i=arr;i<(size+arr);i++)
        printf("%d\t",*i);
        printf("\t%d",arr[i]);
        if(insert==size-1)
        printf("\nThis is WORST CASE");
        else if(insert==0)
        printf("\nThis is BEST CASE");
        else
        printf("\nThis is AVERAGE CASE");
        printf("\nPasses: %d",size-1);
        printf("\nInsertion: %d",insert);
    }
    create(arr);
    display(arr);
    do
    {
        printf("\n(1) Enter 1 to insert element in array \n(2) Enter 2 to delete the element \n(3) Enter 3 to modify the element \n(4) Enter 4 to search the element");
        printf("\n(5) Enter 5 to sort the elements in array \n(6) Enter 6 to Quit ");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
       {
            case 1: insert(arr);break;
            case 2: delete(arr);break;
            case 3: modify(arr);break;
            case 4:
            {
                printf("\n(1) Enter 1 to apply LINEAR SEARCH \n(2) Enter 2 to apply BINARY SEARCH");
                char choice1;
                printf("\nEnter the choice: ");
                scanf("%d",&choice1);
                switch(choice1)
                {
                    case 1: linear(arr);break;
                    case 2: binary(arr);break;
                }
                break;
            }
            case 5:
            {
                printf("\n(1) Enter 1 to apply BUBBLE SORT \n(2) Enter 2 to apply SELECTION SORT \n(3) Enter 3 to apply INSERTION SORT");
                char choice2;
                printf("\nEnter the choice: ");
                scanf("%d",&choice2);
                switch(choice2)
                {
                    case 1:  bubble_sort(arr);break;
                    case 2: selection_sort(arr);break;
                    case 3: insertion_sort(arr);break;
                    default: printf("\nINVALID INPUT entered");
                }
                break;
            }
            default:
            printf("\nPROGRAM ENDED");break;
        } 
    } 
    while (choice != 6);
}


