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

// Function: entry_001ca194
// Address: 0x1ca194 - 0x1ca1c0
void entry_001ca194_0x1ca194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca194_0x1ca194");
#endif

    switch (ctx->pc) {
        case 0x1ca1a0u: goto label_1ca1a0;
        case 0x1ca1b8u: goto label_1ca1b8;
        default: break;
    }

    ctx->pc = 0x1ca194u;

    // 0x1ca194: 0x0  nop
    ctx->pc = 0x1ca194u;
    // NOP
    // 0x1ca198: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CA198u;
    SET_GPR_U32(ctx, 31, 0x1CA1A0u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CA198u, 0x1CA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1A0u;
label_1ca1a0:
    // 0x1ca1a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA1A0u;
    {
        const bool branch_taken_0x1ca1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1a0) {
            ctx->pc = 0x1CA1C0u;
            return;
        }
    }
    ctx->pc = 0x1CA1A8u;
    // 0x1ca1a8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ca1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ca1ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ca1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1b0: 0xc072ef4  jal         func_1CBBD0
    ctx->pc = 0x1CA1B0u;
    SET_GPR_U32(ctx, 31, 0x1CA1B8u);
    ctx->pc = 0x1CA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1B0u;
    // 0x1ca1b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBBD0u, 0x1CA1B0u, 0x1CA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B8u;
label_1ca1b8:
    // 0x1ca1b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA1B8u;
    {
        const bool branch_taken_0x1ca1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1B8u;
        // 0x1ca1bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1b8) {
            ctx->pc = 0x1CA1C8u;
            return;
        }
    }
    ctx->pc = 0x1CA1C0u;
}
