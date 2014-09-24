#include "Matrix.h"
#include "iostream"

Matrix::Matrix()
{
    this->rows = 0;
    this->cols = 0;
}


/*! Esta função, faz a alocação do espaço necessário na memória para o uso da matriz.
  @param[saída] rows O número de \a linhas da matriz.
  @param[saída] cols O número de \a colunas da matriz.
*/
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
/*! Esta função ira apagar as posições de memoria que o usuário não utiliza mais. */
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


#include "matrix.h"


Matrix::Matrix()
{
    this->rows = 0;
    this->cols = 0;
}

void Matrix::print()
{

    for (unsigned l = 0; l < rows; l++){
        for (unsigned c = 0; c < cols; c++){
            printf("5.5%lf ", Mat[l][c]);
        }
        printf ("\n");
    }
}

void Matrix::print()
{

    for (unsigned l = 0; l < rows; l++){
        for (unsigned c = 0; c < cols; c++){
            printf("5.5%lf ", Mat[l][c]);
        }
        printf ("\n");
    }
}
