#include <iostream>
using namespace std;
int binary(int f, int l, int num, int a[])
{
    int m;
    if (l >= f)
    {
        m = f + (l - f) / 2;
        if (a[m] == num)
        {
            return m;
        }
        else if (a[m] > num)
        {
            return binary(a, f, m - 1, num);
        }
        else
        {
            return binary(a, f, m + 1, num);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int i, j, n, temp;
    int a[n], num;
    int l = (n - 1), f = 0;
    int *p = a;
    cout << "enter the number of elements :\t";
    cin >> n;
    cout << "enter numbers :\t";
    for (i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (p[j] > p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    cout << "accending order of numbers :";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << a[i + 1];
    }
    //binary search
    cout << "enter the number for search :" << endl;
    cin >> num;
    int result = binary(a, 0, n - 1, num);
    cout << "Element is present at index " << result;
    return 0;
}
