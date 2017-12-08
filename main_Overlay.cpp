//
//  main.cpp
//  OverLay2
//
//  Created by Michael DeLeo on 12/4/17.
//  Copyright © 2017 Michael DeLeo. All rights reserved.
//

#include <stdio.h>
#include <fstream>
#include <vector>
#include <iostream>

int main()
{
    //made for 1280 pixels wide, 1024 pixels tall
    const int first_edge = 20;
    const int second_edge = 50;
    const int third_edge = 1230;
    const int fourth_edge = 1260; //fourth edge, meaning end of second bar
    std::ofstream file;
    file.open("/Users/michaeldeleo/Documents/workspace/OverLay2/OverLay2/overlay.txt");
    //appends to file overlay.txt
    int word_counter = 0;
    
    for (int i = 0; i < 30; i++)
    {
        for(int j = 0; j < 1280; j++)
        {
            if (j == 1279)
            {
                file << '"' << "0" << '"' << ",";
            }
            else{
            file << '"' << "0" << '"' << ", ";
            }
            word_counter++;
            if (word_counter == 262144)
            {
                word_counter = 0;
                file << std::endl;
                file << std::endl;
            }
        }
        file << std::endl;
    }
    //Area above upper side of box
    
    for (int i = 30; i < 60; i++)
    {
        for (int j = 0; j < 1280; j++)
        {
            if (j == 1279)
            {
                file << '"' << "0" << '"' << ",";
            }
            else{
                if (j >= first_edge && j <= fourth_edge)
                {
                    file << '"' << "1" << '"' << ", ";  //within first boundary for top of box
                }
                else{
                    file << '"' << "0" << '"' << ", ";      //outside of box
                }
            }
            word_counter++;
            if (word_counter == 262144)
            {
                word_counter = 0;
                file << std::endl;
                file << std::endl;
            }
        }
        file << std::endl;

    }
    
    for (int i = 60; i < 994; i++)
    {
        for (int j = 0; j < 1280; j++)
        {
            if (j == 1279)
            {
                file << '"' << "0" << '"' << ",";
            }
            else{
                if ((j >= first_edge && j <= second_edge) || (j >= third_edge && j <= fourth_edge))
                {
                    file << '"' << "1" << '"' << ", ";  //within first boundary for side of box
                }
                else{
                    file << '"' << "0" << '"' << ", ";      //outside of box
                }
            }
            word_counter++;
            if (word_counter == 262144)
            {
                word_counter = 0;
                file << std::endl;
                file << std::endl;
            }
        }
        file << std::endl;
    }
    
    for (int i = 994; i < 1024; i++)
    {
        for (int j = 0; j < 1280; j++)
        {
            if (j == 1279)
            {
                file << '"' << "0" << '"' << ",";
            }
            else{
                if (j >= first_edge && j <= fourth_edge)
                {
                    file << '"' << "1" << '"' << ", ";  //within first boundary for top of box
                }
                else{
                    file << '"' << "0" << '"' << ", ";      //outside of box
                }
            }
            word_counter++;
            if (word_counter == 262144)
            {
                word_counter = 0;
                file << std::endl;
                file << std::endl;
            }
        }
        file << std::endl;
    }
    
    
    
    file.close();
}


