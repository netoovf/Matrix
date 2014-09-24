#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    unsigned rows, cols;
    double **Mat;
    
public:
    Matrix();
    ~Matrix();
    void print();
    void Alloc(unsigned rows, unsigned cols);
};

#endif // MATRIX_H

