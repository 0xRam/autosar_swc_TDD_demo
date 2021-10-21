#ifndef _AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_H_
#define _AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_H_

#include "autosar_swc_controller.h"
#include "autosar_swc_controller_private.h"
#include "autosar_swc_controller_types.h"
#include "rtwtypes.h"
#include "Platform_Types.h"
#include "Std_Types.h"
#include "Compiler.h"
#include "Rte_Controller.h"
#include "Rte_Type.h"
#include "rtwtypes.h"

extern real32_T RteStub_TPS_Percent_TPS_Percent_Value;
extern real32_T RteStub_APP_Percent_APP_Percent_Value;
extern real32_T RteStub_ThrCmd_Percent_ThrCmd_Percent_Value;

 real32_T Rte_IRead_Controller_Runnable_Step_TPS_Percent_Value(void);

 real32_T Rte_IRead_Controller_Runnable_Step_APP_Percent_Value(void);

void Rte_IWrite_Controller_Runnable_Step_ThrCmd_Percent_Value( real32_T argIn);

void Rte_IWrite_Controller_Controller_Init_ThrCmd_Percent_Value( real32_T argIn);

#endif //_AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_H_
