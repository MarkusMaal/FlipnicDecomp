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

// Function: entry_00203000
// Address: 0x203000 - 0x203018
void entry_00203000_0x203000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203000_0x203000");
#endif

    switch (ctx->pc) {
        case 0x203014u: goto label_203014;
        default: break;
    }

    ctx->pc = 0x203000u;

    // 0x203000: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x203000u;
    {
        const bool branch_taken_0x203000 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x203004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203000u;
        // 0x203004: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203000) {
            ctx->pc = 0x203018u;
            return;
        }
    }
    ctx->pc = 0x203008u;
    // 0x203008: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20300c: 0xc08009a  jal         func_200268
    ctx->pc = 0x20300Cu;
    SET_GPR_U32(ctx, 31, 0x203014u);
    ctx->pc = 0x203010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20300Cu;
    // 0x203010: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x20300Cu, 0x203014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203014u;
label_203014:
    // 0x203014: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x203014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x203018u;
}
