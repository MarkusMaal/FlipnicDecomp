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

// Function: entry_001b02c4
// Address: 0x1b02c4 - 0x1b0304
void entry_001b02c4_0x1b02c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02c4_0x1b02c4");
#endif

    switch (ctx->pc) {
        case 0x1b02d4u: goto label_1b02d4;
        default: break;
    }

    ctx->pc = 0x1b02c4u;

    // 0x1b02c4: 0x0  nop
    ctx->pc = 0x1b02c4u;
    // NOP
    // 0x1b02c8: 0x8fb30148  lw          $s3, 0x148($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b02cc: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B02CCu;
    SET_GPR_U32(ctx, 31, 0x1B02D4u);
    ctx->pc = 0x1B02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02CCu;
    // 0x1b02d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B02CCu, 0x1B02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B02D4u;
label_1b02d4:
    // 0x1b02d4: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B02D4u;
    {
        const bool branch_taken_0x1b02d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02d4) {
            ctx->pc = 0x1B0328u;
            return;
        }
    }
    ctx->pc = 0x1B02DCu;
    // 0x1b02dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b02e0: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b02e4: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b02e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b02e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b02ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b02ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b02f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B02F0u;
    {
        const bool branch_taken_0x1b02f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b02f0) {
            ctx->pc = 0x1B0304u;
            return;
        }
    }
    ctx->pc = 0x1B02F8u;
    // 0x1b02f8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b02fc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b02fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0300: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0304u;
}
