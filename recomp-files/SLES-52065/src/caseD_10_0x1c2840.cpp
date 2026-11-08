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

// Function: caseD_10
// Address: 0x1c2840 - 0x1c285c
void caseD_10_0x1c2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x1c2840");
#endif

    switch (ctx->pc) {
        case 0x1c2850u: goto label_1c2850;
        default: break;
    }

    ctx->pc = 0x1c2840u;

    // 0x1c2840: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2844: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2848: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2848u;
    SET_GPR_U32(ctx, 31, 0x1C2850u);
    ctx->pc = 0x1C284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2848u;
    // 0x1c284c: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2848u, 0x1C2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2850u;
label_1c2850:
    // 0x1c2850: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c2854: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x1C2854u;
    {
        const bool branch_taken_0x1c2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2854u;
        // 0x1c2858: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2854) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C285Cu;
}
