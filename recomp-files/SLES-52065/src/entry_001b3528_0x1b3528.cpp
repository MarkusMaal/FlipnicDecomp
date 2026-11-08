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

// Function: entry_001b3528
// Address: 0x1b3528 - 0x1b355c
void entry_001b3528_0x1b3528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3528_0x1b3528");
#endif

    ctx->pc = 0x1b3528u;

    // 0x1b3528: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b352c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B352Cu;
    {
        const bool branch_taken_0x1b352c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B352Cu;
        // 0x1b3530: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b352c) {
            ctx->pc = 0x1B3580u;
            return;
        }
    }
    ctx->pc = 0x1B3534u;
    // 0x1b3534: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1b3538: 0x3444544f  ori         $a0, $v0, 0x544F
    ctx->pc = 0x1b3538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b353c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3540: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1b3540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1b3544: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b3548: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3548u;
    {
        const bool branch_taken_0x1b3548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3548u;
        // 0x1b354c: 0x8f83835c  lw          $v1, -0x7CA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3548) {
            ctx->pc = 0x1B355Cu;
            return;
        }
    }
    ctx->pc = 0x1B3550u;
    // 0x1b3550: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b3554: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1b3558: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b355cu;
}
