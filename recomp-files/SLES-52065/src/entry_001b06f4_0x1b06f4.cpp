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

// Function: entry_001b06f4
// Address: 0x1b06f4 - 0x1b0734
void entry_001b06f4_0x1b06f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b06f4_0x1b06f4");
#endif

    switch (ctx->pc) {
        case 0x1b0704u: goto label_1b0704;
        default: break;
    }

    ctx->pc = 0x1b06f4u;

    // 0x1b06f4: 0x0  nop
    ctx->pc = 0x1b06f4u;
    // NOP
    // 0x1b06f8: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b06fc: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B06FCu;
    SET_GPR_U32(ctx, 31, 0x1B0704u);
    ctx->pc = 0x1B0700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06FCu;
    // 0x1b0700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B06FCu, 0x1B0704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0704u;
label_1b0704:
    // 0x1b0704: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0704u;
    {
        const bool branch_taken_0x1b0704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0704) {
            ctx->pc = 0x1B0758u;
            return;
        }
    }
    ctx->pc = 0x1B070Cu;
    // 0x1b070c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0710: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0714: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0718: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b071c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b071cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0720: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0720u;
    {
        const bool branch_taken_0x1b0720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0720) {
            ctx->pc = 0x1B0734u;
            return;
        }
    }
    ctx->pc = 0x1B0728u;
    // 0x1b0728: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b072c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0730: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0734u;
}
