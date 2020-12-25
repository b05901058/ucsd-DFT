# MSOC - [ucsd] DFT



<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
* [Usage](#usage)
* [Reference](#reference)



<!-- ABOUT THE PROJECT -->
## About The Project

This project implements an 1024-points DFT without using FFT algorithm. 

** Directory structure **
```
README.md
src/
	dft.cpp
	dft.h
	coefficients1024.h
	solution/
		directives.tcl
testbench/
	dft_test.cpp
	out.gold.dat
PYNQ/
	DFT.bit
	DFT.hwh
	dft.ipynb
```

<!-- USAGE EXAMPLES -->
## Usage
1. fpga board setup

We use **Xilinx ZedBoard Evaluation and Development Kit** to evaulate this project

2. python test

Put bitstring(.bit file), hardware handoff(.hwh file) testdata(.dat file) on the fpga
Run python notebook to test

## Reference

* 	https://github.com/KastnerRG/pp4fpgas/tree/master/labs
