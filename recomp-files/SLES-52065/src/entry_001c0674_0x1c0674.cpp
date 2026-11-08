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

// Function: entry_001c0674
// Address: 0x1c0674 - 0x1c06a0
void entry_001c0674_0x1c0674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0674_0x1c0674");
#endif

    ctx->pc = 0x1c0674u;

    // 0x1c0674: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0678: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c067c: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x1c067cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x1c0680: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0684: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1c0684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1c0688: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c068c: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1c068cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0690: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0698: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0698u;
        // 0x1c069c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C06A0u;
}
