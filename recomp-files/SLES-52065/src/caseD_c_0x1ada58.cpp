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

// Function: caseD_c
// Address: 0x1ada58 - 0x1adab0
void caseD_c_0x1ada58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1ada58");
#endif

    switch (ctx->pc) {
        case 0x1ada90u: goto label_1ada90;
        case 0x1ada98u: goto label_1ada98;
        case 0x1adaa8u: goto label_1adaa8;
        default: break;
    }

    ctx->pc = 0x1ada58u;

    // 0x1ada58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada5c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ada60: 0xae2307b4  sw          $v1, 0x7B4($s1)
    ctx->pc = 0x1ada60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1972), GPR_U32(ctx, 3));
    // 0x1ada64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ada64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ada68: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ada68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ada6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ada6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ada70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ada70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ada74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ada74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ada78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ada78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ada7c: 0x0  nop
    ctx->pc = 0x1ada7cu;
    // NOP
    // 0x1ada80: 0xae2207b8  sw          $v0, 0x7B8($s1)
    ctx->pc = 0x1ada80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 2));
    // 0x1ada84: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1ada88: 0xc054660  jal         func_151980
    ctx->pc = 0x1ADA88u;
    SET_GPR_U32(ctx, 31, 0x1ADA90u);
    ctx->pc = 0x1ADA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA88u;
    // 0x1ada8c: 0x262407a0  addiu       $a0, $s1, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1ADA88u, 0x1ADA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA90u;
label_1ada90:
    // 0x1ada90: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1ADA90u;
    SET_GPR_U32(ctx, 31, 0x1ADA98u);
    ctx->pc = 0x1ADA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA90u;
    // 0x1ada94: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1ADA90u, 0x1ADA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA98u;
label_1ada98:
    // 0x1ada98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1ADAA0u;
    SET_GPR_U32(ctx, 31, 0x1ADAA8u);
    ctx->pc = 0x1ADAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA0u;
    // 0x1adaa4: 0xa22506c1  sb          $a1, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1ADAA0u, 0x1ADAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAA8u;
label_1adaa8:
    // 0x1adaa8: 0x1000fe48  b           . + 4 + (-0x1B8 << 2)
    ctx->pc = 0x1ADAA8u;
    {
        const bool branch_taken_0x1adaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA8u;
        // 0x1adaac: 0xa22006c0  sb          $zero, 0x6C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1728), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adaa8) {
            ctx->pc = 0x1AD3CCu;
            return;
        }
    }
    ctx->pc = 0x1ADAB0u;
}
