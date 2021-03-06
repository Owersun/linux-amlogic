/*
 * sound/soc/amlogic/auge/regs.h
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#ifndef __AML_REGS_H_
#define __AML_REGS_H_

/*
 *  PDM - Registers
 *  PDM
 *
 *  BASE_ADR                         32'hFF632000
 */

#define     PDM_CTRL                                           0x00
#define     PDM_HCIC_CTRL1                                     0x01
#define     PDM_HCIC_CTRL2                                     0x02
#define     PDM_F1_CTRL                                        0x03
#define     PDM_F2_CTRL                                        0x04
#define     PDM_F3_CTRL                                        0x05
#define     PDM_HPF_CTRL                                       0x06
#define     PDM_CHAN_CTRL                                      0x07
#define     PDM_CHAN_CTRL1                                     0x08
#define     PDM_COEFF_ADDR                                     0x09
#define     PDM_COEFF_DATA                                     0x0A
#define     PDM_CLKG_CTRL                                      0x0B
#define     PDM_STS                                            0x0C


/**
 *  AUDIO - Registers
 *  AUDIO CLOCK, TODDR, FRDDR, TDM, SPDIF, LOOPBACK, RESAMPLE,
 *  POWER DETECT, SECURITY
 *
 *  BASE_ADR                         32'hFF642000
 */

#define     EE_AUDIO_CLK_GATE_EN                               0x000
#define     EE_AUDIO_MCLK_A_CTRL                               0x001
#define     EE_AUDIO_MCLK_B_CTRL                               0x002
#define     EE_AUDIO_MCLK_C_CTRL                               0x003
#define     EE_AUDIO_MCLK_D_CTRL                               0x004
#define     EE_AUDIO_MCLK_E_CTRL                               0x005
#define     EE_AUDIO_MCLK_F_CTRL                               0x006
#define     EE_AUDIO_MST_A_SCLK_CTRL0                          0x010
#define     EE_AUDIO_MST_A_SCLK_CTRL1                          0x011
#define     EE_AUDIO_MST_B_SCLK_CTRL0                          0x012
#define     EE_AUDIO_MST_B_SCLK_CTRL1                          0x013
#define     EE_AUDIO_MST_C_SCLK_CTRL0                          0x014
#define     EE_AUDIO_MST_C_SCLK_CTRL1                          0x015
#define     EE_AUDIO_MST_D_SCLK_CTRL0                          0x016
#define     EE_AUDIO_MST_D_SCLK_CTRL1                          0x017
#define     EE_AUDIO_MST_E_SCLK_CTRL0                          0x018
#define     EE_AUDIO_MST_E_SCLK_CTRL1                          0x019
#define     EE_AUDIO_MST_F_SCLK_CTRL0                          0x01a
#define     EE_AUDIO_MST_F_SCLK_CTRL1                          0x01b
#define     EE_AUDIO_CLK_TDMIN_A_CTRL                          0x020
#define     EE_AUDIO_CLK_TDMIN_B_CTRL                          0x021
#define     EE_AUDIO_CLK_TDMIN_C_CTRL                          0x022
#define     EE_AUDIO_CLK_TDMIN_LB_CTRL                         0x023
#define     EE_AUDIO_CLK_TDMOUT_A_CTRL                         0x024
#define     EE_AUDIO_CLK_TDMOUT_B_CTRL                         0x025
#define     EE_AUDIO_CLK_TDMOUT_C_CTRL                         0x026
#define     EE_AUDIO_CLK_SPDIFIN_CTRL                          0x027
#define     EE_AUDIO_CLK_SPDIFOUT_CTRL                         0x028
#define     EE_AUDIO_CLK_RESAMPLE_CTRL                         0x029
#define     EE_AUDIO_CLK_LOCKER_CTRL                           0x02a
#define     EE_AUDIO_CLK_PDMIN_CTRL0                           0x02b
#define     EE_AUDIO_CLK_PDMIN_CTRL1                           0x02c
#define     EE_AUDIO_TODDR_A_CTRL0                             0x040
#define     EE_AUDIO_TODDR_A_CTRL1                             0x041
#define     EE_AUDIO_TODDR_A_START_ADDR                        0x042
#define     EE_AUDIO_TODDR_A_FINISH_ADDR                       0x043
#define     EE_AUDIO_TODDR_A_INT_ADDR                          0x044
#define     EE_AUDIO_TODDR_A_STATUS1                           0x045
#define     EE_AUDIO_TODDR_A_STATUS2                           0x046
#define     EE_AUDIO_TODDR_A_START_ADDRB                       0x047
#define     EE_AUDIO_TODDR_A_FINISH_ADDRB                      0x048
#define     EE_AUDIO_TODDR_B_CTRL0                             0x050
#define     EE_AUDIO_TODDR_B_CTRL1                             0x051
#define     EE_AUDIO_TODDR_B_START_ADDR                        0x052
#define     EE_AUDIO_TODDR_B_FINISH_ADDR                       0x053
#define     EE_AUDIO_TODDR_B_INT_ADDR                          0x054
#define     EE_AUDIO_TODDR_B_STATUS1                           0x055
#define     EE_AUDIO_TODDR_B_STATUS2                           0x056
#define     EE_AUDIO_TODDR_B_START_ADDRB                       0x057
#define     EE_AUDIO_TODDR_B_FINISH_ADDRB                      0x058
#define     EE_AUDIO_TODDR_C_CTRL0                             0x060
#define     EE_AUDIO_TODDR_C_CTRL1                             0x061
#define     EE_AUDIO_TODDR_C_START_ADDR                        0x062
#define     EE_AUDIO_TODDR_C_FINISH_ADDR                       0x063
#define     EE_AUDIO_TODDR_C_INT_ADDR                          0x064
#define     EE_AUDIO_TODDR_C_STATUS1                           0x065
#define     EE_AUDIO_TODDR_C_STATUS2                           0x066
#define     EE_AUDIO_TODDR_C_START_ADDRB                       0x067
#define     EE_AUDIO_TODDR_C_FINISH_ADDRB                      0x068
#define     EE_AUDIO_FRDDR_A_CTRL0                             0x070
#define     EE_AUDIO_FRDDR_A_CTRL1                             0x071
#define     EE_AUDIO_FRDDR_A_START_ADDR                        0x072
#define     EE_AUDIO_FRDDR_A_FINISH_ADDR                       0x073
#define     EE_AUDIO_FRDDR_A_INT_ADDR                          0x074
#define     EE_AUDIO_FRDDR_A_STATUS1                           0x075
#define     EE_AUDIO_FRDDR_A_STATUS2                           0x076
#define     EE_AUDIO_FRDDR_A_START_ADDRB                       0x077
#define     EE_AUDIO_FRDDR_A_FINISH_ADDRB                      0x078
#define     EE_AUDIO_FRDDR_B_CTRL0                             0x080
#define     EE_AUDIO_FRDDR_B_CTRL1                             0x081
#define     EE_AUDIO_FRDDR_B_START_ADDR                        0x082
#define     EE_AUDIO_FRDDR_B_FINISH_ADDR                       0x083
#define     EE_AUDIO_FRDDR_B_INT_ADDR                          0x084
#define     EE_AUDIO_FRDDR_B_STATUS1                           0x085
#define     EE_AUDIO_FRDDR_B_STATUS2                           0x086
#define     EE_AUDIO_FRDDR_B_START_ADDRB                       0x087
#define     EE_AUDIO_FRDDR_B_FINISH_ADDRB                      0x088
#define     EE_AUDIO_FRDDR_C_CTRL0                             0x090
#define     EE_AUDIO_FRDDR_C_CTRL1                             0x091
#define     EE_AUDIO_FRDDR_C_START_ADDR                        0x092
#define     EE_AUDIO_FRDDR_C_FINISH_ADDR                       0x093
#define     EE_AUDIO_FRDDR_C_INT_ADDR                          0x094
#define     EE_AUDIO_FRDDR_C_STATUS1                           0x095
#define     EE_AUDIO_FRDDR_C_STATUS2                           0x096
#define     EE_AUDIO_FRDDR_C_START_ADDRB                       0x097
#define     EE_AUDIO_FRDDR_C_FINISH_ADDRB                      0x098
#define     EE_AUDIO_ARB_CTRL                                  0x0a0
#define     EE_AUDIO_LB_CTRL0                                  0x0b0
#define     EE_AUDIO_LB_CTRL1                                  0x0b1
#define     EE_AUDIO_TDMIN_A_CTRL                              0x0c0
#define     EE_AUDIO_TDMIN_A_SWAP                              0x0c1
#define     EE_AUDIO_TDMIN_A_MASK0                             0x0c2
#define     EE_AUDIO_TDMIN_A_MASK1                             0x0c3
#define     EE_AUDIO_TDMIN_A_MASK2                             0x0c4
#define     EE_AUDIO_TDMIN_A_MASK3                             0x0c5
#define     EE_AUDIO_TDMIN_A_STAT                              0x0c6
#define     EE_AUDIO_TDMIN_A_MUTE_VAL                          0x0c7
#define     EE_AUDIO_TDMIN_A_MUTE0                             0x0c8
#define     EE_AUDIO_TDMIN_A_MUTE1                             0x0c9
#define     EE_AUDIO_TDMIN_A_MUTE2                             0x0ca
#define     EE_AUDIO_TDMIN_A_MUTE3                             0x0cb
#define     EE_AUDIO_TDMIN_B_CTRL                              0x0d0
#define     EE_AUDIO_TDMIN_B_SWAP                              0x0d1
#define     EE_AUDIO_TDMIN_B_MASK0                             0x0d2
#define     EE_AUDIO_TDMIN_B_MASK1                             0x0d3
#define     EE_AUDIO_TDMIN_B_MASK2                             0x0d4
#define     EE_AUDIO_TDMIN_B_MASK3                             0x0d5
#define     EE_AUDIO_TDMIN_B_STAT                              0x0d6
#define     EE_AUDIO_TDMIN_B_MUTE_VAL                          0x0d7
#define     EE_AUDIO_TDMIN_B_MUTE0                             0x0d8
#define     EE_AUDIO_TDMIN_B_MUTE1                             0x0d9
#define     EE_AUDIO_TDMIN_B_MUTE2                             0x0da
#define     EE_AUDIO_TDMIN_B_MUTE3                             0x0db
#define     EE_AUDIO_TDMIN_C_CTRL                              0x0e0
#define     EE_AUDIO_TDMIN_C_SWAP                              0x0e1
#define     EE_AUDIO_TDMIN_C_MASK0                             0x0e2
#define     EE_AUDIO_TDMIN_C_MASK1                             0x0e3
#define     EE_AUDIO_TDMIN_C_MASK2                             0x0e4
#define     EE_AUDIO_TDMIN_C_MASK3                             0x0e5
#define     EE_AUDIO_TDMIN_C_STAT                              0x0e6
#define     EE_AUDIO_TDMIN_C_MUTE_VAL                          0x0e7
#define     EE_AUDIO_TDMIN_C_MUTE0                             0x0e8
#define     EE_AUDIO_TDMIN_C_MUTE1                             0x0e9
#define     EE_AUDIO_TDMIN_C_MUTE2                             0x0ea
#define     EE_AUDIO_TDMIN_C_MUTE3                             0x0eb
#define     EE_AUDIO_TDMIN_LB_CTRL                             0x0f0
#define     EE_AUDIO_TDMIN_LB_SWAP                             0x0f1
#define     EE_AUDIO_TDMIN_LB_MASK0                            0x0f2
#define     EE_AUDIO_TDMIN_LB_MASK1                            0x0f3
#define     EE_AUDIO_TDMIN_LB_MASK2                            0x0f4
#define     EE_AUDIO_TDMIN_LB_MASK3                            0x0f5
#define     EE_AUDIO_TDMIN_LB_STAT                             0x0f6
#define     EE_AUDIO_TDMIN_LB_MUTE_VAL                         0x0f7
#define     EE_AUDIO_TDMIN_LB_MUTE0                            0x0f8
#define     EE_AUDIO_TDMIN_LB_MUTE1                            0x0f9
#define     EE_AUDIO_TDMIN_LB_MUTE2                            0x0fa
#define     EE_AUDIO_TDMIN_LB_MUTE3                            0x0fb
#define     EE_AUDIO_SPDIFIN_CTRL0                             0x100
#define     EE_AUDIO_SPDIFIN_CTRL1                             0x101
#define     EE_AUDIO_SPDIFIN_CTRL2                             0x102
#define     EE_AUDIO_SPDIFIN_CTRL3                             0x103
#define     EE_AUDIO_SPDIFIN_CTRL4                             0x104
#define     EE_AUDIO_SPDIFIN_CTRL5                             0x105
#define     EE_AUDIO_SPDIFIN_CTRL6                             0x106
#define     EE_AUDIO_SPDIFIN_STAT0                             0x107
#define     EE_AUDIO_SPDIFIN_STAT1                             0x108
#define     EE_AUDIO_SPDIFIN_STAT2                             0x109
#define     EE_AUDIO_SPDIFIN_MUTE_VAL                          0x10a
#define     EE_AUDIO_RESAMPLE_CTRL0                            0x110
#define     EE_AUDIO_RESAMPLE_CTRL1                            0x111
#define     EE_AUDIO_RESAMPLE_CTRL2                            0x112
#define     EE_AUDIO_RESAMPLE_CTRL3                            0x113
#define     EE_AUDIO_RESAMPLE_COEF0                            0x114
#define     EE_AUDIO_RESAMPLE_COEF1                            0x115
#define     EE_AUDIO_RESAMPLE_COEF2                            0x116
#define     EE_AUDIO_RESAMPLE_COEF3                            0x117
#define     EE_AUDIO_RESAMPLE_COEF4                            0x118
#define     EE_AUDIO_RESAMPLE_STATUS1                          0x119
#define     EE_AUDIO_SPDIFOUT_STAT                             0x120
#define     EE_AUDIO_SPDIFOUT_GAIN0                            0x121
#define     EE_AUDIO_SPDIFOUT_GAIN1                            0x122
#define     EE_AUDIO_SPDIFOUT_CTRL0                            0x123
#define     EE_AUDIO_SPDIFOUT_CTRL1                            0x124
#define     EE_AUDIO_SPDIFOUT_PREAMB                           0x125
#define     EE_AUDIO_SPDIFOUT_SWAP                             0x126
#define     EE_AUDIO_SPDIFOUT_CHSTS0                           0x127
#define     EE_AUDIO_SPDIFOUT_CHSTS1                           0x128
#define     EE_AUDIO_SPDIFOUT_CHSTS2                           0x129
#define     EE_AUDIO_SPDIFOUT_CHSTS3                           0x12a
#define     EE_AUDIO_SPDIFOUT_CHSTS4                           0x12b
#define     EE_AUDIO_SPDIFOUT_CHSTS5                           0x12c
#define     EE_AUDIO_SPDIFOUT_CHSTS6                           0x12d
#define     EE_AUDIO_SPDIFOUT_CHSTS7                           0x12e
#define     EE_AUDIO_SPDIFOUT_CHSTS8                           0x12f
#define     EE_AUDIO_SPDIFOUT_CHSTS9                           0x130
#define     EE_AUDIO_SPDIFOUT_CHSTSA                           0x131
#define     EE_AUDIO_SPDIFOUT_CHSTSB                           0x132
#define     EE_AUDIO_SPDIFOUT_MUTE_VAL                         0x133
#define     EE_AUDIO_TDMOUT_A_CTRL0                            0x140
#define     EE_AUDIO_TDMOUT_A_CTRL1                            0x141
#define     EE_AUDIO_TDMOUT_A_SWAP                             0x142
#define     EE_AUDIO_TDMOUT_A_MASK0                            0x143
#define     EE_AUDIO_TDMOUT_A_MASK1                            0x144
#define     EE_AUDIO_TDMOUT_A_MASK2                            0x145
#define     EE_AUDIO_TDMOUT_A_MASK3                            0x146
#define     EE_AUDIO_TDMOUT_A_STAT                             0x147
#define     EE_AUDIO_TDMOUT_A_GAIN0                            0x148
#define     EE_AUDIO_TDMOUT_A_GAIN1                            0x149
#define     EE_AUDIO_TDMOUT_A_MUTE_VAL                         0x14a
#define     EE_AUDIO_TDMOUT_A_MUTE0                            0x14b
#define     EE_AUDIO_TDMOUT_A_MUTE1                            0x14c
#define     EE_AUDIO_TDMOUT_A_MUTE2                            0x14d
#define     EE_AUDIO_TDMOUT_A_MUTE3                            0x14e
#define     EE_AUDIO_TDMOUT_A_MASK_VAL                         0x14f
#define     EE_AUDIO_TDMOUT_B_CTRL0                            0x150
#define     EE_AUDIO_TDMOUT_B_CTRL1                            0x151
#define     EE_AUDIO_TDMOUT_B_SWAP                             0x152
#define     EE_AUDIO_TDMOUT_B_MASK0                            0x153
#define     EE_AUDIO_TDMOUT_B_MASK1                            0x154
#define     EE_AUDIO_TDMOUT_B_MASK2                            0x155
#define     EE_AUDIO_TDMOUT_B_MASK3                            0x156
#define     EE_AUDIO_TDMOUT_B_STAT                             0x157
#define     EE_AUDIO_TDMOUT_B_GAIN0                            0x158
#define     EE_AUDIO_TDMOUT_B_GAIN1                            0x159
#define     EE_AUDIO_TDMOUT_B_MUTE_VAL                         0x15a
#define     EE_AUDIO_TDMOUT_B_MUTE0                            0x15b
#define     EE_AUDIO_TDMOUT_B_MUTE1                            0x15c
#define     EE_AUDIO_TDMOUT_B_MUTE2                            0x15d
#define     EE_AUDIO_TDMOUT_B_MUTE3                            0x15e
#define     EE_AUDIO_TDMOUT_B_MASK_VAL                         0x15f
#define     EE_AUDIO_TDMOUT_C_CTRL0                            0x160
#define     EE_AUDIO_TDMOUT_C_CTRL1                            0x161
#define     EE_AUDIO_TDMOUT_C_SWAP                             0x162
#define     EE_AUDIO_TDMOUT_C_MASK0                            0x163
#define     EE_AUDIO_TDMOUT_C_MASK1                            0x164
#define     EE_AUDIO_TDMOUT_C_MASK2                            0x165
#define     EE_AUDIO_TDMOUT_C_MASK3                            0x166
#define     EE_AUDIO_TDMOUT_C_STAT                             0x167
#define     EE_AUDIO_TDMOUT_C_GAIN0                            0x168
#define     EE_AUDIO_TDMOUT_C_GAIN1                            0x169
#define     EE_AUDIO_TDMOUT_C_MUTE_VAL                         0x16a
#define     EE_AUDIO_TDMOUT_C_MUTE0                            0x16b
#define     EE_AUDIO_TDMOUT_C_MUTE1                            0x16c
#define     EE_AUDIO_TDMOUT_C_MUTE2                            0x16d
#define     EE_AUDIO_TDMOUT_C_MUTE3                            0x16e
#define     EE_AUDIO_TDMOUT_C_MASK_VAL                         0x16f
#define     EE_AUDIO_POW_DET_CTRL0                             0x180
#define     EE_AUDIO_POW_DET_TH_HI                             0x181
#define     EE_AUDIO_POW_DET_TH_LO                             0x182
#define     EE_AUDIO_POW_DET_VALUE                             0x183
#define     EE_AUDIO_SECURITY_CTRL                             0x193

#define     AUD_ADDR_OFFSET(addr)                              ((addr) << 2)

enum clk_sel {
	MASTER_A,
	MASTER_B,
	MASTER_C,
	MASTER_D,
	MASTER_E,
	MASTER_F,
	SLAVE_A,
	SLAVE_B,
	SLAVE_C,
	SLAVE_D,
	SLAVE_E,
	SLAVE_F,
	SLAVE_G,
	SLAVE_H,
	SLAVE_I,
	SLAVE_J
};

#endif
