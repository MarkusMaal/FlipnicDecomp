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

// Function: entry_001b0ca4
// Address: 0x1b0ca4 - 0x1b0cdc
void entry_001b0ca4_0x1b0ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0ca4_0x1b0ca4");
#endif

    switch (ctx->pc) {
        case 0x1b0cacu: goto label_1b0cac;
        default: break;
    }

    ctx->pc = 0x1b0ca4u;

    // 0x1b0ca4: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B0CA4u;
    SET_GPR_U32(ctx, 31, 0x1B0CACu);
    ctx->pc = 0x1B0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CA4u;
    // 0x1b0ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0CA4u, 0x1B0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CACu;
label_1b0cac:
    // 0x1b0cac: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0CACu;
    {
        const bool branch_taken_0x1b0cac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cac) {
            ctx->pc = 0x1B0D00u;
            return;
        }
    }
    ctx->pc = 0x1B0CB4u;
    // 0x1b0cb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0cb8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0cbc: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0cc0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0cc4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0CC8u;
    {
        const bool branch_taken_0x1b0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cc8) {
            ctx->pc = 0x1B0CDCu;
            return;
        }
    }
    ctx->pc = 0x1B0CD0u;
    // 0x1b0cd0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0cd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0cd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0cdcu;
}
