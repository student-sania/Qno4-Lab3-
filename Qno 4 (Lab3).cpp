// Q no: 04
#include<iostream>
using namespace std;

int main(){
    int n,m,p;
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    cout << "Enter Size: ";
    cin >> p;
    
    int arr1[n][m][p];
    cout << "Enter first 2D Array Elements:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<p; k++){
                cin >> arr1[i][j][k];
            }    
        }
    }
    
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    cout << "Enter Size: ";
    cin >> p;
    int arr2[n][m][p];
    cout << "Enter Second 2DArrays elements:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<p; k++){
                cin >> arr2[i][j][k];
            }    
        }
    }
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    cout << "Enter Size: ";
    cin >> p;
    int mul[n][m][p];
    cout << "Multiplication of Two Integer 3DArrays:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<p; k++){
                mul[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
                cout << mul[i][j][k] << " ";
            }
			cout << endl;    
        }     
    }       
    return 0;
}