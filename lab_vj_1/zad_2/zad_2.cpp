#include<iostream>
#include <iomanip>
#include <time.h>


//2. Definirati strukturu koja opisuje matricu.Napisati program za osnovne
//operacije s matricama čiji su elementi decimalni brojevi(float).Program
//treba imati sljedeće funkcije :
//• funkciju za unos matrice mxn,
//• funkciju za generiranje matrice mxn s elementima u rasponu[a, b],
//• funkcije za zbarajanje, oduzimanje, množenje matrica,
//• funkciju za trasponiranje matrice,
//• funkciju za ispisivanje matrice.Elementi matrice se ispisuju na četiri
//decimale, poravnati udesno.
//

struct Matrix {
	int row, col;
	float** matrix;

	void matrix_alocation(int r, int c) {
		row = r;
		col = c;
		matrix = new float* [r];
		for (int i = 0; i < r; i++) {
			matrix[i] = new float[c];
		}
	}
	void matrix_dealocation() {
		for (int i = 0; i < row; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
	void matrix_generate(int a, int b) {

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				matrix[i][j] = a + (float)rand() / (float)RAND_MAX * (b - a);
			}
		}
	}
	void matrix_print() {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				std::cout << std::setprecision(4) << std::fixed << matrix[i][j] << "  ";
			}
			std::cout << '\n';
		}
	}
	void matrix_addition(Matrix m1, Matrix m2) {
		if (m1.row == m2.row && m1.col == m2.col) {
			matrix_alocation(m1.row, m1.col);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
				}
			}
		}
		else {
			std::cout << "Operation is invalid";
		}
	}
	void matrix_subtraction(Matrix m1, Matrix m2) {
		if (m1.row == m2.row && m1.col == m2.col) {
			matrix_alocation(m1.row, m1.col);
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					matrix[i][j] = m1.matrix[i][j] - m2.matrix[i][j];
				}
			}
		}
		else {
			std::cout << "Operation is invalid";
		}
	}
	void matrix_transposed(Matrix m1) {
		matrix_alocation(m1.col, m1.row);
		for (int i = 0; i < col; i++) {
			for (int j = 0; j < row; j++) {
				matrix[j][i] = m1.matrix[i][j];
			}
		}
		void matrix_mupltiply(Matrix m1, Matrix m2) {
			if (m1.col == m2.row) {
				matrix_alocation(m1.row, m2.col);
				for (int i = 0; i < row)
			}
		}
	}

};

int main() {

	int m, n;
	int low_border, high_border;

	srand((unsigned)time(NULL));

	std::cout << "Enter number of rows(m),and columns(n): " << std::endl;
	std::cin >> m >> n;
	std::cout << "Enter low border, then high border: " << std::endl;
	std::cin >> low_border >> high_border;

	Matrix matrix_1, matrix_2;
	Matrix new_matrix, trans_matrix;

	matrix_1.matrix_alocation(m, n);
	matrix_1.matrix_generate(low_border, high_border);
	std::cout << "Generated" << std::endl;
	matrix_1.matrix_print();

	matrix_2.matrix_alocation(m, n);
	matrix_2.matrix_generate(low_border, high_border);
	std::cout << std::endl;
	matrix_2.matrix_print();
	std::cout << std::endl;

	new_matrix.matrix_addition(matrix_1, matrix_2);
	std::cout << "Added" << std::endl;
	new_matrix.matrix_print();

	new_matrix.matrix_dealocation();
	std::cout << std::endl;
	new_matrix.matrix_subtraction(matrix_1, matrix_2);
	std::cout << "Substracted" << std::endl;
	new_matrix.matrix_print();
	std::cout << std::endl;
	std::cout << "Transposed" << std::endl;
	trans_matrix.matrix_transposed(matrix_1);
	trans_matrix.matrix_print();
	multiply_matrix(matrix_1, matrix_2);

	return 0;
}