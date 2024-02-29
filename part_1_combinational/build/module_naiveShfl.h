/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Thu Feb 29 18:24:18 CET 2024
 * 
 */

/* Generation options: */
#ifndef __module_naiveShfl_h__
#define __module_naiveShfl_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the module_naiveShfl module */
class MOD_module_naiveShfl : public Module {
 
 /* Clock handles */
 private:
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
 
 /* Constructor */
 public:
  MOD_module_naiveShfl(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
 
 /* Port definitions */
 public:
  tUWide PORT_naiveShfl_in;
  tUWide PORT_naiveShfl;
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUWide DEF_SEL_ARR_naiveShfl_in_BITS_15_TO_0_naiveShfl_in_ETC___d52;
  tUWide DEF_SEL_ARR_naiveShfl_in_BITS_15_TO_0_naiveShfl_in_ETC___d47;
  tUWide DEF_SEL_ARR_naiveShfl_in_BITS_15_TO_0_naiveShfl_in_ETC___d42;
  tUWide DEF_SEL_ARR_naiveShfl_in_BITS_15_TO_0_naiveShfl_in_ETC___d37;
  tUWide DEF_SEL_ARR_naiveShfl_in_BITS_15_TO_0_naiveShfl_in_ETC___d32;
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUWide METH_naiveShfl(tUWide ARG_naiveShfl_in, tUInt8 ARG_naiveShfl_shftAmnt);
  tUInt8 METH_RDY_naiveShfl();
 
 /* Reset routines */
 public:
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_module_naiveShfl &backing);
  void vcd_defs(tVCDDumpType dt, MOD_module_naiveShfl &backing);
};

#endif /* ifndef __module_naiveShfl_h__ */
