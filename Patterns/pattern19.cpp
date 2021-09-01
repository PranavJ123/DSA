//Hollow rhombus
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (num - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num; j++)
        {
            if (i == 1 || i == num)
            {
                cout << "*";
            }
            else if (j == 1 || j == num)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}