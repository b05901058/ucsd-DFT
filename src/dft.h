
# include <ap_int.h>
typedef ap_fixed<42,20> DTYPE;
//typedef float DTYPE;
#define SIZE 1024		/* SIZE OF DFT */
void dft(DTYPE XX_R[SIZE], DTYPE XX_I[SIZE]);

