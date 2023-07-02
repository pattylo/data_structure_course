#include <iostream>

struct Vector3
{
    float x, y, z;
};

int main(int argv, int** argc)
{
    //  allocate memory on stack
    int lala = 10;
    int array[5];
    Vector3 vector;

    // allocate memory on heap
    // new call malloc
    int* hlala = new int;
    *hlala = 10;
    int* harray = new int[5];
    Vector3* hvector = new Vector3();

    delete hlala;
    delete[] harray;
    delete hvector;

    return 0;
}