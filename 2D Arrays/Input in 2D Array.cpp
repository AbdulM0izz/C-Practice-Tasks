#include <iostream>
using namespace std;
int main()
{
    int rows,columns;
    cout << "Rows: "<<endl;
    cin>>rows;

     cout << "Columns: "<<endl;
     cin >>columns;
    
    int arr[rows][columns];

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cin >> arr[i][j];
        }
    }

     for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            cout << arr[i][j]<< " ";
        }cout << endl;
    }





    return 0;
}