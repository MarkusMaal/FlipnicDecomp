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

// Function: entry_0017f4a0
// Address: 0x17f4a0 - 0x17f4b8
void entry_0017f4a0_0x17f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4a0_0x17f4a0");
#endif

    switch (ctx->pc) {
        case 0x17f4b4u: goto label_17f4b4;
        default: break;
    }

    ctx->pc = 0x17f4a0u;

    // 0x17f4a0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17f4a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F4A4u;
    {
        const bool branch_taken_0x17f4a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A4u;
        // 0x17f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a4) {
            ctx->pc = 0x17F4B8u;
            return;
        }
    }
    ctx->pc = 0x17F4ACu;
    // 0x17f4ac: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4ACu;
    SET_GPR_U32(ctx, 31, 0x17F4B4u);
    ctx->pc = 0x17F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4ACu;
    // 0x17f4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F4ACu, 0x17F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4B4u;
label_17f4b4:
    // 0x17f4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f4b8u;
}
