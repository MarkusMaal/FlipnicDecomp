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

// Function: entry_001d5f24
// Address: 0x1d5f24 - 0x1d5f38
void entry_001d5f24_0x1d5f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f24_0x1d5f24");
#endif

    switch (ctx->pc) {
        case 0x1d5f34u: goto label_1d5f34;
        default: break;
    }

    ctx->pc = 0x1d5f24u;

    // 0x1d5f24: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F24u;
    {
        const bool branch_taken_0x1d5f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f24) {
            ctx->pc = 0x1D5F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F24u;
            // 0x1d5f28: 0x8fa500c4  lw          $a1, 0xC4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F38u;
            return;
        }
    }
    ctx->pc = 0x1D5F2Cu;
    // 0x1d5f2c: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F34u);
    ctx->pc = 0x1D5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F2Cu;
    // 0x1d5f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D5F2Cu, 0x1D5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F34u;
label_1d5f34:
    // 0x1d5f34: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    ctx->pc = 0x1d5f38u;
}
