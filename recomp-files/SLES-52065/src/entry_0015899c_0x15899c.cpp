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

// Function: entry_0015899c
// Address: 0x15899c - 0x1589c0
void entry_0015899c_0x15899c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015899c_0x15899c");
#endif

    ctx->pc = 0x15899cu;

    // 0x15899c: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x15899cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1589a0: 0x78870030  lq          $a3, 0x30($a0)
    ctx->pc = 0x1589a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1589a4: 0x78880040  lq          $t0, 0x40($a0)
    ctx->pc = 0x1589a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1589a8: 0x78890050  lq          $t1, 0x50($a0)
    ctx->pc = 0x1589a8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1589ac: 0x7c860070  sq          $a2, 0x70($a0)
    ctx->pc = 0x1589acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 6));
    // 0x1589b0: 0x7c870080  sq          $a3, 0x80($a0)
    ctx->pc = 0x1589b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 7));
    // 0x1589b4: 0x7c880090  sq          $t0, 0x90($a0)
    ctx->pc = 0x1589b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 8));
    // 0x1589b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1589B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B8u;
        // 0x1589bc: 0x7c8900a0  sq          $t1, 0xA0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1589C0u;
}
