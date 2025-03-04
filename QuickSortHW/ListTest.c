#include "List.c"
#include "sort.c"
#include <stdio.h>

int main()
{
    int initDataLength = 9;
    int initListData[] = {1, 9, 3, 52, 10, 7, 9, 12, 10};

    LIST *list = ListInit();
    for(int i = 0; i < initDataLength; i++)
        AppendToList(list, initListData[i]);
    printf("Unsorted: ");
    PrintListInfo(list);
    // Bubblesort(list->array, list->Length);
    QuickSort(list->array, 0, list->Length-1);
    // QuickSortLomuto(list->array, 0, list->Length-1);
    printf("Sorted: ");
    PrintListInfo(list);
    PrintSwapsAmmount();

    // Freeing the mem
    free(list->array);
    free(list);

    return 0;
}
