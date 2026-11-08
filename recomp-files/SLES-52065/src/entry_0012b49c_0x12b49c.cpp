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

// Function: entry_0012b49c
// Address: 0x12b49c - 0x12b4b8
void entry_0012b49c_0x12b49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b49c_0x12b49c");
#endif

    ctx->pc = 0x12b49cu;

    // 0x12b49c: 0x0  nop
    ctx->pc = 0x12b49cu;
    // NOP
    // 0x12b4a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12b4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4B0u;
        // 0x12b4b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B4B8u;
}
