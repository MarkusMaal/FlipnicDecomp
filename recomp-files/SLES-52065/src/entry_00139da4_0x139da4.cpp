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

// Function: entry_00139da4
// Address: 0x139da4 - 0x139dc8
void entry_00139da4_0x139da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139da4_0x139da4");
#endif

    switch (ctx->pc) {
        case 0x139db4u: goto label_139db4;
        default: break;
    }

    ctx->pc = 0x139da4u;

    // 0x139da4: 0x0  nop
    ctx->pc = 0x139da4u;
    // NOP
    // 0x139da8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139dac: 0xc04e774  jal         func_139DD0
    ctx->pc = 0x139DACu;
    SET_GPR_U32(ctx, 31, 0x139DB4u);
    ctx->pc = 0x139DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DACu;
    // 0x139db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139DD0u, 0x139DACu, 0x139DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DB4u;
label_139db4:
    // 0x139db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x139DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DC0u;
        // 0x139dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139DC8u;
}
