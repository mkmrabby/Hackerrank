/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> 
using namespace std;

int main() {
    // Declare as a variable of number of Row Sequence and Query Sequence
    int numRowSeq;
    int numQuerySeq;
    int Array_Col_number;
    
    // Declare as a variable of Row and Query Array
    int** Row_Array;
    int** Query_Array;

    // Takes input of numRowSeq and numQuerySeq
    cin >> numRowSeq; 
    cin >> numQuerySeq;

    // Declare Row and Query Array
    Row_Array=new int* [numRowSeq];
    Query_Array=new int* [numQuerySeq];

    // Row Array Input
    for (int row=0;row<numRowSeq;row++){
        cin >> Array_Col_number; // Col number input
        Row_Array[row]=new int[Array_Col_number]; // Full Array Initialization

        for (int col=0;col<Array_Col_number;col++){
            cin >> Row_Array[row][col];
        }
    }

    // Query Array Input
    for (int row=0; row<numQuerySeq; row++){
        Query_Array[row]=new int[2];
        cin >> Query_Array[row][0] >> Query_Array[row][1];
        cout << Row_Array[Query_Array[row][0]][Query_Array[row][1]]<<endl;
    }


    return 0;
}