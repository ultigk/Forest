#include <iostream>
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

    void CreateForest()
    {
        // this function is to create the forest 
        for (int i = 0; i < 21; i++) // this sets the value of the rows from 0 to 20 
        {
            for (int j = 0; j < 21; j++) // this sets the value of the columns from 0 to 20 
            {

                if (i == 0 || i == 20)
                {
                    forest[i][j] = forestBorder; // this creates the north and south of the forest border 
                }

                else if (j == 0 || j == 20)
                {
                    forest[i][j] = forestBorder; // this creates the east and the west forest border 
                }

                else
                {
                    forest[i][j] = Tree; // this filles the rest of the arrays with trees 
                }

            }
        }

        forest[fireX][fireY] = Fire; // this sets the fire in the middle of the grid 
    }

    Forest::Forest()
    void ShowForest(char grid[21][21])
    {
        for (int i = 0; i < 21; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                std::cout << grid[i][j];
            }

            std::cout << std::endl;
        }
    }



};
