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

// Function: entry_001c81b8
// Address: 0x1c81b8 - 0x1c81ec
void entry_001c81b8_0x1c81b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c81b8_0x1c81b8");
#endif

    switch (ctx->pc) {
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81e4u: goto label_1c81e4;
        default: break;
    }

    ctx->pc = 0x1c81b8u;

    // 0x1c81b8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c81bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c81c0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C81C0u;
    {
        const bool branch_taken_0x1c81c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C0u;
        // 0x1c81c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81c0) {
            ctx->pc = 0x1C81ECu;
            return;
        }
    }
    ctx->pc = 0x1C81C8u;
    // 0x1c81c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c81ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81d0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C81D0u;
    SET_GPR_U32(ctx, 31, 0x1C81D8u);
    ctx->pc = 0x1C81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81D0u;
    // 0x1c81d4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C81D0u, 0x1C81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81D8u;
label_1c81d8:
    // 0x1c81d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81dc: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C81DCu;
    SET_GPR_U32(ctx, 31, 0x1C81E4u);
    ctx->pc = 0x1C81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81DCu;
    // 0x1c81e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C81DCu, 0x1C81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E4u;
label_1c81e4:
    // 0x1c81e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81E4u;
    {
        const bool branch_taken_0x1c81e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E4u;
        // 0x1c81e8: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81e4) {
            ctx->pc = 0x1C8208u;
            return;
        }
    }
    ctx->pc = 0x1C81ECu;
}
