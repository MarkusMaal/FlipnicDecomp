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

// Function: entry_001d5f38
// Address: 0x1d5f38 - 0x1d5f50
void entry_001d5f38_0x1d5f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f38_0x1d5f38");
#endif

    switch (ctx->pc) {
        case 0x1d5f48u: goto label_1d5f48;
        default: break;
    }

    ctx->pc = 0x1d5f38u;

    // 0x1d5f38: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5F38u;
    {
        const bool branch_taken_0x1d5f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F38u;
        // 0x1d5f3c: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f38) {
            ctx->pc = 0x1D5F54u;
            return;
        }
    }
    ctx->pc = 0x1D5F40u;
    // 0x1d5f40: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D5F40u;
    SET_GPR_U32(ctx, 31, 0x1D5F48u);
    ctx->pc = 0x1D5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F40u;
    // 0x1d5f44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D5F40u, 0x1D5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F48u;
label_1d5f48:
    // 0x1d5f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5F48u;
    {
        const bool branch_taken_0x1d5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F48u;
        // 0x1d5f4c: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f48) {
            ctx->pc = 0x1D5F54u;
            return;
        }
    }
    ctx->pc = 0x1D5F50u;
}
