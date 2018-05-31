int linearSearch(int array[], int searchValue)
{
    for(int i = 0; i < array.size; i++)
    {
        if (searchValue == array[i])
        {
            return i;
        }
    }

    return -1;
}
