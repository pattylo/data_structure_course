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
 * \file dynarray.hpp
 * \date 26/Jun/2023
 * \author pattylo
 * \copyright (c) AIRo-Lab RCUAS of Hong Kong Polytechnic University
 * \brief On dynamic array implementation
 */

#include <iostream>
#include <cmath>

template<typename T> class dynarray
{
private:
    /* data */
    int capacity = 0;
    T* arrayitself;


public:
    dynarray(int arraySize);
    dynarray();
    ~dynarray();

    int size();
    void setsize(int arraySize);

};

template<typename T>
dynarray<T>::dynarray(int arraySize)
{
    capacity = arraySize;
    arrayitself = new T[arraySize];
    arrayitself[0] = 9;
    // std::cout<<"Let's delete them"<<std::endl;
    // delete[] arrayitself;

}

template<typename T>
dynarray<T>::dynarray()
{}

template<typename T>
dynarray<T>::~dynarray()
{
    std::cout<<"EXIT"<<std::endl;
}

template<typename T>
int dynarray<T>::size()
{
    return capacity;
}

template<typename T>
void dynarray<T>::setsize(int arraySize)
{
    capacity = arraySize;
    arrayitself = new T[arraySize];
}






