/* CREATOR:
Brittany Clarke
Bgc77987@uga.edu
University of Georgia - Class of 2019.
Computer Science student.
*/

//Sudoku header file
//Lists functions & variables necessary for this program
class Sudoku{
 public:
  Sudoku();
  void printBoard();
  void printCellValue(int row, int col);
  bool colOcc(int num, int row, int col);
  bool rowOcc(int num, int row, int col);
  bool blockOcc(int num, int row, int col);
  void placeNum(int num, int row, int col);
  void fillBoard(int num, int row, int col);
  //Made private so these variables cannot be manipulated in places they shouldn't be.
 private:
  int arr[9][9];
  int row;
  int col;
};
