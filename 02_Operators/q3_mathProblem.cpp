/* Programmer = Sudhanshu Barnwal 

Purpose = There are 45 pupils in the class, 25 of whom are boys. Write a Program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

Date = 24/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int totalStudent = 45 ;
    int totalStudentGotGradeA = 80*totalStudent/100 ;
    int gradeABoy = 17 ;
    int girlsGotAgrade = totalStudentGotGradeA - gradeABoy ;

    cout << endl << girlsGotAgrade << " girls received grade A." << endl ;
    return 0;
}