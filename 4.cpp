#include <iostream>
using namespace std;

int main(){
  int rows, cols, min = 1000000, max = -1000000, bufer, n = 0, m = 0, a = 0, b = 0;
  
  cout <<"Введите количество строк ";
  cin >> rows;
  cout <<"Введите количество столбцов ";
  cin >> cols;
  cout <<"Введите элементы матрицы"<< endl;
  
  int matrix[rows][cols];
  
  for (int i = 0; i < rows; ++i){
    for (int j = 0; j < cols; ++j){
      cout <<"Введите элемент матрицы ["<< i << "] [" << j << "] ";
      cin >> matrix[i][j];

      if (matrix[i][j] > max) {
        max = matrix[i][j];
        n = i;
        m = j;
      }

      if (matrix[i][j] < min) {
        min = matrix[i][j];
        a = i;
        b = j;
      }
    }
  }
  
  cout <<"Исходная матрица"<< endl;
  for (int i = 0; i < rows; i+=1) {
    for (int j = 0; j < cols; j+=1){
      cout << matrix[i][j] << " ";
    }
  cout << endl;
  }
  
  cout << "Минимальный элемент матрицы: " << min << endl << "Максимальный элемент матрицы: " << max << endl;

  matrix [m][n] = min;
  matrix [a][b] = max;

  cout <<"Обработанная матрица"<< endl;
  for (int i = 0; i < rows; i+=1) {
    for (int j = 0; j < cols; j+=1){
      cout << matrix[i][j] << " ";
    }
  cout << endl;
  }
}