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

#include "../include/dynarray.hpp"

int main(int argc, char** argv)
{
    std::cout<<"HERRO, THIS IS DATA STRUCTURE COURSE 1"<<std::endl;
    std::cout<<"WHICH IS ON DYNAMIC ARRAY"<<std::endl;
    
    dynarray<int> dyn_array_a(12);
    std::cout<<dyn_array_a.size()<<std::endl;

    std::cout<<"END"<<std::endl<<std::endl;;

    return 0;
}

    


