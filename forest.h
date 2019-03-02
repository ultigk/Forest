#pragma once
#include <iostream>
#include <vector>
#include <istream>
#include <ostream>

class ForestSetup
{
private:
    const char Tree = '|';
    const char Fire = '*';
    const char emptySpace = '.';
    const char forestBorder = '#';
    const int fireX = 10;
    const int fireY = 10;
    const int height = 21;
    const int width = 21;
    char forest[21][21];
    struct Tree
    {
        int curr_state;
        int elapsed_time;
    };


public:

    void CreateForest();
    void ShowForest(char grid[21][21]);