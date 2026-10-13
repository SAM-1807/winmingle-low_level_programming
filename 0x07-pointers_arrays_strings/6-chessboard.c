/**
 * 6-chessboard - Prints a chessboard
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints an 8x8 chessboard from a char array.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: The board array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
