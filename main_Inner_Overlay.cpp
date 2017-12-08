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
    std::ofstream file;
    file.open("/Users/michaeldeleo/Documents/workspace/OverLay_InnerBox/OverLay_InnerBox/inneroverlay.txt");
    //appends to file overlay.txt

    
    
    for (int i = 0; i < 437; i++)
    {
        for (int j = 0; j < 1230; j++)
        {
            if (j == 1229)
            {
                file << '"' << "01" << '"' << ",";
            }
            else{
                file << '"' << "01" << '"' << ", ";
            }
        }
        file << std::endl;
        
    }
    
    
    
    
    file.close();
}


