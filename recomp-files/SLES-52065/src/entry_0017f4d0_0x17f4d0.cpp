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

// Function: entry_0017f4d0
// Address: 0x17f4d0 - 0x17f4f0
void entry_0017f4d0_0x17f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4d0_0x17f4d0");
#endif

    ctx->pc = 0x17f4d0u;

    // 0x17f4d0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17f4d4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F4D4u;
    {
        const bool branch_taken_0x17f4d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D4u;
        // 0x17f4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d4) {
            ctx->pc = 0x17F524u;
            return;
        }
    }
    ctx->pc = 0x17F4DCu;
    // 0x17f4dc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f4e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F4E0u;
    {
        const bool branch_taken_0x17f4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4E0u;
        // 0x17f4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4e0) {
            ctx->pc = 0x17F4F0u;
            return;
        }
    }
    ctx->pc = 0x17F4E8u;
    // 0x17f4e8: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17F4E8u;
    SET_GPR_U32(ctx, 31, 0x17F4F0u);
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17F4E8u, 0x17F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4F0u;
}
