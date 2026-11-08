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

// Function: entry_0011dffc
// Address: 0x11dffc - 0x11e020
void entry_0011dffc_0x11dffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dffc_0x11dffc");
#endif

    switch (ctx->pc) {
        case 0x11e010u: goto label_11e010;
        default: break;
    }

    ctx->pc = 0x11dffcu;

    // 0x11dffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e004: 0x24c6e910  addiu       $a2, $a2, -0x16F0
    ctx->pc = 0x11e004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961424));
    // 0x11e008: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E008u;
    SET_GPR_U32(ctx, 31, 0x11E010u);
    ctx->pc = 0x11E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E008u;
    // 0x11e00c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E008u, 0x11E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E010u;
label_11e010:
    // 0x11e010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E010u;
    {
        const bool branch_taken_0x11e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E010u;
        // 0x11e014: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e010) {
            ctx->pc = 0x11E020u;
            return;
        }
    }
    ctx->pc = 0x11E018u;
    // 0x11e018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11E018u;
    {
        const bool branch_taken_0x11e018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E018u;
        // 0x11e01c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e018) {
            ctx->pc = 0x11E040u;
            return;
        }
    }
    ctx->pc = 0x11E020u;
}
