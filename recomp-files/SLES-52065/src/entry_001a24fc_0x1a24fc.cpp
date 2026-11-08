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

// Function: entry_001a24fc
// Address: 0x1a24fc - 0x1a2518
void entry_001a24fc_0x1a24fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a24fc_0x1a24fc");
#endif

    ctx->pc = 0x1a24fcu;

label_1a24fc:
    // 0x1a24fc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a2500:
    if (ctx->pc == 0x1A2500u) {
        ctx->pc = 0x1A2504u;
        goto label_1a2504;
    }
    ctx->pc = 0x1A24FCu;
    {
        const bool branch_taken_0x1a24fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24fc) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A2504u;
label_1a2504:
    // 0x1a2504: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a2504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a2508:
    // 0x1a2508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a250c:
    // 0x1a250c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2510:
    // 0x1a2510: 0x320f809  jalr        $t9
label_1a2514:
    if (ctx->pc == 0x1A2514u) {
        ctx->pc = 0x1A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2510u;
        // 0x1a2514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2518u;
        goto label_fallthrough_0x1a2510;
    }
    ctx->pc = 0x1A2510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2518u);
        ctx->pc = 0x1A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2510u;
        // 0x1a2514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2510u, 0x1A2518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a2510:
    ctx->pc = 0x1A2518u;
}
