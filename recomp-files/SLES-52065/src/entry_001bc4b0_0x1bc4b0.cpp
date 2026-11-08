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

// Function: entry_001bc4b0
// Address: 0x1bc4b0 - 0x1bc4dc
void entry_001bc4b0_0x1bc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc4b0_0x1bc4b0");
#endif

    switch (ctx->pc) {
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4d4u: goto label_1bc4d4;
        default: break;
    }

    ctx->pc = 0x1bc4b0u;

    // 0x1bc4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC4B4u;
    SET_GPR_U32(ctx, 31, 0x1BC4BCu);
    ctx->pc = 0x1BC4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4B4u;
    // 0x1bc4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC4B4u, 0x1BC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4BCu;
label_1bc4bc:
    // 0x1bc4bc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4c4: 0x24a53030  addiu       $a1, $a1, 0x3030
    ctx->pc = 0x1bc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
    // 0x1bc4c8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bc4cc: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1BC4CCu;
    SET_GPR_U32(ctx, 31, 0x1BC4D4u);
    ctx->pc = 0x1BC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4CCu;
    // 0x1bc4d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1BC4CCu, 0x1BC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4D4u;
label_1bc4d4:
    // 0x1bc4d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4D4u;
    {
        const bool branch_taken_0x1bc4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4d4) {
            ctx->pc = 0x1BC4E8u;
            return;
        }
    }
    ctx->pc = 0x1BC4DCu;
}
