void insertion_sort(int arr[], int i, int n)

{

    if (i == n)

    {

        return;

    }

    int j = i;

    while (j > 0 && arr[j] < arr[j - 1])

    {

        int temp = arr[j - 1];

        arr[j - 1] = arr[j];

        arr[j] = temp;

        j--;

    }

    insertion_sort(arr, i + 1, n);

}

void insertionSort(int arr[], int n)

{

    return insertion_sort(arr,0,n);

}
