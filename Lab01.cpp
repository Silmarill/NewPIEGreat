#include <iostream>
#include <iomanip>
using namespace std;

//https://www.onlinegdb.com/A-DHrPYHR

int main() {
    setlocale(0, "");

    double A[5][5];
    int row, column;
    int max = 0;
    int min = 999;
    int maxI, maxJ, minI, minJ;
    
    cout << "Введите количество строк матрицы: ";
    cin >> row;
    cout << "Введите количество столбцов матрицы: ";
    cin >> column;
    
    for (int row_counter = 0; row_counter < row; ++row_counter) {
        for (int column_counter = 0; column_counter < column; ++column_counter) {
             cout << "Введите A["  << row_counter  << "," << column_counter <<"] = ";
             cin >> A[row_counter][column_counter];
        }
    }
    
    cout << endl << "Заданная матрица в исходном виде: " << endl << endl;
    
    for (int row_counter = 0; row_counter < row; ++row_counter) {
        for (int column_counter = 0; column_counter < column; ++column_counter) {
            cout << A[row_counter][column_counter] << " ";
        }
            cout << endl;        
    }
    
    for (int row_counter = 0; row_counter < row; ++row_counter) {
        for (int column_counter = 0; column_counter < column; ++column_counter) {
            if (A[row_counter][column_counter] > max){
                max = A[row_counter][column_counter];
                maxI = row_counter;
                maxJ = column_counter;
            }
            if (A[row_counter][column_counter] < min){
                min = A[row_counter][column_counter];
                minI = row_counter;
                minJ = column_counter;
            }
        }
         cout << endl;
    }
    
    cout << " |наибольшее = " << max << "\n";
    cout << " |наименьшее = " << min << "\n";
  
    A[maxI][maxJ] = min;
    A[minI][minJ] = max;
    
    cout << endl << "Заданная матрица в измененном виде: " << endl << endl;
   
    for (int row_counter = 0; row_counter < row; ++row_counter) {
        for (int column_counter = 0; column_counter < column; ++column_counter) {
            cout << A[row_counter][column_counter] << " ";
        }
            cout << endl;        
    }

    return 0;
}