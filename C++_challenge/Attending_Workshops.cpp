/*
A student signed up for  workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:

Implement  structures:

struct Workshop having the following members:

The workshop's start time.
The workshop's duration.
The workshop's end time.
struct Available_Workshops having the following members:

An integer,  (the number of workshops the student signed up for).
An array of type Workshop array having size .
Implement  functions:

Available_Workshops* initialize (int start_time[], int duration[], int n)
Creates an Available_Workshops object and initializes its elements using the elements in the  and  parameters (both are of size ). Here,  and  are the respective start time and duration for the  workshop. This function must return a pointer to an Available_Workshops object.

int CalculateMaxWorkshops(Available_Workshops* ptr)
Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.

Note: An array of unknown size () should be declared as follows:

DataType* arrayName = new DataType[n];
Input Format

Input from stdin is handled by the locked code in the editor; you simply need to write your functions to meet the specifications of the problem statement above.

Constraints

Output Format

Output to stdout is handled for you.

Your initialize function must return a pointer to an Available_Workshops object.
Your CalculateMaxWorkshops function must return maximum number of non-overlapping workshops the student can attend.

Sample Input

6
1 3 0 5 5 8
1 1 6 2 4 1
Sample Output

CalculateMaxWorkshops should return .

Explanation

The first line denotes , the number of workshops.
The next line contains  space-separated integers where the  integer is the  workshop's start time.
The next line contains  space-separated integers where the  integer is the  workshop's duration.

The student can attend the workshops  and  without overlap, so CalculateMaxWorkshops returns  to main (which then prints  to stdout).
 */


#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops{
    int n;
    Workshop* buf;
    Available_Workshops(int n):n(n), buf(new Workshop[n]){}
};

Available_Workshops* initialize(int start_time[], int duration[], int n){
    Available_Workshops* res=new Available_Workshops(n);

    for(int i=0; i<n; ++i){
        ((res->buf)+i)->start_time=start_time[i];
        ((res->buf)+i)->duration=duration[i];
        ((res->buf)+i)->end_time=start_time[i]+duration[i];
    }
    return res;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    sort(ptr->buf, (ptr->buf)+ptr->n, [](Workshop &a, Workshop &b){
        return a.end_time<b.end_time;
    });

    int curEnd=0;
    int res=0;

    for(auto i=ptr->buf; i!=(ptr->buf)+ptr->n;++i){
        if(i->start_time >= curEnd){
            res++;
            curEnd= i->end_time;
        }
    }

    return res;
}


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
