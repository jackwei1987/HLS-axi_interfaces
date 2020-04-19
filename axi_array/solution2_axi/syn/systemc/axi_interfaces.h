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

#include "axi_interfaces_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 9,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct axi_interfaces : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    axi_interfaces(sc_module_name name);
    SC_HAS_PROCESS(axi_interfaces);

    ~axi_interfaces();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    axi_interfaces_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* axi_interfaces_AXILiteS_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<33> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<5> > d_o_address0;
    sc_signal< sc_logic > d_o_ce0;
    sc_signal< sc_logic > d_o_we0;
    sc_signal< sc_lv<32> > d_o_d0;
    sc_signal< sc_lv<5> > d_i_address0;
    sc_signal< sc_logic > d_i_ce0;
    sc_signal< sc_lv<32> > d_i_q0;
    sc_signal< sc_lv<32> > d_i_load_reg_828;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > d_i_load_1_reg_838;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > d_i_load_2_reg_848;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > d_i_load_3_reg_858;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > d_i_load_4_reg_868;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > d_i_load_5_reg_878;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > d_i_load_6_reg_888;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > d_i_load_7_reg_898;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > add_ln26_fu_679_p2;
    sc_signal< sc_lv<32> > add_ln26_reg_908;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > add_ln26_1_fu_685_p2;
    sc_signal< sc_lv<32> > add_ln26_1_reg_918;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > add_ln26_2_fu_691_p2;
    sc_signal< sc_lv<32> > add_ln26_2_reg_928;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > add_ln26_3_fu_697_p2;
    sc_signal< sc_lv<32> > add_ln26_3_reg_938;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<32> > add_ln26_4_fu_703_p2;
    sc_signal< sc_lv<32> > add_ln26_4_reg_948;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > add_ln26_5_fu_709_p2;
    sc_signal< sc_lv<32> > add_ln26_5_reg_958;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > add_ln26_6_fu_715_p2;
    sc_signal< sc_lv<32> > add_ln26_6_reg_968;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > add_ln26_7_fu_721_p2;
    sc_signal< sc_lv<32> > add_ln26_7_reg_978;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > add_ln26_8_fu_727_p2;
    sc_signal< sc_lv<32> > add_ln26_8_reg_988;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > add_ln26_9_fu_733_p2;
    sc_signal< sc_lv<32> > add_ln26_9_reg_998;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<32> > add_ln26_10_fu_739_p2;
    sc_signal< sc_lv<32> > add_ln26_10_reg_1008;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > add_ln26_11_fu_745_p2;
    sc_signal< sc_lv<32> > add_ln26_11_reg_1018;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<32> > add_ln26_12_fu_751_p2;
    sc_signal< sc_lv<32> > add_ln26_12_reg_1028;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > add_ln26_13_fu_757_p2;
    sc_signal< sc_lv<32> > add_ln26_13_reg_1038;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > add_ln26_14_fu_763_p2;
    sc_signal< sc_lv<32> > add_ln26_14_reg_1048;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<32> > add_ln26_15_fu_769_p2;
    sc_signal< sc_lv<32> > add_ln26_15_reg_1058;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<32> > add_ln26_16_fu_775_p2;
    sc_signal< sc_lv<32> > add_ln26_17_fu_781_p2;
    sc_signal< sc_lv<32> > add_ln26_18_fu_787_p2;
    sc_signal< sc_lv<32> > add_ln26_19_fu_793_p2;
    sc_signal< sc_lv<32> > add_ln26_20_fu_799_p2;
    sc_signal< sc_lv<32> > add_ln26_21_fu_805_p2;
    sc_signal< sc_lv<32> > add_ln26_22_fu_811_p2;
    sc_signal< sc_lv<32> > add_ln26_23_fu_817_p2;
    sc_signal< sc_lv<33> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<33> ap_ST_fsm_state1;
    static const sc_lv<33> ap_ST_fsm_state2;
    static const sc_lv<33> ap_ST_fsm_state3;
    static const sc_lv<33> ap_ST_fsm_state4;
    static const sc_lv<33> ap_ST_fsm_state5;
    static const sc_lv<33> ap_ST_fsm_state6;
    static const sc_lv<33> ap_ST_fsm_state7;
    static const sc_lv<33> ap_ST_fsm_state8;
    static const sc_lv<33> ap_ST_fsm_state9;
    static const sc_lv<33> ap_ST_fsm_state10;
    static const sc_lv<33> ap_ST_fsm_state11;
    static const sc_lv<33> ap_ST_fsm_state12;
    static const sc_lv<33> ap_ST_fsm_state13;
    static const sc_lv<33> ap_ST_fsm_state14;
    static const sc_lv<33> ap_ST_fsm_state15;
    static const sc_lv<33> ap_ST_fsm_state16;
    static const sc_lv<33> ap_ST_fsm_state17;
    static const sc_lv<33> ap_ST_fsm_state18;
    static const sc_lv<33> ap_ST_fsm_state19;
    static const sc_lv<33> ap_ST_fsm_state20;
    static const sc_lv<33> ap_ST_fsm_state21;
    static const sc_lv<33> ap_ST_fsm_state22;
    static const sc_lv<33> ap_ST_fsm_state23;
    static const sc_lv<33> ap_ST_fsm_state24;
    static const sc_lv<33> ap_ST_fsm_state25;
    static const sc_lv<33> ap_ST_fsm_state26;
    static const sc_lv<33> ap_ST_fsm_state27;
    static const sc_lv<33> ap_ST_fsm_state28;
    static const sc_lv<33> ap_ST_fsm_state29;
    static const sc_lv<33> ap_ST_fsm_state30;
    static const sc_lv<33> ap_ST_fsm_state31;
    static const sc_lv<33> ap_ST_fsm_state32;
    static const sc_lv<33> ap_ST_fsm_state33;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<64> ap_const_lv64_10;
    static const sc_lv<64> ap_const_lv64_11;
    static const sc_lv<64> ap_const_lv64_12;
    static const sc_lv<64> ap_const_lv64_13;
    static const sc_lv<64> ap_const_lv64_14;
    static const sc_lv<64> ap_const_lv64_15;
    static const sc_lv<64> ap_const_lv64_16;
    static const sc_lv<64> ap_const_lv64_17;
    static const sc_lv<64> ap_const_lv64_18;
    static const sc_lv<64> ap_const_lv64_19;
    static const sc_lv<64> ap_const_lv64_1A;
    static const sc_lv<64> ap_const_lv64_1B;
    static const sc_lv<64> ap_const_lv64_1C;
    static const sc_lv<64> ap_const_lv64_1D;
    static const sc_lv<64> ap_const_lv64_1E;
    static const sc_lv<64> ap_const_lv64_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln26_10_fu_739_p2();
    void thread_add_ln26_11_fu_745_p2();
    void thread_add_ln26_12_fu_751_p2();
    void thread_add_ln26_13_fu_757_p2();
    void thread_add_ln26_14_fu_763_p2();
    void thread_add_ln26_15_fu_769_p2();
    void thread_add_ln26_16_fu_775_p2();
    void thread_add_ln26_17_fu_781_p2();
    void thread_add_ln26_18_fu_787_p2();
    void thread_add_ln26_19_fu_793_p2();
    void thread_add_ln26_1_fu_685_p2();
    void thread_add_ln26_20_fu_799_p2();
    void thread_add_ln26_21_fu_805_p2();
    void thread_add_ln26_22_fu_811_p2();
    void thread_add_ln26_23_fu_817_p2();
    void thread_add_ln26_2_fu_691_p2();
    void thread_add_ln26_3_fu_697_p2();
    void thread_add_ln26_4_fu_703_p2();
    void thread_add_ln26_5_fu_709_p2();
    void thread_add_ln26_6_fu_715_p2();
    void thread_add_ln26_7_fu_721_p2();
    void thread_add_ln26_8_fu_727_p2();
    void thread_add_ln26_9_fu_733_p2();
    void thread_add_ln26_fu_679_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_d_i_address0();
    void thread_d_i_ce0();
    void thread_d_o_address0();
    void thread_d_o_ce0();
    void thread_d_o_d0();
    void thread_d_o_we0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
