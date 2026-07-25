#include <iostream>
using namespace std;


wstring tetromino[7]; // game space (array of 7 (independent wstring that can be assigned) )


int main()
{
    //create assets (things game will use as its playing)

    // shapes/tetris block shapes 
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L"....");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"....");

    tetromino[3].append(L".X..");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"..X.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L".XX.");
    tetromino[5].append(L".X..");
    tetromino[5].append(L".X..");
    tetromino[5].append(L"....");

    tetromino[6].append(L".XX.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L"..X.");
    tetromino[6].append(L"....");
    
    
    // rotation is next (3:31)


    return 0;
}