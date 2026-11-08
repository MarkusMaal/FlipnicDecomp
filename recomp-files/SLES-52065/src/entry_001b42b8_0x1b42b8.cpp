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

// Function: entry_001b42b8
// Address: 0x1b42b8 - 0x1b42d8
void entry_001b42b8_0x1b42b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b42b8_0x1b42b8");
#endif

    switch (ctx->pc) {
        case 0x1b42c4u: goto label_1b42c4;
        default: break;
    }

    ctx->pc = 0x1b42b8u;

    // 0x1b42b8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b42bc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1B42BCu;
    SET_GPR_U32(ctx, 31, 0x1B42C4u);
    ctx->pc = 0x1B42C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B42BCu;
    // 0x1b42c0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1B42BCu, 0x1B42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42C4u;
label_1b42c4:
    // 0x1b42c4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b42c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b42c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42cc: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1b42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1b42d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42ECu;
            return;
        }
    }
    ctx->pc = 0x1B42D8u;
}
