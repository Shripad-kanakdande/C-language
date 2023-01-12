#include <stdio.h>
#include <stdlib.h>
int arr_size = 0;
int main();
void flow (){
    char choice;
    printf("\n\nDo you want to continue (Y | N): ");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'Y' || choice == 'y')
        main();
    else 
        exit(0);
}
void display_rev(int dis_rev[] ){
    printf("\nYour Array elements are: ");
    int i;
	for(i = arr_size - 1; i >= 0; i--){
        printf("%d ", dis_rev[i]);
    }
}
void display(int dis[]){
	int i;
    printf("\nYour Array elements are: ");
    for(i = 0; i < arr_size; i++){
        printf("%d ", dis[i]);
    }    
}
void insert(int arr_insert[]){
    int ins_ele, pos;
    printf("\nEnter element you want to insert: ");
    scanf("%d", &ins_ele);
    printf("\nEnter postion at which you want insert this element: ");
    scanf("%d", &pos);
    arr_size++;
    int i ;
    for (i= arr_size - 2; i >= pos - 1; i--){
        arr_insert[i + 1] = arr_insert[i];
    }
    arr_insert[pos - 1] = ins_ele;
    display(arr_insert);
    flow();
}
void delete(int arr_delete[]){
    int pin;
    display(arr_delete);
    printf("\n\nEnter position of element you want to delete: ");
    scanf("%d", &pin);
    int i;
    for (i= pin; i < arr_size; i++){
        arr_delete[i - 1] = arr_delete[i];
    }
    arr_size--;
    display(arr_delete);
    flow();
}
void modify(int arr_mod[]){
    int pin, mod_ele;
    display(arr_mod);
    printf("\n\nEnter position of array you want to modify: ");
    scanf("%d", &pin);
    printf("\n\nEnter new value: ");
    scanf("%d", &mod_ele);
    arr_mod[pin - 1] = mod_ele;
    display(arr_mod);
    flow();
}
void bubble_sort_asc(int arr_bubb_asc[]){
    int temp;
    int i;
    for (i= 0; i < arr_size; i++){
        int flag = 0;
        int j;
		for (j= 0; j < arr_size - 1 - i; j++){
            if (arr_bubb_asc[j] > arr_bubb_asc[j + 1]){
                flag = 1;
                temp = arr_bubb_asc[j];
                arr_bubb_asc[j] = arr_bubb_asc[j + 1];
                arr_bubb_asc[j + 1] = temp;
                // count++;
            }
        }
        if (flag == 0)
            break;
    }
}
void inser_sort_asc(int arr_ins_asc[]){
    int temp;
    int i,j;
    for (i= 1; i < arr_size; i++){
        for (j= i; j > 0; j--){
            if (arr_ins_asc[j] < arr_ins_asc[j - 1]){
                temp = arr_ins_asc[j];
                arr_ins_asc[j] = arr_ins_asc[j - 1];    // 0 1 2  3 4 5
                arr_ins_asc[j - 1] = temp;               //1 4 5 10 6 2 
            }
            else {
                break;
            }
        }
    }
}
void selc_sort_asc(int arr_selc_asc[]){
    int min, temp;
    int i;
    for (i= 0; i < arr_size - 1; i++){
        min = i;
        int j;
        for (j = i + 1; j < arr_size; j++){     // 0 1 2 3 4
            if (arr_selc_asc[j] < arr_selc_asc[min]){
                min = j;
            }
        }
        temp = arr_selc_asc[min];
        arr_selc_asc[min] = arr_selc_asc[i];
        arr_selc_asc[i] = temp;
    }
}
void linear_srch(int arr_lnr[], int key){
    int i;
    for ( i = 0; i < arr_size; i++){
        if (key == arr_lnr[i])
            break;
    }
    if (i != arr_size)
        printf("\nYour KEY found at index of number: %d\n", i);
    else    
        printf("\nSearch was unsuccesful, you KEY hasn't found.\n");
    flow();
}
int bin_srch(int arr_bin[], int key, int beg, int end){
    int mid;
    while (beg <= end){
        mid = (beg + end) / 2;
        if (arr_bin[mid] == key)
            return mid;
        else if (key < arr_bin[mid])
            end = mid - 1;
        else 
            beg = mid + 1;
    }
    return -1;
}
int main(){
    int arr_input[250], option;
    printf("\n\nName: Shripad Kanakdande\nRoll No. 22234\nTitle: Array Operations\n");
    printf("\n==================================================================");
    printf("\n\nEnter the size of Array: ");
    scanf("%d", &arr_size);
    printf("\nEnter the elements of array on which you want to perform certain Operation: ");
    int i;
	for (i= 0; i < arr_size; i++){
        scanf("%d", &arr_input[i]);
    }
    printf("\nWhich operation do you want to perform\n1. Display\n2. Insert\n3. Delete\n4. Modify\n5. Sort\n6. Search\n");
    printf("\nEnter your option here: ");
    scanf("%d", &option);
    switch(option){
        case 1: {
            display(arr_input);
            flow();
            break;
        }
        case 2: {
            insert(arr_input);
            break;
        }
        case 3: {
            delete(arr_input);
            break;
        }
        case 4: {
            modify(arr_input);
            break;
        }
        case 5: {
            int sort_opt, sort_type;
            printf("\nIn which type you want to arrange elements of Array:\n1. Ascending\n2. Descending\n");
            printf("\nEnter your choice here: ");
            fflush(stdin);
            scanf("%d", &sort_type);
            switch(sort_type){
                case 1: {
                    printf("\nWhich sorting technique you want to perform: \n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n");
                    printf("\nEnter your choice here: ");
                    scanf("%d", &sort_opt);
                    switch(sort_opt){
                        case 1: {
                            bubble_sort_asc(arr_input);
                            display(arr_input);
                            flow();
                            break;
                        }
                        case 2: {
                            inser_sort_asc(arr_input);
                            display(arr_input);
                            flow();
                            break;
                        }
                        case 3: {
                            selc_sort_asc(arr_input);
                            display(arr_input);
                            flow();
                            break;
                        }
                    }
                    break;
                }
                case 2: {
                    printf("\nWhich sorting technique you want to perform: \n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n");
                    printf("\nEnter your choice here: ");
                    scanf("%d", &sort_opt);
                    switch(sort_opt){
                        case 1: {
                            bubble_sort_asc(arr_input);
                            display_rev(arr_input);
                            flow();
                            break;
                        }
                        case 2: {
                            inser_sort_asc(arr_input);
                            display_rev(arr_input);
                            flow();
                            break;
                        }
                        case 3: {
                            selc_sort_asc(arr_input);
                            display_rev(arr_input);
                            flow();
                            break;
                        }
                    }
                    break;
                } 
            }
            break;
        }
        case 6: {
            int srch_type, key, count;
            printf("\nEnter KEY you want to find: ");
            scanf("%d", &key);
            printf("\nWhich type of search do you want to perform:\n1. Linear Search\n2. Binary Search\n");
            printf("\nEnter your option here: ");
            scanf("%d", &srch_type);
            switch(srch_type){
                case 1: {
                    linear_srch(arr_input, key);
                    break;
                }
                case 2: {
                    bubble_sort_asc(arr_input);
                    int result = bin_srch(arr_input, key, 0, arr_size - 1);
                    if (result == -1)
                        printf("\nSearch was unsuccesful, you KEY hasn't found.\n");
                    else
                        printf("\nYour KEY found at index of number: %d\n", result);
                    flow();
                    break;
                }
            }
        }
    }
}

