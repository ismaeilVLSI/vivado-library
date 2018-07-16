// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xhls_gamma_correction.h"

extern XHls_gamma_correction_Config XHls_gamma_correction_ConfigTable[];

XHls_gamma_correction_Config *XHls_gamma_correction_LookupConfig(u16 DeviceId) {
	XHls_gamma_correction_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XHLS_GAMMA_CORRECTION_NUM_INSTANCES; Index++) {
		if (XHls_gamma_correction_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XHls_gamma_correction_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XHls_gamma_correction_Initialize(XHls_gamma_correction *InstancePtr, u16 DeviceId) {
	XHls_gamma_correction_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XHls_gamma_correction_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XHls_gamma_correction_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif
