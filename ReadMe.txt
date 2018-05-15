CREATOR:
Brittany Clarke
Bgc77987@uga.edu
University of Georgia - Class of 2019. 
Computer Science student.

Agilysys Coding Question #3
---------------------------
1. To store the data, I used a two-dimensional array. To ensure that the
user input is not erased after each turn, I used an endless for-loop
that can only be broken when the user quits the game.
2. To initialize the sudoku board, I used a contructor to initialize
each value in the two-dimensional array to be blank. After this, 
I filled the board randomly with numbers 1-9. I was able to do
this by using the random integers 1-9 for the cell value
and random integers 0-8 for the row and column values. This ensured
that each number and each placement was new and random each game.
I also implemented my placeNum function to ensure that every random 
integer placed onto the board did not violate any sudoku rules.
3. In order to maintain the status of a number in a cell throughout
a game, I implemented an endless for-loop that continues until
the user quits the game. This is how every cell remains the same
during each turn of a game. When the user quits and begins a 
new game, the board once again becomes empty. Each puzzle is built
randomly by using random integers and implementing my placeNum
function to ensure that each randomly placed integer will not
break sudoku rules. I enjoy this because each game is unique.
4. There are several methods used in this program. I implemented the
following methods that can be used in the API by a client:
  *printBoard - This function prints the entire board in a 
user-friendly format. 
  *printCellValue - This function prints the value of
any cell that the user chooses. The user is able to get a value
by entering the row and column number of any cell on the board. 
  *colOcc - This function checks
whether or not there is an occurrence of the number that the user
is attempting to add to the board in the column they would like
to enter it into.
  *rowOcc - This function checks
whether or not there is an occurrence of the number that the user
is attempting to add to the board in the row they would like to
enter it into. 
  *blockOcc - This function checks
whether or not there is an occurrence of the number that the user
is attempting to add to the board in the block they would like to
enter it into. 
  *placeNum - This function checks
to ensure that all sudoku rules are met, and if all the rules 
are met, then the number is placed by this function into the cell.
  *fillBoard - This function fills 
the board with random integers 1-9 in random places all over the board.
This function calls the placeNum function every time it places a 
new number to ensure that the numbers being placed onto the board
do not violate any sudoku rules. 
5. I enforce the sudoku rules by using boolean functions to check
whether each number already exists on the board in the same column,
row, or block. If the boolean function returns false, then it means
that no other occurence of the number was found, and therefore,
the placeNum function places the number onto the sudoku board.
6. I coded this in a Unix-like environment, and so I compiled
the program using a makefile. Then, I ran the program. This is
how I was able to test the program and will be able to continue
testing the program. In the end, I also ended up using Visual Studio
to make this program into an executable easily. 
