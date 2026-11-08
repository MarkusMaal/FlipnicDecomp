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

// Function: entry_001b1184
// Address: 0x1b1184 - 0x1b11b8
void entry_001b1184_0x1b1184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1184_0x1b1184");
#endif

    ctx->pc = 0x1b1184u;

    // 0x1b1184: 0x0  nop
    ctx->pc = 0x1b1184u;
    // NOP
    // 0x1b1188: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b118c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B118Cu;
    {
        const bool branch_taken_0x1b118c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B118Cu;
        // 0x1b1190: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b118c) {
            ctx->pc = 0x1B11DCu;
            return;
        }
    }
    ctx->pc = 0x1B1194u;
    // 0x1b1194: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b1194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b1198: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b119c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b11a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b11a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B11A4u;
    {
        const bool branch_taken_0x1b11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11A4u;
        // 0x1b11a8: 0x8e83011c  lw          $v1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11a4) {
            ctx->pc = 0x1B11B8u;
            return;
        }
    }
    ctx->pc = 0x1B11ACu;
    // 0x1b11ac: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b11b0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b11b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b11b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b11b8u;
}
