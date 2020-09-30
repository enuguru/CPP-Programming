
#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix {
public:
        Matrix(int rows, int cols);
        Matrix(const Matrix &other);
        virtual ~Matrix();
        Matrix& operator=(const Matrix &rhs);
        T* operator[](int i);
        int getRows() const;
        int getCols() const;

protected:
        void copy(const Matrix &other);

private:
        Matrix();
        int m_rows;
        int m_cols;
        T *m_linArray;
};

#endif /* MATRIX_H */

#include "Matrix.h"

template <typename T>
Matrix<T>::Matrix()
{ }

template <typename T>
Matrix<T>::Matrix(int rows, int cols) {
        m_rows = rows;
        m_cols = cols;
        m_linArray = new T[m_rows * m_cols];
}

template <typename T>
Matrix<T>::Matrix(const Matrix &other) {
        copy(other);
}

template <typename T>
Matrix<T>::~Matrix() {
        delete[] m_linArray;
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix &other) {
        if( this != &other ) {
                delete[] m_linArray;
                copy(other);
        }

        return *this;
}


template <typename T>
T* Matrix<T>::operator[](int i) {
        return m_linArray + (i*m_cols);
}

template <typename T>
void Matrix<T>::copy(const Matrix &other) {
     
        m_rows = other.m_rows;
        m_cols = other.m_cols;
        int size = m_rows * m_cols;
        m_linArray = new T[size];
        for( int i=0; i < size; i++ ) {
                m_linArray[i] =
		other.m_linArray[i];
        }
}

template <typename T>
int Matrix<T>::getRows() const {
  return m_rows;
}

template <typename T>
int Matrix<T>::getCols() const {
  return m_cols;
}
