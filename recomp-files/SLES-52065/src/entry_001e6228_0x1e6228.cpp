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

// Function: entry_001e6228
// Address: 0x1e6228 - 0x1e624c
void entry_001e6228_0x1e6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6228_0x1e6228");
#endif

    switch (ctx->pc) {
        case 0x1e6244u: goto label_1e6244;
        default: break;
    }

    ctx->pc = 0x1e6228u;

    // 0x1e6228: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1e6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1e622c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e6230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e6234: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6234u;
    {
        const bool branch_taken_0x1e6234 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6234u;
        // 0x1e6238: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6234) {
            ctx->pc = 0x1E624Cu;
            return;
        }
    }
    ctx->pc = 0x1E623Cu;
    // 0x1e623c: 0xc080490  jal         func_201240
    ctx->pc = 0x1E623Cu;
    SET_GPR_U32(ctx, 31, 0x1E6244u);
    ctx->pc = 0x1E6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E623Cu;
    // 0x1e6240: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E623Cu, 0x1E6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6244u;
label_1e6244:
    // 0x1e6244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6244u;
    {
        const bool branch_taken_0x1e6244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6244u;
        // 0x1e6248: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6244) {
            ctx->pc = 0x1E6268u;
            return;
        }
    }
    ctx->pc = 0x1E624Cu;
}
