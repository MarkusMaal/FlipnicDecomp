#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00189ca4
// Address: 0x189ca4 - 0x189dfc
void entry_00189ca4_0x189ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ca4_0x189ca4");
#endif

    switch (ctx->pc) {
        case 0x189dd4u: goto label_189dd4;
        default: break;
    }

    ctx->pc = 0x189ca4u;

    // 0x189ca4: 0x0  nop
    ctx->pc = 0x189ca4u;
    // NOP
    // 0x189ca8: 0x8e870050  lw          $a3, 0x50($s4)
    ctx->pc = 0x189ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x189cac: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x189cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189cb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189cb4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x189cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189cb8: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x189cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x189cbc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x189cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189cc0: 0x34660003  ori         $a2, $v1, 0x3
    ctx->pc = 0x189cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x189cc4: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x189cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x189cc8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x189cc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x189ccc: 0x644825  or          $t1, $v1, $a0
    ctx->pc = 0x189cccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x189cd0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cd4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x189cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x189cd8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x189cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x189cdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x189cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x189ce0: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x189ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x189ce4: 0xffa900c0  sd          $t1, 0xC0($sp)
    ctx->pc = 0x189ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 9));
    // 0x189ce8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x189ce8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x189cec: 0xffa800c8  sd          $t0, 0xC8($sp)
    ctx->pc = 0x189cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 8));
    // 0x189cf0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x189cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x189cf4: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189cf8: 0x3c084180  lui         $t0, 0x4180
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16768 << 16));
    // 0x189cfc: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x189cfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x189d00: 0x132580a  movz        $t3, $t1, $s2
    ctx->pc = 0x189d00u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 9));
    // 0x189d04: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x189d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x189d08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x189d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x189d0c: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x189d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x189d10: 0x3c084380  lui         $t0, 0x4380
    ctx->pc = 0x189d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17280 << 16));
    // 0x189d14: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x189d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189d18: 0x240cfff0  addiu       $t4, $zero, -0x10
    ctx->pc = 0x189d18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x189d1c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x189d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x189d20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x189d24: 0xfda60000  sd          $a2, 0x0($t5)
    ctx->pc = 0x189d24u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 6));
    // 0x189d28: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x189d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x189d2c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d30: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x189d34: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x189d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x189d38: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x189d38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x189d3c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x189d44: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x189d44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
    // 0x189d48: 0x7bab00c0  lq          $t3, 0xC0($sp)
    ctx->pc = 0x189d48u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x189d4c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189d50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189d54: 0x7d2b0010  sq          $t3, 0x10($t1)
    ctx->pc = 0x189d54u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 11));
    // 0x189d58: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x189d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x189d5c: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x189d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d60: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x189d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x189d64: 0xac2824  and         $a1, $a1, $t4
    ctx->pc = 0x189d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 12));
    // 0x189d68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x189d68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189d6c: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
    // 0x189d70: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x189d70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189d74: 0x12c3024  and         $a2, $t1, $t4
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 12));
    // 0x189d78: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x189d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x189d7c: 0xfd640020  sd          $a0, 0x20($t3)
    ctx->pc = 0x189d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 4));
    // 0x189d80: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d84: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x189d84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x189d88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x189d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d8c: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x189d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x189d90: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x189d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d94: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x189d94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    // 0x189d98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x189d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x189d9c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189da0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x189da0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x189da4: 0xc6820040  lwc1        $f2, 0x40($s4)
    ctx->pc = 0x189da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x189da8: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x189da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x189dac: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x189dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189db0: 0x8fa900d8  lw          $t1, 0xD8($sp)
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x189db4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x189db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x189db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189dbc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189dc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x189dc4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x189dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x189dc8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x189dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x189dcc: 0xc045be0  jal         func_116F80
    ctx->pc = 0x189DCCu;
    SET_GPR_U32(ctx, 31, 0x189DD4u);
    ctx->pc = 0x189DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DCCu;
    // 0x189dd0: 0x24c67ff8  addiu       $a2, $a2, 0x7FF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F80u, 0x189DCCu, 0x189DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DD4u;
label_189dd4:
    // 0x189dd4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x189dd8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x189dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x189ddc: 0x52180a  movz        $v1, $v0, $s2
    ctx->pc = 0x189ddcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x189de0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x189de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189de4: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x189de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189de8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x189dec: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x189decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189df0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x189df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x189df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x189df8: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x189df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    ctx->pc = 0x189dfcu;
}
