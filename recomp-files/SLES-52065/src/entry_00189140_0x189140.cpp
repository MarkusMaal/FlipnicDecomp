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

// Function: entry_00189140
// Address: 0x189140 - 0x189174
void entry_00189140_0x189140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189140_0x189140");
#endif

    ctx->pc = 0x189140u;

    // 0x189140: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x189144: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189144u;
    {
        const bool branch_taken_0x189144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189144u;
        // 0x189148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189144) {
            ctx->pc = 0x18918Cu;
            return;
        }
    }
    ctx->pc = 0x18914Cu;
    // 0x18914c: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x18914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x189150: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189154: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189158: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x18915c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18915cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189160: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189160u;
    {
        const bool branch_taken_0x189160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189160u;
        // 0x189164: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189160) {
            ctx->pc = 0x189174u;
            return;
        }
    }
    ctx->pc = 0x189168u;
    // 0x189168: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18916c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x18916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189170: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189174u;
}
