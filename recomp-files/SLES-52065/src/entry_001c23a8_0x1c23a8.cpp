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

// Function: entry_001c23a8
// Address: 0x1c23a8 - 0x1c23e8
void entry_001c23a8_0x1c23a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c23a8_0x1c23a8");
#endif

    switch (ctx->pc) {
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23e0u: goto label_1c23e0;
        default: break;
    }

    ctx->pc = 0x1c23a8u;

    // 0x1c23a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c23a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23B0u;
    SET_GPR_U32(ctx, 31, 0x1C23B8u);
    ctx->pc = 0x1C23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23B0u;
    // 0x1c23b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23B0u, 0x1C23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B8u;
label_1c23b8:
    // 0x1c23b8: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23C4u;
    SET_GPR_U32(ctx, 31, 0x1C23CCu);
    ctx->pc = 0x1C23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23C4u;
    // 0x1c23c8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23C4u, 0x1C23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23CCu;
label_1c23cc:
    // 0x1c23cc: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23D8u;
    SET_GPR_U32(ctx, 31, 0x1C23E0u);
    ctx->pc = 0x1C23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23D8u;
    // 0x1c23dc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23D8u, 0x1C23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23E0u;
label_1c23e0:
    // 0x1c23e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C23E0u;
    {
        const bool branch_taken_0x1c23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23E0u;
        // 0x1c23e4: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23e0) {
            ctx->pc = 0x1C2484u;
            return;
        }
    }
    ctx->pc = 0x1C23E8u;
}
