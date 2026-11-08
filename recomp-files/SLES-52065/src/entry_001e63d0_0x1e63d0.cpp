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

// Function: entry_001e63d0
// Address: 0x1e63d0 - 0x1e63f4
void entry_001e63d0_0x1e63d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e63d0_0x1e63d0");
#endif

    switch (ctx->pc) {
        case 0x1e63ecu: goto label_1e63ec;
        default: break;
    }

    ctx->pc = 0x1e63d0u;

    // 0x1e63d0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e63d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e63d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e63dc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E63DCu;
    {
        const bool branch_taken_0x1e63dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63DCu;
        // 0x1e63e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63dc) {
            ctx->pc = 0x1E63F4u;
            return;
        }
    }
    ctx->pc = 0x1E63E4u;
    // 0x1e63e4: 0xc080490  jal         func_201240
    ctx->pc = 0x1E63E4u;
    SET_GPR_U32(ctx, 31, 0x1E63ECu);
    ctx->pc = 0x1E63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63E4u;
    // 0x1e63e8: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E63E4u, 0x1E63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63ECu;
label_1e63ec:
    // 0x1e63ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E63ECu;
    {
        const bool branch_taken_0x1e63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63ECu;
        // 0x1e63f0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63ec) {
            ctx->pc = 0x1E6410u;
            return;
        }
    }
    ctx->pc = 0x1E63F4u;
}
