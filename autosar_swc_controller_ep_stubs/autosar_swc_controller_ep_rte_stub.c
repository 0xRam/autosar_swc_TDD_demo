#ifndef _AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_C_
#define _AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_C_

#include "autosar_swc_controller_ep_rte_stub.h"



real32_T RteStub_TPS_Percent_TPS_Percent_Value;


real32_T RteStub_APP_Percent_APP_Percent_Value;


real32_T RteStub_ThrCmd_Percent_ThrCmd_Percent_Value;


 real32_T Rte_IRead_Controller_Runnable_Step_TPS_Percent_Value(void){
  return RteStub_TPS_Percent_TPS_Percent_Value;
}


 real32_T Rte_IRead_Controller_Runnable_Step_APP_Percent_Value(void){
  return RteStub_APP_Percent_APP_Percent_Value;
}


void Rte_IWrite_Controller_Runnable_Step_ThrCmd_Percent_Value( real32_T argIn){
 RteStub_ThrCmd_Percent_ThrCmd_Percent_Value = argIn;
}


void Rte_IWrite_Controller_Controller_Init_ThrCmd_Percent_Value( real32_T argIn){
 RteStub_ThrCmd_Percent_ThrCmd_Percent_Value = argIn;
}

#endif //_AUTOSAR_SWC_CONTROLLER_EP_RTE_STUB_ET_C_
