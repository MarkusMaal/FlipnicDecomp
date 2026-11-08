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

// Function: entry_001e5a08
// Address: 0x1e5a08 - 0x1e5a2c
void entry_001e5a08_0x1e5a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5a08_0x1e5a08");
#endif

    switch (ctx->pc) {
        case 0x1e5a24u: goto label_1e5a24;
        default: break;
    }

    ctx->pc = 0x1e5a08u;

    // 0x1e5a08: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1e5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1e5a0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5a14: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5A14u;
    {
        const bool branch_taken_0x1e5a14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A14u;
        // 0x1e5a18: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a14) {
            ctx->pc = 0x1E5A2Cu;
            return;
        }
    }
    ctx->pc = 0x1E5A1Cu;
    // 0x1e5a1c: 0xc080490  jal         func_201240
    ctx->pc = 0x1E5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E5A24u);
    ctx->pc = 0x1E5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A1Cu;
    // 0x1e5a20: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E5A1Cu, 0x1E5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A24u;
label_1e5a24:
    // 0x1e5a24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A48u;
            return;
        }
    }
    ctx->pc = 0x1E5A2Cu;
}
