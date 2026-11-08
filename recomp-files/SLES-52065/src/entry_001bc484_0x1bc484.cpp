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

// Function: entry_001bc484
// Address: 0x1bc484 - 0x1bc4b0
void entry_001bc484_0x1bc484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc484_0x1bc484");
#endif

    switch (ctx->pc) {
        case 0x1bc490u: goto label_1bc490;
        case 0x1bc4a8u: goto label_1bc4a8;
        default: break;
    }

    ctx->pc = 0x1bc484u;

    // 0x1bc484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc488: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC488u;
    SET_GPR_U32(ctx, 31, 0x1BC490u);
    ctx->pc = 0x1BC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC488u;
    // 0x1bc48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC488u, 0x1BC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC490u;
label_1bc490:
    // 0x1bc490: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc498: 0x24a53020  addiu       $a1, $a1, 0x3020
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12320));
    // 0x1bc49c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bc4a0: 0xc06e73c  jal         func_1B9CF0
    ctx->pc = 0x1BC4A0u;
    SET_GPR_U32(ctx, 31, 0x1BC4A8u);
    ctx->pc = 0x1BC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4A0u;
    // 0x1bc4a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CF0u, 0x1BC4A0u, 0x1BC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4A8u;
label_1bc4a8:
    // 0x1bc4a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BC4A8u;
    {
        const bool branch_taken_0x1bc4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4a8) {
            ctx->pc = 0x1BC4E8u;
            return;
        }
    }
    ctx->pc = 0x1BC4B0u;
}
