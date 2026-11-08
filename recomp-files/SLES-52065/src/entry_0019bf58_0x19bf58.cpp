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

// Function: entry_0019bf58
// Address: 0x19bf58 - 0x19bf98
void entry_0019bf58_0x19bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bf58_0x19bf58");
#endif

    ctx->pc = 0x19bf58u;

    // 0x19bf58: 0xae220924  sw          $v0, 0x924($s1)
    ctx->pc = 0x19bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 2));
    // 0x19bf5c: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19bf60: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19bf64: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
    // 0x19bf68: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x19bf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19bf74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bf74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bf78: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x19bf7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bf7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bf80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19bf80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19bf84: 0x0  nop
    ctx->pc = 0x19bf84u;
    // NOP
    // 0x19bf88: 0xae22092c  sw          $v0, 0x92C($s1)
    ctx->pc = 0x19bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
    // 0x19bf8c: 0xae230aa4  sw          $v1, 0xAA4($s1)
    ctx->pc = 0x19bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 3));
    // 0x19bf90: 0xc0699e0  jal         func_1A6780
    ctx->pc = 0x19BF90u;
    SET_GPR_U32(ctx, 31, 0x19BF98u);
    ctx->pc = 0x19BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF90u;
    // 0x19bf94: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF90u, 0x19BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF98u;
}
