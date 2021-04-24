// xtracredit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string house;
    const int SIZE = 20;
    int houses[] = { 13, 5, 3, 11, 6, 7, 8, 9, 1, 20, 33, 4, 56, 43, 67, 89, 65, 33, 67 };
    int cells[SIZE] = {};
    int cellIter = 0;
    int westpoint = 0; //beginning of road
    int eastpoint = 100; //end of road

    cout << "Unsorted House List of Distances from the Westpoint";
    cout << "\n";
    cout << "------------";
    cout << "\n";
    for (int i = 0; i < (sizeof(houses) / sizeof(houses[0])); i++) {
        cout << houses[i];
        cout << ", ";
    }
    cout << "\n";
    cout << "Numerically Sorted House List of Distances from the Westpoint";
    cout << "\n";
    cout << "------------";
    cout << "\n";

    int elements = (sizeof(houses) / sizeof(houses[0]));

    for (int pass = 0; pass < (elements - 1); pass++) {
        bool isSorted = false;
        for (int index = 0; index < (elements - 1 - pass); index++) {
            if (houses[index] > houses[index + 1]) {
                int temp = houses[index];
                houses[index] = houses[index + 1];
                houses[index + 1] = temp;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
    //print
    for (int i = 0; i < (sizeof(houses) / sizeof(houses[0])); i++) {
        cout << houses[i];
        cout << ", ";
    }
    cout << "\n";

    int temp = 0;
    int curCell = houses[0] + 4; //5 
    cells[0] = curCell;
    cellIter++;

    for (int i = 1; i < (sizeof(houses) / sizeof(houses[0])); i++) {
        int distanceForward = (houses[i] + 4) - curCell;
        int distanceBack = (houses[i] - 4) - curCell;
        if ((distanceForward <= 4 && distanceForward >= 0) || (distanceBack >= -4 && distanceBack <= 0)) {
        }
        else {
            curCell = houses[i] + 4;
            cells[cellIter] = curCell;
            cellIter++;
        }
    }
    cout << "------------";
    cout << "\n";
    for (int i = 0; i < (sizeof(houses) / sizeof(houses[0])); i++) {
        cout << cells[i];
        cout << ", ";
    }
}