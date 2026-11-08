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

// Function: entry_0013a460
// Address: 0x13a460 - 0x13a4a4
void entry_0013a460_0x13a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a460_0x13a460");
#endif

    switch (ctx->pc) {
        case 0x13a470u: goto label_13a470;
        default: break;
    }

    ctx->pc = 0x13a460u;

    // 0x13a460: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a464: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x13a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13a468: 0xc04c734  jal         func_131CD0
    ctx->pc = 0x13A468u;
    SET_GPR_U32(ctx, 31, 0x13A470u);
    ctx->pc = 0x13A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A468u;
    // 0x13a46c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x13A468u, 0x13A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A470u;
label_13a470:
    // 0x13a470: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a474: 0x0  nop
    ctx->pc = 0x13a474u;
    // NOP
    // 0x13a478: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a47c: 0x0  nop
    ctx->pc = 0x13a47cu;
    // NOP
    // 0x13a480: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13A480u;
    {
        const bool branch_taken_0x13a480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a480) {
            ctx->pc = 0x13A4A4u;
            return;
        }
    }
    ctx->pc = 0x13A488u;
    // 0x13a488: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a48c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a490: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x13a490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13a494: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a498: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a49c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13A49Cu;
    {
        const bool branch_taken_0x13a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A49Cu;
        // 0x13a4a0: 0xe4410014  swc1        $f1, 0x14($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a49c) {
            ctx->pc = 0x13A4F0u;
            return;
        }
    }
    ctx->pc = 0x13A4A4u;
}
