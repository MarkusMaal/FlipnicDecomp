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

// Function: entry_00127680
// Address: 0x127680 - 0x1276a0
void entry_00127680_0x127680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127680_0x127680");
#endif

    switch (ctx->pc) {
        case 0x127690u: goto label_127690;
        default: break;
    }

    ctx->pc = 0x127680u;

    // 0x127680: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127684: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x127688: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127688u;
    SET_GPR_U32(ctx, 31, 0x127690u);
    ctx->pc = 0x12768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127688u;
    // 0x12768c: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127688u, 0x127690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127690u;
label_127690:
    // 0x127690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127690u;
    {
        const bool branch_taken_0x127690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127690u;
        // 0x127694: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127690) {
            ctx->pc = 0x1276A0u;
            return;
        }
    }
    ctx->pc = 0x127698u;
    // 0x127698: 0xc04a128  jal         func_1284A0
    ctx->pc = 0x127698u;
    SET_GPR_U32(ctx, 31, 0x1276A0u);
    ctx->pc = 0x1284A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A0u, 0x127698u, 0x1276A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276A0u;
}
