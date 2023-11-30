/* Programmer = Sudhanshu Barnwal
Topic :- Target sum
Purpose = Count the number of triplets whose sum is equal to the given value x
e.g. arr[5] = { 1 , 2 , 3 ,4 ,5 ,6 ,7 ,8 ,9 , 10 , 11, 12 }

if x = 12
print 2 + 4 + 6 = 12 , 1 + 3 + 8 = 12 , 2 + 7 + 3 = 12 , etc

Date = 10/01/2023   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "\n Enter that how many number do you want to type :- ";
    cin >> size;

    int arr[size];
    for (int index = 0; index < size; index++)
    {
        cout << "\n Enter the value of " << index << " index :- ";
        cin >> arr[index];
    }

    int x;
    cout << "\n Enter the value of x :- ";
    cin >> x;

    int triplets = 0;

    cout << "\n The result is \n " << endl ;
    for (int index1 = 0; index1 < size; index1++)
    {
        for (int index2 = index1 + 1; index2 < size; index2++)
        {
            for (int index3 = index2 + 1; index3 < size; index3++)
            {
                if (arr[index1] + arr[index2] + arr[index3] == x)
                    cout << " ----> " << ++triplets << ") " << arr[index1] << " + " << arr[index2] << " + " << arr[index3] << " = " << x << endl;
            }
        }
    }

    cout << "\n ----> No. Of Triplets i.e. " << triplets << " whose sum is equal to " << x << endl;
    cout << endl;
    return 0;
}