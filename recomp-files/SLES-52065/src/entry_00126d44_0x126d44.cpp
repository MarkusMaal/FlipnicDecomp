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

// Function: entry_00126d44
// Address: 0x126d44 - 0x126d64
void entry_00126d44_0x126d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126d44_0x126d44");
#endif

    switch (ctx->pc) {
        case 0x126d50u: goto label_126d50;
        default: break;
    }

    ctx->pc = 0x126d44u;

    // 0x126d44: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x126d44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x126d48: 0xc049b5c  jal         func_126D70
    ctx->pc = 0x126D48u;
    SET_GPR_U32(ctx, 31, 0x126D50u);
    ctx->pc = 0x126D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D48u;
    // 0x126d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D70u, 0x126D48u, 0x126D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D50u;
label_126d50:
    // 0x126d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x126D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D5Cu;
        // 0x126d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126D64u;
}
