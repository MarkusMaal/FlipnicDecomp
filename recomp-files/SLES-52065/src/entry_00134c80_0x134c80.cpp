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

// Function: entry_00134c80
// Address: 0x134c80 - 0x134cb0
void entry_00134c80_0x134c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c80_0x134c80");
#endif

    ctx->pc = 0x134c80u;

    // 0x134c80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134c84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134c84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134c88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134c88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134c8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134c90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134c94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134c98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134c98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x134CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CA8u;
        // 0x134cac: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134CB0u;
}
