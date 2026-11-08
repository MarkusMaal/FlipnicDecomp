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

// Function: entry_001b2388
// Address: 0x1b2388 - 0x1b23c0
void entry_001b2388_0x1b2388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2388_0x1b2388");
#endif

    switch (ctx->pc) {
        case 0x1b2390u: goto label_1b2390;
        default: break;
    }

    ctx->pc = 0x1b2388u;

    // 0x1b2388: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2388u;
    SET_GPR_U32(ctx, 31, 0x1B2390u);
    ctx->pc = 0x1B238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2388u;
    // 0x1b238c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2388u, 0x1B2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2390u;
label_1b2390:
    // 0x1b2390: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2390u;
    {
        const bool branch_taken_0x1b2390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2390) {
            ctx->pc = 0x1B23E8u;
            return;
        }
    }
    ctx->pc = 0x1B2398u;
    // 0x1b2398: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b239c: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b23a0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b23a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b23a4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b23a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b23a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b23ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B23ACu;
    {
        const bool branch_taken_0x1b23ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b23ac) {
            ctx->pc = 0x1B23C0u;
            return;
        }
    }
    ctx->pc = 0x1B23B4u;
    // 0x1b23b4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b23b8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b23b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b23bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b23bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b23c0u;
}
