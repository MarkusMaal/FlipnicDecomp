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

// Function: entry_0012ede0
// Address: 0x12ede0 - 0x12ee00
void entry_0012ede0_0x12ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ede0_0x12ede0");
#endif

    ctx->pc = 0x12ede0u;

    // 0x12ede0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x12ede0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12ede4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EDE4u;
    {
        const bool branch_taken_0x12ede4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE4u;
        // 0x12ede8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ede4) {
            ctx->pc = 0x12EE34u;
            return;
        }
    }
    ctx->pc = 0x12EDECu;
    // 0x12edec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12edf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EDF0u;
    {
        const bool branch_taken_0x12edf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF0u;
        // 0x12edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edf0) {
            ctx->pc = 0x12EE00u;
            return;
        }
    }
    ctx->pc = 0x12EDF8u;
    // 0x12edf8: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDF8u;
    SET_GPR_U32(ctx, 31, 0x12EE00u);
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12EDF8u, 0x12EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE00u;
}
