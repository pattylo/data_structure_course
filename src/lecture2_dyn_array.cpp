/*
    This file is part of data_structure_course - for personal practice

    data_structure_course is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    data_structure_course is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with data_structure_course.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * \file lecture2.cpp
 * \date 26/Jun/2023
 * \author pattylo
 * \copyright (c) AIRo-Lab RCUAS of Hong Kong Polytechnic University
 * \brief On dynamic array implementation
 */

#include "../include/lecture2_dyn_array.hpp"

int main(int argc, char** argv)
{
    std::cout<<"HERRO, THIS IS DATA STRUCTURE COURSE 1"<<std::endl;
    std::cout<<"WHICH IS ON DYNAMIC ARRAY"<<std::endl;
    
    dynarray<double> dyn_array_a(12);
    std::cout<<dyn_array_a.size()<<std::endl;
    std::cout<<dyn_array_a.isEmpty()<<std::endl;

    std::cout<<std::endl<<"SET VALUES"<<std::endl;

    for(int i = 0; i < 12; i++) 
    {
        dyn_array_a.set_value(i,i);
        std::cout<<dyn_array_a.access(i)<<std::endl;
    }

    std::cout<<"SET VALUES END"<<std::endl<<std::endl;


    dyn_array_a.emplace_back(100000);
    // dyn_array_a.push_back(500000);
        std::cout<<std::endl<<"hiii"<<std::endl;

    std::cout<<std::endl<<"hiii"<<std::endl;

    std::cout<<std::endl<<"hiii"<<std::endl;

    std::cout<<std::endl<<"hiii"<<std::endl;

    std::cout<<std::endl<<"hiii"<<std::endl;

    dyn_array_a.pop_back();

    std::cout<<std::endl<<"hiii"<<std::endl;

    for(int i = 0; i < dyn_array_a.size(); i++) 
        std::cout<<dyn_array_a.access(i)<<std::endl;

    return 0;
}

    


