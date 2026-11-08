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

// Function: entry_00160d30
// Address: 0x160d30 - 0x160d68
void entry_00160d30_0x160d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d30_0x160d30");
#endif

    switch (ctx->pc) {
        case 0x160d38u: goto label_160d38;
        default: break;
    }

    ctx->pc = 0x160d30u;

    // 0x160d30: 0xc04018c  jal         func_100630
    ctx->pc = 0x160D30u;
    SET_GPR_U32(ctx, 31, 0x160D38u);
    ctx->pc = 0x160D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D30u;
    // 0x160d34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x160D30u, 0x160D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D38u;
label_160d38:
    // 0x160d38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160d3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x160d3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160d40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x160d40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160d44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x160d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160d48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160d4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160d50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d60: 0x3e00008  jr          $ra
    ctx->pc = 0x160D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D60u;
        // 0x160d64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D68u;
}
