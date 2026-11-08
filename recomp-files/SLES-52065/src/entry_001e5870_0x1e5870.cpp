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

// Function: entry_001e5870
// Address: 0x1e5870 - 0x1e5894
void entry_001e5870_0x1e5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5870_0x1e5870");
#endif

    switch (ctx->pc) {
        case 0x1e588cu: goto label_1e588c;
        default: break;
    }

    ctx->pc = 0x1e5870u;

    // 0x1e5870: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e5870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1e5874: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e587c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E587Cu;
    {
        const bool branch_taken_0x1e587c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E587Cu;
        // 0x1e5880: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e587c) {
            ctx->pc = 0x1E5894u;
            return;
        }
    }
    ctx->pc = 0x1E5884u;
    // 0x1e5884: 0xc080490  jal         func_201240
    ctx->pc = 0x1E5884u;
    SET_GPR_U32(ctx, 31, 0x1E588Cu);
    ctx->pc = 0x1E5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5884u;
    // 0x1e5888: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E5884u, 0x1E588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E588Cu;
label_1e588c:
    // 0x1e588c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E588Cu;
    {
        const bool branch_taken_0x1e588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E588Cu;
        // 0x1e5890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e588c) {
            ctx->pc = 0x1E58B0u;
            return;
        }
    }
    ctx->pc = 0x1E5894u;
}
