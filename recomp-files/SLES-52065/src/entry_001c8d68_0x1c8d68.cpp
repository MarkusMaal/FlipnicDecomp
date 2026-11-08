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

// Function: entry_001c8d68
// Address: 0x1c8d68 - 0x1c8d80
void entry_001c8d68_0x1c8d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d68_0x1c8d68");
#endif

    switch (ctx->pc) {
        case 0x1c8d70u: goto label_1c8d70;
        default: break;
    }

    ctx->pc = 0x1c8d68u;

    // 0x1c8d68: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C8D68u;
    SET_GPR_U32(ctx, 31, 0x1C8D70u);
    ctx->pc = 0x1C8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D68u;
    // 0x1c8d6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C8D68u, 0x1C8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D70u;
label_1c8d70:
    // 0x1c8d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8D70u;
    {
        const bool branch_taken_0x1c8d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D70u;
        // 0x1c8d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d70) {
            ctx->pc = 0x1C8D80u;
            return;
        }
    }
    ctx->pc = 0x1C8D78u;
    // 0x1c8d78: 0xc072364  jal         func_1C8D90
    ctx->pc = 0x1C8D78u;
    SET_GPR_U32(ctx, 31, 0x1C8D80u);
    ctx->pc = 0x1C8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D78u;
    // 0x1c8d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8D90u, 0x1C8D78u, 0x1C8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D80u;
}
