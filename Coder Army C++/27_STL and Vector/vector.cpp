/*  ----------------------- Hare Krishn  -----------------------
Programmer = Sudhanshu Barnwal
Topic = Vector Concept
Purpose = Vector Properties
Date = 16/12/2023   */

#include<bits/stdc++.h>
using namespace std;

int main()
{

    // vector create or declare
    /*             
     vector<int> vec;
    vector<int> vec1(5, 1);
    // size and capacity
    cout << "\nSize of vec : " << vec.size() << endl;
    cout << "Capacity of vec : " << vec.capacity() << endl;

    vec.push_back(24); // add elements in vector
    vec.push_back(67); 
    vec.push_back(75);
    cout << "\nSize of vec : " << vec.size() << endl;
    cout << "Capacity of vec : " << vec.capacity() << endl;

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    for (auto i = vec.begin(); i < vec.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;
    // Update value in vector
    vec[1] = 53;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    cout << endl;
    cout << "\nSize of vec1 : " << vec1.size() << endl;
    cout << "Capacity of vec1 : " << vec1.capacity() << endl;

    vec1.push_back(8);

    cout << "\nSize of vec1 : " << vec1.size() << endl;
    cout << "Capacity of vec1 : " << vec1.capacity() << endl;
    cout << endl;

    vector<int> vec2{234, 35, 23, 78, 25};
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }                                                      */

    // Delete Value from vector
    /*         vector<int> vec3;
    vec3.push_back(6);
    vec3.push_back(46);
    vec3.push_back(65);
    vec3.push_back(67);
    vec3.push_back(61);
    vec3.pop_back();

    cout << "\nSize of vec3 : " << vec3.size() << endl;
    cout << "Capacity of vec3 : " << vec3.capacity() << endl;
    cout << endl;

    vec3.erase(vec3.begin() + 1);

    cout << "\nSize of vec3 : " << vec3.size() << endl;
    cout << "Capacity of vec3 : " << vec3.capacity() << endl;
    cout << endl;
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }

    cout << endl;
    vec3.insert(vec3.begin() + 1, 50); // for insert the element at any particular index
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;
    // Update value at index 1
    vec3[1] = 14;
    for (int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    cout << endl;

    vec3.clear(); // This removes all element from vector
    cout << "\nSize of vec3 : " << vec3.size() << endl;
    cout << "Capacity of vec3 : " << vec3.capacity() << endl;  */

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(23);
    arr.push_back(221);

    // To Print first element of vector
    cout << arr[0] << endl;
    cout << arr.front() << endl;

    // To Print last element of vector
    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    cout << endl;

    /*
    // Copy vector like this from one vector to another created vector
    vector<int> copiedVec;
    copiedVec = arr;
    for (int i = 0; i < copiedVec.size(); i++)
    {
        cout << copiedVec[i] << " ";
    }
    cout << endl;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }    */

    vector<int> vec4{5, 235, 15, 54, 124};

    cout << "Vector is " ; 
    for (auto i = vec4.begin(); i < vec4.end(); i++)
    {
        cout << *i << " " ;
    }

    cout << endl;
    
    // Sort elements of vector in increasing order
    sort(vec4.begin(), vec4.end());
    sort(vec4.rbegin(), vec4.rend() , greater<int>());

    for (int i = 0; i < vec4.size(); i++)
    {
        cout << vec4[i] << " ";
    }
    cout << endl;

    // Sort elements of vector in decreasing order
    sort(vec4.rbegin(), vec4.rend()); // 1st trick

    for (int i = 0; i < vec4.size(); i++)
    {
        cout << vec4[i] << " ";
    }

    cout << endl;
    sort(vec4.begin(), vec4.end(), greater<int>()); // 2nd trick

    for (int i = 0; i < vec4.size(); i++)
    {
        cout << vec4[i] << " ";
    }

    // Search Elements in vector
    cout << binary_search(vec4.begin(), vec4.end(), 54) << endl; // It always return 0 and 1

    // Search elements with index in vector
    // sort
    auto val = find(vec4.begin(), vec4.end(), 54);
    cout << val - vec4.begin() << endl;

    cout << endl;

    // Homework

    // at
    // count
    // max
    // min
    // lowerbound
    // upperbound

    cout << endl;
    return 0;
}