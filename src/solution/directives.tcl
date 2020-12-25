############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_top -name dft "dft"
set_directive_interface -mode s_axilite "dft"
set_directive_interface -mode m_axi -depth 128 -offset slave "dft" real_sample
set_directive_interface -mode m_axi -depth 128 -offset slave "dft" imag_sample
set_directive_pipeline -off "dft/LOOP_freq"
set_directive_pipeline "dft/LOOP_time"
set_directive_unroll -factor 16 "dft/LOOP_time"
