/* CREATOR:
Brittany Clarke
Bgc77987@uga.edu
University of Georgia - Class of 2019.
Computer Science student.
*/

// Sudoku cpp file
//The "meat" of this program. Contains all functions used by the program.
#include "Sudoku.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Print the board with proper formatting
void Sudoku::printBoard(){
  int row = 0;
  for(int i = 0; i < 9; i++){
    if(i == 0){
      cout << "Col:   " << i << "   ";
    }
    else{
      if(i%3 == 0 && i !=0){
	cout << "  ";
      }
      cout << i << "   ";
    }
    if(i == 8){
      cout << endl;
    }
  }
  for(int col = 0; col < 9; col++){
    if(col%3 == 0 && col!=0){
      for(int k = 0; k < 45; k++){
	cout << "-";
      }
      cout << endl;
    }
    for(row = 0; row < 9; row++){
      if(row == 0 && col == 0){
	cout << "Row:" << col << " ";
      } 
      if(row == 0 && col!=0){
	cout << col << "     ";
	}
      if(row%3 == 0 && row!=0){
        cout << "| ";
      }
      if(arr[col][row] == ' '){
	cout << "[ ]" << " ";
      }
      else{
	cout << "[" << arr[col][row] << "]" << " ";
      }
    }
    cout << endl;
  }
}

//Fill Sudoku board with random integers in random places.
void Sudoku::fillBoard(int num, int row, int col){
	srand(time(NULL));
  for(int i = 0; i < 36; i++){
	  
    //If number does not break rules, place number on board
      if(rowOcc(num,row,col) == true){
		i--;
      }
      if(colOcc(num,row,col) == true){
		i--;
      }
      if(blockOcc(num,row,col) == true){
		i--;	
      }
      else if(rowOcc(num,row,col) == false && colOcc(num,row,col) == false && blockOcc(num,row,col) == false) {
		arr[row][col] = num;
      }
	  //Numbers index is from 1-9, but row & column indices are from 0-8.
      num = (rand()%9+1);
      row = (rand()%9);
      col = (rand()%9);
  }
}

//Initialize the sudoku board to be empty
Sudoku::Sudoku(){
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      arr[i][j] = ' ';
    }
  }
}

//Check for row occurrence of the number
bool Sudoku::rowOcc(int num, int row, int col){
  int i = row;
    for(int j = 0; j < 9; j++){
      //Return true if there is a reoccurrence of the number
      if(i == row && j == col){
	continue;
      }
      if(arr[i][j] == num){
	return true;
      }
    }
	//Otherwise, return false
  return false;
}
//Check for column occurrence of the number
bool Sudoku::colOcc(int num, int row, int col){
  int j = col;
  for(int i = 0; i < 9; i++){
    //Return true if there is a reoccurrence of the number
    if(i == row && j == col){
      continue;
    }
    if(arr[i][j] == num){
      return true;
    }
  }
  //Otherwise, return false
  return false;
}

//Check for block occurence of the number
bool Sudoku::blockOcc(int num, int row, int col){
  int rowCorn = (row/3)*3;
  int colCorn = (col/3)*3;
  for (int i = rowCorn; i < rowCorn+3; i++){
    for (int j = colCorn; j < colCorn+3; j++){
      if (i != row && j != col && arr[i][j] == num){
	return true;
      }
    }
  }
  return false;
}

//This is for the user to pull ("get") values from a specific cell.
//EX: User enters row and column then receives the integer at that location.
void Sudoku::printCellValue(int row, int col){
  if(arr[row][col] == ' '){
    cout << "an empty cell" << endl;
  }
  else{
    cout << arr[row][col] << endl;
  }
}

//If number does not break rules, place number on board
void Sudoku::placeNum(int num, int row, int col){
  if(rowOcc(num,row,col) == true){
    cout << "This number is already in the row" << endl;
  }
  if(colOcc(num,row,col) == true){
    cout << "This number is already in the column" << endl;
  }
  if(blockOcc(num,row,col) == true){
    cout << "This number is already in the block" << endl;
  }
  else if(rowOcc(num,row,col) == false && colOcc(num,row,col) == false && blockOcc(num,row,col) == false) {
    arr[row][col] = num;
  }
  cout << endl << endl;
}
