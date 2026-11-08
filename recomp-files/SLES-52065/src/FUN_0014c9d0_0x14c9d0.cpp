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

// Function: FUN_0014c9d0
// Address: 0x14c9d0 - 0x14c9fc
void FUN_0014c9d0_0x14c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c9d0_0x14c9d0");
#endif

    ctx->pc = 0x14c9d0u;

    // 0x14c9d0: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14c9d4: 0x8c8700bc  lw          $a3, 0xBC($a0)
    ctx->pc = 0x14c9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x14c9d8: 0x8c8500b0  lw          $a1, 0xB0($a0)
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14c9dc: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x14c9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14c9e0: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x14c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x14c9e4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14c9e8: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x14c9ec: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x14c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14c9f0: 0xac8502b4  sw          $a1, 0x2B4($a0)
    ctx->pc = 0x14c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 5));
    // 0x14c9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14C9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9F4u;
        // 0x14c9f8: 0xac6600d8  sw          $a2, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C9FCu;
}
