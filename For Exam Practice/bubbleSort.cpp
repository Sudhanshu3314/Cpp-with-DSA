/* Programmer = Sudhanshu Barnwal
Topic = Bubble sort
Purpose = Using bubble sort for sorting the vector in increasing order

Best e.g. for bubble sorting
no of elements = 10

10 , 0 , 1 , 9 , 4 , 5 , 7 , 2 , 6 , 8

so, ans is In sorted Order { 0 , 1 , 2 , 4 , 5 , 6 , 7 , 8 , 9 , 10 }

Date = 20/09/2023   */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{

    int size = v.size() - 1;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        cout << endl;

        for (int j = 0; j <= size - i - 1; j++)
        {
            if (j == 0)
            {
                for (int k = 0; k <= size; k++)
                {
                    if (k == 0)
                    {
                        cout << "\n"
                             << ++count << ") ---> { " << v[k] << " , ";
                    }
                    if (k != 0 && k != size)
                    {
                        cout << v[k] << " , ";
                    }
                    if (k == size)
                    {
                        cout << v[k] << " } ";
                    }
                }
            }

            else
            {
                for (int k = 0; k <= size; k++)
                {
                    if (k == 0)
                    {
                        cout << "\n"
                             << "  ---> { " << v[k] << " , ";
                    }
                    if (k != 0 && k != size)
                    {
                        cout << v[k] << " , ";
                    }
                    if (k == size)
                    {
                        cout << v[k] << " } ";
                    }
                }
            }

            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if (flag)
            break;
    }

    cout << "\n\n In sorted Order { ";
    for (int i = 0; i <= size; i++)
    {
        if (i != size)
        {
            cout << v[i] << " , ";
        }
        if (i == size)
        {
            cout << v[i] << " } ";
        }
    }

    return;
}

int main()
{

    int size;
    cout << "\nEnter the size of vector : ";
    cin >> size;

    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the value of " << i << " index : ";
        cin >> vec[i];
    }

    bubbleSort(vec);

    cout << endl;
    return 0;
}