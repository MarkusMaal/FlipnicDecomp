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

// Function: entry_001276c0
// Address: 0x1276c0 - 0x1276e0
void entry_001276c0_0x1276c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001276c0_0x1276c0");
#endif

    switch (ctx->pc) {
        case 0x1276d0u: goto label_1276d0;
        default: break;
    }

    ctx->pc = 0x1276c0u;

    // 0x1276c0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1276c4: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1276c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1276C8u;
    SET_GPR_U32(ctx, 31, 0x1276D0u);
    ctx->pc = 0x1276CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1276C8u;
    // 0x1276cc: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1276C8u, 0x1276D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276D0u;
label_1276d0:
    // 0x1276d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276D0u;
    {
        const bool branch_taken_0x1276d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D0u;
        // 0x1276d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d0) {
            ctx->pc = 0x1276E0u;
            return;
        }
    }
    ctx->pc = 0x1276D8u;
    // 0x1276d8: 0xc04a5a0  jal         func_129680
    ctx->pc = 0x1276D8u;
    SET_GPR_U32(ctx, 31, 0x1276E0u);
    ctx->pc = 0x129680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129680u, 0x1276D8u, 0x1276E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276E0u;
}
