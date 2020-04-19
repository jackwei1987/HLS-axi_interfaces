// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _axi_interfaces_HH_
#define _axi_interfaces_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "axi_interfaces_acc.h"

namespace ap_rtl {

struct axi_interfaces : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > d_o_address0;
    sc_out< sc_logic > d_o_ce0;
    sc_out< sc_logic > d_o_we0;
    sc_out< sc_lv<32> > d_o_d0;
    sc_out< sc_lv<5> > d_i_address0;
    sc_out< sc_logic > d_i_ce0;
    sc_in< sc_lv<32> > d_i_q0;


    // Module declarations
    axi_interfaces(sc_module_name name);
    SC_HAS_PROCESS(axi_interfaces);

    ~axi_interfaces();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    axi_interfaces_acc* acc_U;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > acc_address0;
    sc_signal< sc_logic > acc_ce0;
    sc_signal< sc_logic > acc_we0;
    sc_signal< sc_lv<32> > acc_d0;
    sc_signal< sc_lv<32> > acc_q0;
    sc_signal< sc_lv<4> > i_fu_116_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > i_2_fu_137_p2;
    sc_signal< sc_lv<6> > i_2_reg_172;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > acc_addr_1_reg_177;
    sc_signal< sc_lv<1> > icmp_ln24_fu_131_p2;
    sc_signal< sc_lv<64> > zext_ln26_1_fu_148_p1;
    sc_signal< sc_lv<64> > zext_ln26_1_reg_182;
    sc_signal< sc_lv<4> > i_0_reg_88;
    sc_signal< sc_lv<1> > icmp_ln19_fu_110_p2;
    sc_signal< sc_lv<6> > i_1_reg_99;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > zext_ln20_fu_122_p1;
    sc_signal< sc_lv<64> > zext_ln26_fu_143_p1;
    sc_signal< sc_lv<32> > add_ln26_fu_153_p2;
    sc_signal< sc_lv<3> > rem_fu_127_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_address0();
    void thread_acc_ce0();
    void thread_acc_d0();
    void thread_acc_we0();
    void thread_add_ln26_fu_153_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_d_i_address0();
    void thread_d_i_ce0();
    void thread_d_o_address0();
    void thread_d_o_ce0();
    void thread_d_o_d0();
    void thread_d_o_we0();
    void thread_i_2_fu_137_p2();
    void thread_i_fu_116_p2();
    void thread_icmp_ln19_fu_110_p2();
    void thread_icmp_ln24_fu_131_p2();
    void thread_rem_fu_127_p1();
    void thread_zext_ln20_fu_122_p1();
    void thread_zext_ln26_1_fu_148_p1();
    void thread_zext_ln26_fu_143_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
