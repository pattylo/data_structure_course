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
    bool isEmpty();
    void clear();
    void set_value(int index, T value);
    T access(int index);
    void emplace_back(T value);
    void push_back(T value);
    void pop_back();
    void removeAt(int index);
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
    std::cout<<std::endl<<"EXIT"<<std::endl;
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

template<typename T>
bool dynarray<T>::isEmpty()
{
    if(capacity == 0)
        return true;
    else
        return false;
}

template<typename T>
void dynarray<T>::clear()
{
    delete [] arrayitself;
    capacity = 0;
}

template<typename T>
void dynarray<T>::set_value(int index, T value)
{
    if(index >= capacity)
        throw std::runtime_error("ILLEGAL MEMORY ACCESS ATTEMPT!");
    arrayitself[index] = value;
}

template<typename T>
T dynarray<T>::access(int index)
{
    if(index >= capacity)
        throw std::runtime_error("ILLEGAL MEMORY ACCESS ATTEMPT!");
    return arrayitself[index];
}

template<typename T>
void dynarray<T>::emplace_back(T value)
{
    *(arrayitself+capacity) = value;
    capacity++;
}

template<typename T>
void dynarray<T>::push_back(T value)
{
    std::cout<<"NOW IN PUSH_BACK"<<std::endl;
    T* temp_array = new T[capacity + 1];
    T* temp_array_haha = new T[capacity + 1];
    for(int i = 0; i < capacity; i++)
    {
        // std::cout<<arrayitself[i]<<std::endl;
        temp_array[i] = arrayitself[i];
        // std::cout<<temp_array[i]<<std::endl;
    }

    temp_array[capacity] = value;
    
    arrayitself = new T[capacity++];
    
    for(int i = 0; i < capacity; i++)
    {
        arrayitself[i] = temp_array[i];

    }
    
    // delete [] temp_array;
}

template<typename T>
void dynarray<T>::pop_back()
{
    std::cout<<"NOW IN POP_BACK"<<std::endl;
    T* gan = new T[capacity + 1];
    // std::cout<<"NOW IN POP_BACK haHA"<<std::endl;
    // for(int i = 0; i < capacity - 1; i++)
    // {
    //     // std::cout<<arrayitself[i]<<std::endl;
    //     std::cout<<i<<std::endl;
    //     temp_array_[i] = arrayitself[i];
    //     // std::cout<<temp_array_[i]<<std::endl;
    // }

    // // arrayitself = new T[capacity--];
    // std::cout<<capacity<<std::endl;
    
    // for(int i = 0; i < capacity; i++)
    // {
    //     arrayitself[i] = temp_array_[i];
    // }
    
    // // delete [] temp_array_;

}



