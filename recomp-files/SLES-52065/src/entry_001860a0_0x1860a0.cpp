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

// Function: entry_001860a0
// Address: 0x1860a0 - 0x1860d8
void entry_001860a0_0x1860a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001860a0_0x1860a0");
#endif

    switch (ctx->pc) {
        case 0x1860b8u: goto label_1860b8;
        case 0x1860c8u: goto label_1860c8;
        default: break;
    }

    ctx->pc = 0x1860a0u;

    // 0x1860a0: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0x278486d0  addiu       $a0, $gp, -0x7930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186178u;
            return;
        }
    }
    ctx->pc = 0x1860A8u;
    // 0x1860a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1860a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1860acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1860b0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1860B0u;
    SET_GPR_U32(ctx, 31, 0x1860B8u);
    ctx->pc = 0x1860B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860B0u;
    // 0x1860b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1860B0u, 0x1860B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860B8u;
label_1860b8:
    // 0x1860b8: 0x8f8286d0  lw          $v0, -0x7930($gp)
    ctx->pc = 0x1860b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x1860bc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1860bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1860c0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1860C0u;
    SET_GPR_U32(ctx, 31, 0x1860C8u);
    ctx->pc = 0x1860C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1860C0u;
    // 0x1860c4: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1860C0u, 0x1860C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1860C8u;
label_1860c8:
    // 0x1860c8: 0xaf8286d4  sw          $v0, -0x792C($gp)
    ctx->pc = 0x1860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936276), GPR_U32(ctx, 2));
    // 0x1860cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186168u;
            return;
        }
    }
    ctx->pc = 0x1860D8u;
}
