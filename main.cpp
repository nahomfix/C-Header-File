#include <iostream>
#include "linear.h"

using namespace std;

int main()
{
    int a[] = {15, 23, 7, 45, 87, 16};

    int userValue;

    cout << "Enter an integer: " << endl;
    cin >> userValue;

    int result = linearSearch(a, userValue);

    if(result >= 0)
    {
        cout << "The number " << a[result] << " was found at the"
                " element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found. " << endl;
    }

    return 0;
}
