#pragma once

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

void render(int arr[3][3]);
void currentMove(int arr[3][3], int row, int col, int value);
bool legalMove(int arr[3][3], int col, int row);
bool checkWin(int arr[3][3], int player);
int enterRow();
int enterCol();
bool validatingNumb(int numb);
bool checkForEmptySpot(int arr[3][3]);
void resetBoard(int arr[3][3]);
#endif