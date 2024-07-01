/*  ----------------------- हरे कृष्ण  -----------------------
Programmer = Sudhanshu Barnwal
Topic = String
Purpose = All about String introduction
Date = 23/05/2024   */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << endl;
    // char fruit[] = {'a', 'p', 'p', 'l', 'e'};

    // for (int i = 0; i < sizeof(fruit); i++)
    // {
    //     cout << fruit[i];
    // }

    /* char arr[10];

    cin >> arr;
    cout << arr << endl ; //  I have a doubt that there is allowance for 10 character but when i give input more than 10 still arr print */

    /* char arr[10] ;
    cin >> arr;
    arr[2] = '\0'; // Null character stops the further execution of letters

    cout << arr; */

    /*   string name = "sudhanshu";
    cin >> name; // This gives me problem when I give input sudhanshu barnwal . So , this will never print barnwal because it is having property when someone press space , tab or enter then it stops reading the data which is entered

    cout << name << endl ;  */

    /* string name;

    getline( cin , name ); // This is used for overcome from cin properties but this stops reading data when enter button press

    cout << name << endl ; */

    /*  string names = "sudhanshuBarnwal";

    cout << names.size() << endl; // This also count space in string
    cout << names << endl;

    string name1 = "Sudhanshu";
    string name2 = "Deepak";

    string newName = name1 + name2;
    newName = name1.append(name2);

    cout << newName << endl;

    names.push_back('s'); // This can only add character at behind of string
    cout << names << endl;

    names.pop_back(); // This can only delete last character at behind of string
    cout << names << endl;   */

    // Now, print Sudhanshu is a "good" boy

    string sentence = "Sudhanshu is a \"good\" boy ";

    cout << sentence << endl;

    cout << "Null Character : " << "\\0" << endl;  // This print null character i.e. \0
    cout << "Escape Character : " << "\\" << endl; // This print escape character i.e. "\"

    // Read about null character and escape character from documentation

    cout << endl;
    return 0;
}