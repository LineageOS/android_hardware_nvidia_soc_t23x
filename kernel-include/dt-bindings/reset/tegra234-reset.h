/*
 * Copyright (c) 2018, NVIDIA CORPORATION. All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */

#ifndef BPMP_ABI_MACH_T234_RESET_H
#define BPMP_ABI_MACH_T234_RESET_H

/**
 * @file
 * @defgroup bpmp_reset_ids Reset ID's
 * @brief Identifiers for Resets controllable by firmware
 * @{
 */
#define TEGRA234_RESET_ACTMON			1
#define TEGRA234_RESET_ADSP_ALL			2
#define TEGRA234_RESET_AFI			3
#define TEGRA234_RESET_CAN1			4
#define TEGRA234_RESET_CAN2			5
#define TEGRA234_RESET_DLA0			6
#define TEGRA234_RESET_DLA1			7
#define TEGRA234_RESET_DPAUX			8
#define TEGRA234_RESET_DPAUX1			9
#define TEGRA234_RESET_DPAUX2			10
#define TEGRA234_RESET_PEX1_CORE_6		11
#define TEGRA234_RESET_PEX1_CORE_6_APB		12
#define TEGRA234_RESET_PEX1_COMMON_APB		13
#define TEGRA234_RESET_PEX2_CORE_7		14
#define TEGRA234_RESET_PEX2_CORE_7_APB		15
#define TEGRA234_RESET_RSVD_16			16
#define TEGRA234_RESET_EQOS			17
#define TEGRA234_RESET_GPCDMA			18
#define TEGRA234_RESET_GPU			19
#define TEGRA234_RESET_HDA			20
#define TEGRA234_RESET_HDA2CODEC_2X		21
#define TEGRA234_RESET_HDA2HDMICODEC		22
#define TEGRA234_RESET_HOST1X			23
#define TEGRA234_RESET_I2C1			24
#define TEGRA234_RESET_PEX2_CORE_8		25
#define TEGRA234_RESET_PEX2_CORE_8_APB		26
#define TEGRA234_RESET_PEX2_CORE_9		27
#define TEGRA234_RESET_PEX2_CORE_9_APB		28
#define TEGRA234_RESET_I2C2			29
#define TEGRA234_RESET_I2C3			30
#define TEGRA234_RESET_I2C4			31
#define TEGRA234_RESET_I2C6			32
#define TEGRA234_RESET_I2C7			33
#define TEGRA234_RESET_I2C8			34
#define TEGRA234_RESET_I2C9			35
#define TEGRA234_RESET_ISP			36
#define TEGRA234_RESET_MIPI_CAL			37
#define TEGRA234_RESET_MPHY_CLK_CTL		38
#define TEGRA234_RESET_MPHY_L0_RX		39
#define TEGRA234_RESET_MPHY_L0_TX		40
#define TEGRA234_RESET_MPHY_L1_RX		41
#define TEGRA234_RESET_MPHY_L1_TX		42
#define TEGRA234_RESET_NVCSI			43
#define TEGRA234_RESET_NVDEC			44
#define TEGRA234_RESET_NVDISPLAY0_HEAD0		45
#define TEGRA234_RESET_NVDISPLAY0_HEAD1		46
#define TEGRA234_RESET_NVDISPLAY0_HEAD2		47
#define TEGRA234_RESET_NVDISPLAY0_HEAD3		48
#define TEGRA234_RESET_NVDISPLAY0_MISC		49
#define TEGRA234_RESET_NVDISPLAY0_WGRP0		50
#define TEGRA234_RESET_NVDISPLAY0_WGRP1		51
#define TEGRA234_RESET_NVDISPLAY0_WGRP2		52
#define TEGRA234_RESET_NVDISPLAY0_WGRP3		53
#define TEGRA234_RESET_NVDISPLAY0_WGRP4		54
#define TEGRA234_RESET_NVDISPLAY0_WGRP5		55
#define TEGRA234_RESET_PEX2_CORE_10		56
#define TEGRA234_RESET_PEX2_CORE_10_APB		57
#define TEGRA234_RESET_PEX2_COMMON_APB		58
#define TEGRA234_RESET_NVENC			59
#define TEGRA234_RESET_RSVD_60			60
#define TEGRA234_RESET_NVJPG			61
#define TEGRA234_RESET_PCIE			62
#define TEGRA234_RESET_PCIEXCLK			63
#define TEGRA234_RESET_RSVD_64			64
#define TEGRA234_RESET_RSVD_65			65
#define TEGRA234_RESET_PVA0_ALL			66
#define TEGRA234_RESET_RSVD_67			67
#define TEGRA234_RESET_PWM1			68
#define TEGRA234_RESET_PWM2			69
#define TEGRA234_RESET_PWM3			70
#define TEGRA234_RESET_PWM4			71
#define TEGRA234_RESET_PWM5			72
#define TEGRA234_RESET_PWM6			73
#define TEGRA234_RESET_PWM7			74
#define TEGRA234_RESET_PWM8			75
#define TEGRA234_RESET_QSPI0			76
#define TEGRA234_RESET_QSPI1			77
#define TEGRA234_RESET_RSVD_78			78
#define TEGRA234_RESET_RSVD_79			79
#define TEGRA234_RESET_SCE_ALL			80
#define TEGRA234_RESET_RCE_ALL			81
#define TEGRA234_RESET_SDMMC1			82
#define TEGRA234_RESET_RSVD_83			83
#define TEGRA234_RESET_RSVD_84			84
#define TEGRA234_RESET_SDMMC4			85
#define TEGRA234_RESET_SE			86
#define TEGRA234_RESET_SOR0			87
#define TEGRA234_RESET_SOR1			88
#define TEGRA234_RESET_SOR2			89
#define TEGRA234_RESET_SOR3			90
#define TEGRA234_RESET_SPI1			91
#define TEGRA234_RESET_SPI2			92
#define TEGRA234_RESET_SPI3			93
#define TEGRA234_RESET_SPI4			94
#define TEGRA234_RESET_TACH0			95
#define TEGRA234_RESET_TACH1			96
#define TEGRA234_RESET_TSCTNVI			97
#define TEGRA234_RESET_TSEC			98
#define TEGRA234_RESET_RSVD_99			99
#define TEGRA234_RESET_UARTA			100
#define TEGRA234_RESET_UARTB			101
#define TEGRA234_RESET_UARTC			102
#define TEGRA234_RESET_UARTD			103
#define TEGRA234_RESET_UARTE			104
#define TEGRA234_RESET_UARTF			105
#define TEGRA234_RESET_RSVD_106			106
#define TEGRA234_RESET_UARTH			107
#define TEGRA234_RESET_UFSHC			108
#define TEGRA234_RESET_UFSHC_AXI_M		109
#define TEGRA234_RESET_UFSHC_LP_SEQ		110
#define TEGRA234_RESET_RSVD_111			111
#define TEGRA234_RESET_VI			112
#define TEGRA234_RESET_VIC			113
#define TEGRA234_RESET_XUSB_PADCTL		114
#define TEGRA234_RESET_RSVD_115			115
#define TEGRA234_RESET_PEX0_CORE_0		116
#define TEGRA234_RESET_PEX0_CORE_1		117
#define TEGRA234_RESET_PEX0_CORE_2		118
#define TEGRA234_RESET_PEX0_CORE_3		119
#define TEGRA234_RESET_PEX0_CORE_4		120
#define TEGRA234_RESET_PEX0_CORE_0_APB		121
#define TEGRA234_RESET_PEX0_CORE_1_APB		122
#define TEGRA234_RESET_PEX0_CORE_2_APB		123
#define TEGRA234_RESET_PEX0_CORE_3_APB		124
#define TEGRA234_RESET_PEX0_CORE_4_APB		125
#define TEGRA234_RESET_PEX0_COMMON_APB		126
#define TEGRA234_RESET_RSVD_127			127
#define TEGRA234_RESET_NVLINK			128
#define TEGRA234_RESET_PEX1_CORE_5		129
#define TEGRA234_RESET_PEX1_CORE_5_APB		130
#define TEGRA234_RESET_RSVD_131			131
#define TEGRA234_RESET_RSVD_132			132
#define TEGRA234_RESET_NVHS_UPHY		133
#define TEGRA234_RESET_NVHS_UPHY_PLL0		134
#define TEGRA234_RESET_NVHS_UPHY_L0		135
#define TEGRA234_RESET_NVHS_UPHY_L1		136
#define TEGRA234_RESET_NVHS_UPHY_L2		137
#define TEGRA234_RESET_NVHS_UPHY_L3		138
#define TEGRA234_RESET_NVHS_UPHY_L4		139
#define TEGRA234_RESET_NVHS_UPHY_L5		140
#define TEGRA234_RESET_NVHS_UPHY_L6		141
#define TEGRA234_RESET_NVHS_UPHY_L7		142
#define TEGRA234_RESET_NVHS_UPHY_PM		143
#define TEGRA234_RESET_DMIC5			144
#define TEGRA234_RESET_APE			145
#define TEGRA234_RESET_PEX_USB_UPHY		146
#define TEGRA234_RESET_PEX_USB_UPHY_L0		147
#define TEGRA234_RESET_PEX_USB_UPHY_L1		148
#define TEGRA234_RESET_PEX_USB_UPHY_L2		149
#define TEGRA234_RESET_PEX_USB_UPHY_L3		150
#define TEGRA234_RESET_PEX_USB_UPHY_L4		151
#define TEGRA234_RESET_PEX_USB_UPHY_L5		152
#define TEGRA234_RESET_PEX_USB_UPHY_L6		153
#define TEGRA234_RESET_PEX_USB_UPHY_L7		154
#define TEGRA234_RESET_PEX_USB_UPHY_L8		155
#define TEGRA234_RESET_PEX_USB_UPHY_L9		156
#define TEGRA234_RESET_PEX_USB_UPHY_L10		157
#define TEGRA234_RESET_PEX_USB_UPHY_L11		158
#define TEGRA234_RESET_PEX_USB_UPHY_PLL0	159
#define TEGRA234_RESET_PEX_USB_UPHY_PLL1	160
#define TEGRA234_RESET_PEX_USB_UPHY_PLL2	161
#define TEGRA234_RESET_PEX_USB_UPHY_PLL3	162
#define TEGRA234_RESET_MSSNVL			180

/** @} */

#endif
