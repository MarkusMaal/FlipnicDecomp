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

// Function: entry_00119634
// Address: 0x119634 - 0x119650
void entry_00119634_0x119634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119634_0x119634");
#endif

    ctx->pc = 0x119634u;

    // 0x119634: 0x0  nop
    ctx->pc = 0x119634u;
    // NOP
    // 0x119638: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11963c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11963cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119648: 0x3e00008  jr          $ra
    ctx->pc = 0x119648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119648u;
        // 0x11964c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119650u;
}
