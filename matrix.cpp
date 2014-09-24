#include "Matrix.h"
#include "iostream"

Matrix::Matrix()
{
    this->rows = 0;
    this->cols = 0;
}

void Matrix::Alloc(unsigned rows, unsigned cols)
{
    try
    {
        this->Mat = new double*[rows];
        for(unsigned i = 0; i < rows; i++)
            Mat[i] = new double[cols];

        this->rows = rows;
        this->cols = cols;
    }
    catch(std::bad_alloc&)
    {
        std::cout << "erro na alocação";
    }
}
Matrix::~Matrix()
{
    for(unsigned i = 0; i <= rows; i++ )
    {
      delete[] Mat[i];
    }
    for(unsigned j = 0; j <= cols; j++)
    {
      delete[] Mat[j];
    }
    delete[] Mat;
}
