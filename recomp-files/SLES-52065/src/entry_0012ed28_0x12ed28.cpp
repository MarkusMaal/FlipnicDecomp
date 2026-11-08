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

// Function: entry_0012ed28
// Address: 0x12ed28 - 0x12ed48
void entry_0012ed28_0x12ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed28_0x12ed28");
#endif

    ctx->pc = 0x12ed28u;

    // 0x12ed28: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12ed2c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x12ED2Cu;
    {
        const bool branch_taken_0x12ed2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED2Cu;
        // 0x12ed30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed2c) {
            ctx->pc = 0x12ED7Cu;
            return;
        }
    }
    ctx->pc = 0x12ED34u;
    // 0x12ed34: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ed38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ED38u;
    {
        const bool branch_taken_0x12ed38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED38u;
        // 0x12ed3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed38) {
            ctx->pc = 0x12ED48u;
            return;
        }
    }
    ctx->pc = 0x12ED40u;
    // 0x12ed40: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ED40u;
    SET_GPR_U32(ctx, 31, 0x12ED48u);
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12ED40u, 0x12ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED48u;
}
