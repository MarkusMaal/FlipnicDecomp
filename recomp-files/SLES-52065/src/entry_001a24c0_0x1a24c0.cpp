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

// Function: entry_001a24c0
// Address: 0x1a24c0 - 0x1a24fc
void entry_001a24c0_0x1a24c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a24c0_0x1a24c0");
#endif

    switch (ctx->pc) {
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24f4u: goto label_1a24f4;
        default: break;
    }

    ctx->pc = 0x1a24c0u;

    // 0x1a24c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a24c4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a24c8: 0x8c620774  lw          $v0, 0x774($v1)
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1908)));
    // 0x1a24cc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1A24CCu;
    {
        const bool branch_taken_0x1a24cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24cc) {
            ctx->pc = 0x1A2468u;
            return;
        }
    }
    ctx->pc = 0x1A24D4u;
    // 0x1a24d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a24d8: 0xac620774  sw          $v0, 0x774($v1)
    ctx->pc = 0x1a24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 2));
    // 0x1a24dc: 0x8c650674  lw          $a1, 0x674($v1)
    ctx->pc = 0x1a24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
    // 0x1a24e0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A24E0u;
    SET_GPR_U32(ctx, 31, 0x1A24E8u);
    ctx->pc = 0x1A24E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E0u;
    // 0x1a24e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A24E0u, 0x1A24E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24E8u;
label_1a24e8:
    // 0x1a24e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a24e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24ec: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A24ECu;
    SET_GPR_U32(ctx, 31, 0x1A24F4u);
    ctx->pc = 0x1A24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24ECu;
    // 0x1a24f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A24ECu, 0x1A24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24F4u;
label_1a24f4:
    // 0x1a24f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A24F4u;
    {
        const bool branch_taken_0x1a24f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24f4) {
            ctx->pc = 0x1A2518u;
            return;
        }
    }
    ctx->pc = 0x1A24FCu;
}
