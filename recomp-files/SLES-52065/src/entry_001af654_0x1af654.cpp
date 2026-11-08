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

// Function: entry_001af654
// Address: 0x1af654 - 0x1af670
void entry_001af654_0x1af654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af654_0x1af654");
#endif

    ctx->pc = 0x1af654u;

    // 0x1af654: 0x0  nop
    ctx->pc = 0x1af654u;
    // NOP
    // 0x1af658: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af668: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF668u;
        // 0x1af66c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF670u;
}
