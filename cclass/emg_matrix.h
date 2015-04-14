//  -------- -------- -------- -------- -------- -------- -------- --------  //
//  emg_matrix.h
//  flynn, michael
//
//  represeting matricies and performing operations
//
//  -------- -------- -------- -------- -------- -------- -------- --------  //

#ifndef _EMG_MATRIX_H
#define _EMG_MATRIX_H

#define MAX_MATRIX_ROWS 32
#define MAX_MATRIX_COLS 16


// ---- Struct to represent matricies

typedef struct fmatrix_t {

    // The values in this matrix
    float values[MAX_MATRIX_COLS][MAX_MATRIX_ROWS];

    // Number of rows and columns for this matrix
    unsigned rows, cols;

} fmatrix_t;

fmatrix_t init_fmatrix(unsigned rows, unsigned cols);


// ---- Available operations

void clear_matrix(fmatrix_t * a);
fmatrix_t add_matricies(fmatrix_t * a, fmatrix_t * b);
fmatrix_t subtract_matricies(fmatrix_t * a, fmatrix_t * b);
fmatrix_t multiply_matricies(fmatrix_t * a, fmatrix_t * b);
fmatrix_t average_columns_matrix(fmatrix_t * a);
fmatrix_t average_rows_matrix(fmatrix_t * a);
fmatrix_t transposed_matrix(fmatrix_t * a);
fmatrix_t cofactor_matrix(fmatrix_t * a);
fmatrix_t adjoint_matrix(fmatrix_t * a);
fmatrix_t inverted_matrix(fmatrix_t * a);
fmatrix_t covariance_matrix(fmatrix_t * a);
float determinant(fmatrix_t * a);
float first_minor(fmatrix_t * a, unsigned i, unsigned j);

void print_matrix(fmatrix_t * a);

#endif