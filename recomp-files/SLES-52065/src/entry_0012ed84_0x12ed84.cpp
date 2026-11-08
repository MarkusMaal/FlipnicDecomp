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

// Function: entry_0012ed84
// Address: 0x12ed84 - 0x12edb0
void entry_0012ed84_0x12ed84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed84_0x12ed84");
#endif

    ctx->pc = 0x12ed84u;

    // 0x12ed84: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ed88: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x12ED88u;
    {
        const bool branch_taken_0x12ed88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED88u;
        // 0x12ed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed88) {
            ctx->pc = 0x12EE40u;
            return;
        }
    }
    ctx->pc = 0x12ED90u;
    // 0x12ed90: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ed94: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x12ED94u;
    {
        const bool branch_taken_0x12ed94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed94) {
            ctx->pc = 0x12EDE0u;
            return;
        }
    }
    ctx->pc = 0x12ED9Cu;
    // 0x12ed9c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12eda0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EDA0u;
    {
        const bool branch_taken_0x12eda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDA0u;
        // 0x12eda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eda0) {
            ctx->pc = 0x12EDB0u;
            return;
        }
    }
    ctx->pc = 0x12EDA8u;
    // 0x12eda8: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDA8u;
    SET_GPR_U32(ctx, 31, 0x12EDB0u);
    ctx->pc = 0x12ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECB0u, 0x12EDA8u, 0x12EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDB0u;
}
