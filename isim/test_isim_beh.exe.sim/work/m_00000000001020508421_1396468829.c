/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Loredana/OneDrive - Universitatea Politehnica Timisoara/An 2/OC (proiect)/fpu/trunk/verilog/post_norm.v";



static void Always_635_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(635, ng0);
    t2 = (t0 + 2984);
    *((int *)t2) = 1;
    t3 = (t0 + 2696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(636, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 50, 1000LL);
    goto LAB2;

}


extern void work_m_00000000001020508421_1396468829_init()
{
	static char *pe[] = {(void *)Always_635_0};
	xsi_register_didat("work_m_00000000001020508421_1396468829", "isim/test_isim_beh.exe.sim/work/m_00000000001020508421_1396468829.didat");
	xsi_register_executes(pe);
}
