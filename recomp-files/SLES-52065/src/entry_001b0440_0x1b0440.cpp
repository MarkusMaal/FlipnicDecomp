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

// Function: entry_001b0440
// Address: 0x1b0440 - 0x1b0478
void entry_001b0440_0x1b0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0440_0x1b0440");
#endif

    switch (ctx->pc) {
        case 0x1b0448u: goto label_1b0448;
        default: break;
    }

    ctx->pc = 0x1b0440u;

    // 0x1b0440: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B0440u;
    SET_GPR_U32(ctx, 31, 0x1B0448u);
    ctx->pc = 0x1B0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0440u;
    // 0x1b0444: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0440u, 0x1B0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0448u;
label_1b0448:
    // 0x1b0448: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0448u;
    {
        const bool branch_taken_0x1b0448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0448) {
            ctx->pc = 0x1B049Cu;
            return;
        }
    }
    ctx->pc = 0x1B0450u;
    // 0x1b0450: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b0454: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0458: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b045c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0460: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0464u;
    {
        const bool branch_taken_0x1b0464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0464) {
            ctx->pc = 0x1B0478u;
            return;
        }
    }
    ctx->pc = 0x1B046Cu;
    // 0x1b046c: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1b046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1b0470: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0474: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0478u;
}
