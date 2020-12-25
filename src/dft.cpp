#include<math.h>
#include "dft.h"
#include"coefficients1024.h"
typedef ap_fixed<42,20> TEMP_TYPE;
//typedef float TEMP_TYPE;


void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE])
{
	//Write your code here
	int i, j;
	TEMP_TYPE w;
	TEMP_TYPE c, s;

	TEMP_TYPE temp_real[SIZE], prod_real;
	TEMP_TYPE temp_imag[SIZE], prod_imag;

	DTYPE real_in[SIZE], imag_in[SIZE];

	for (i = 0; i < SIZE; i += 1) {
			real_in[i] = real_sample[i];
			imag_in[i] = imag_sample[i];
	}

	LOOP_freq:for (i = 0; i < SIZE; i += 1) {
		temp_real[i] = 0;
		temp_imag[i] = 0;
		LOOP_time:for (j = 0; j < SIZE; j += 1) {
			c = cos_coefficients_table[i * (j) % SIZE];
			s = sin_coefficients_table[i * (j) % SIZE];


			prod_real = (real_in[j] * c - imag_in[j] * s);
			prod_imag = (real_in[j] * s + imag_in[j] * c);
			temp_real[i] = temp_real[i] + prod_real;
			temp_imag[i] = temp_imag[i] + prod_imag;
		}
	}


	for (i = 0; i < SIZE; i += 1) {
		real_sample[i] = temp_real[i];
		imag_sample[i] = temp_imag[i];
	}
}

