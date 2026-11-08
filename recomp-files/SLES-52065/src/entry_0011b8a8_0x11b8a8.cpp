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

// Function: entry_0011b8a8
// Address: 0x11b8a8 - 0x11b8d0
void entry_0011b8a8_0x11b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8a8_0x11b8a8");
#endif

    switch (ctx->pc) {
        case 0x11b8b8u: goto label_11b8b8;
        default: break;
    }

    ctx->pc = 0x11b8a8u;

    // 0x11b8a8: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B8A8u;
    {
        const bool branch_taken_0x11b8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8A8u;
        // 0x11b8ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8a8) {
            ctx->pc = 0x11B8F0u;
            return;
        }
    }
    ctx->pc = 0x11B8B0u;
    // 0x11b8b0: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B8B0u;
    SET_GPR_U32(ctx, 31, 0x11B8B8u);
    ctx->pc = 0x11B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8B0u;
    // 0x11b8b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B8B0u, 0x11B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8B8u;
label_11b8b8:
    // 0x11b8b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B8B8u;
    {
        const bool branch_taken_0x11b8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b8b8) {
            ctx->pc = 0x11B8E8u;
            return;
        }
    }
    ctx->pc = 0x11B8C0u;
    // 0x11b8c0: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8C0u;
    {
        const bool branch_taken_0x11b8c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C0u;
        // 0x11b8c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c0) {
            ctx->pc = 0x11B8D0u;
            return;
        }
    }
    ctx->pc = 0x11B8C8u;
    // 0x11b8c8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x11B8C8u;
    {
        const bool branch_taken_0x11b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C8u;
        // 0x11b8cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c8) {
            ctx->pc = 0x11BA94u;
            return;
        }
    }
    ctx->pc = 0x11B8D0u;
}
