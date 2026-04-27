// Omar Tarek 20250681
int linearSearch(int arr[], int n, int search, int index)
{
    if (index >= n) // if the index is outside of the array limits return -1 for not found
    {
        return -1;
    }
    if (arr[index] == search)
    {
        return index; // return index if its found
    }
    return linearSearch(arr, n, search, index + 1); // go to the next index
}
