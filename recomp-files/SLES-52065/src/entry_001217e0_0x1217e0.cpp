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

// Function: entry_001217e0
// Address: 0x1217e0 - 0x121800
void entry_001217e0_0x1217e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001217e0_0x1217e0");
#endif

    ctx->pc = 0x1217e0u;

    // 0x1217e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1217e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1217e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1217e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1217e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1217e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1217ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1217ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1217f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1217F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1217F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217F0u;
        // 0x1217f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1217F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1217F8u;
    // 0x1217f8: 0x0  nop
    ctx->pc = 0x1217f8u;
    // NOP
    // 0x1217fc: 0x0  nop
    ctx->pc = 0x1217fcu;
    // NOP
    ctx->pc = 0x121800u;
}
