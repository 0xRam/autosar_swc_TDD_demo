/*
 * File: autosar_swc_controller.c
 *
 * Code generated for Simulink model 'autosar_swc_controller'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Oct 21 12:58:27 2021
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "autosar_swc_controller.h"
#include "autosar_swc_controller_private.h"

/* Model step function */
void Runnable_Step(void)
{
  /* Outport: '<Root>/windowCmd_out' */
  Rte_IWrite_Runnable_Step_ThrCmd_Percent_Value(0.0F);
}

/* Model initialize function */
void Controller_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
