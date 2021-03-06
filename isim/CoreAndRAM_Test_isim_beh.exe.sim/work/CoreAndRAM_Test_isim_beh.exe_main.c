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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001222053639_3674772129_init();
    work_m_00000000002085442080_0886308060_init();
    work_m_00000000003376360053_0534370371_init();
    xilinxcorelib_ver_m_00000000001358910285_1933459722_init();
    xilinxcorelib_ver_m_00000000001687936702_3412580636_init();
    xilinxcorelib_ver_m_00000000000277421008_0269205216_init();
    xilinxcorelib_ver_m_00000000001603977570_2564218569_init();
    work_m_00000000003289761879_2356217838_init();
    work_m_00000000001942421583_0251354806_init();
    work_m_00000000003791091582_1133173797_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003791091582_1133173797");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
