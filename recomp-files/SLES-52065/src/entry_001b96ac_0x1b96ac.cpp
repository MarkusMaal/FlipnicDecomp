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

// Function: entry_001b96ac
// Address: 0x1b96ac - 0x1b96c8
void entry_001b96ac_0x1b96ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b96ac_0x1b96ac");
#endif

    switch (ctx->pc) {
        case 0x1b96b8u: goto label_1b96b8;
        default: break;
    }

    ctx->pc = 0x1b96acu;

    // 0x1b96ac: 0x0  nop
    ctx->pc = 0x1b96acu;
    // NOP
    // 0x1b96b0: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B96B0u;
    SET_GPR_U32(ctx, 31, 0x1B96B8u);
    ctx->pc = 0x1B96B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96B0u;
    // 0x1b96b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B96B0u, 0x1B96B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96B8u;
label_1b96b8:
    // 0x1b96b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b96bc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B96BCu;
    {
        const bool branch_taken_0x1b96bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b96bc) {
            ctx->pc = 0x1B9690u;
            return;
        }
    }
    ctx->pc = 0x1B96C4u;
    // 0x1b96c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b96c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b96c8u;
}
