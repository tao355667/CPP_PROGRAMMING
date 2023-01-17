#include <iostream>
using namespace std;
int main()
{
    int arr[2][2] = {{9, 8}, {7, 6}};
    int *p = arr[0] + 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << &arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "**arr = " << **arr << endl;

    cout<< "*(*(arr + 1) + 1) = " << *(*(arr + 1) + 1) << endl;
    cout<< "arr[0] = " << arr[0] << endl;
    cout << "arr[0]+1 = " << arr[0] + 1 << endl;
    cout << *p << endl;
    return 0;
}