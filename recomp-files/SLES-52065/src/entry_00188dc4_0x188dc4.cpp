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

// Function: entry_00188dc4
// Address: 0x188dc4 - 0x188e94
void entry_00188dc4_0x188dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188dc4_0x188dc4");
#endif

    switch (ctx->pc) {
        case 0x188e6cu: goto label_188e6c;
        default: break;
    }

    ctx->pc = 0x188dc4u;

    // 0x188dc4: 0x0  nop
    ctx->pc = 0x188dc4u;
    // NOP
    // 0x188dc8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x188dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x188dcc: 0x4616b881  sub.s       $f2, $f23, $f22
    ctx->pc = 0x188dccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x188dd0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x188dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x188dd4: 0x8fb200e4  lw          $s2, 0xE4($sp)
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x188dd8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x188dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x188ddc: 0xc6a40068  lwc1        $f4, 0x68($s5)
    ctx->pc = 0x188ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x188de0: 0x460228c2  mul.s       $f3, $f5, $f2
    ctx->pc = 0x188de0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x188de4: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x188de4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x188de8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x188de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x188dec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x188df0: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x188df4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x188df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x188df8: 0x46182882  mul.s       $f2, $f5, $f24
    ctx->pc = 0x188df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x188dfc: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x188dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e00: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x188e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e04: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x188e04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x188e08: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x188e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x188e0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x188e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x188e10: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x188e14: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x188e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188e18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188e1c: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x188e20: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x188e24: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x188e28: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x188e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188e2c: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x188e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x188e30: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x188e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e34: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x188e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x188e38: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188e3c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x188e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x188e40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188e44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x188e48: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188e4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x188e50: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x188e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x188e54: 0xffb40010  sd          $s4, 0x10($sp)
    ctx->pc = 0x188e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 20));
    // 0x188e58: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x188e5c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x188e60: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x188e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x188e64: 0xc062128  jal         func_1884A0
    ctx->pc = 0x188E64u;
    SET_GPR_U32(ctx, 31, 0x188E6Cu);
    ctx->pc = 0x188E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E64u;
    // 0x188e68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1884A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1884A0u, 0x188E64u, 0x188E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E6Cu;
label_188e6c:
    // 0x188e6c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x188e6cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e70: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x188e74: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x188e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188e78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x188e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188e7c: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x188e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e80: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x188e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x188e84: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x188e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e88: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x188e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188e90: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x188e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    ctx->pc = 0x188e94u;
}
