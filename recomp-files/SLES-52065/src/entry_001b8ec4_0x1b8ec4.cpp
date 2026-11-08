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

// Function: entry_001b8ec4
// Address: 0x1b8ec4 - 0x1b8efc
void entry_001b8ec4_0x1b8ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8ec4_0x1b8ec4");
#endif

    ctx->pc = 0x1b8ec4u;

    // 0x1b8ec4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b8ec8: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1b8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6C0u));
    // 0x1b8ecc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8ECCu;
    {
        const bool branch_taken_0x1b8ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ECCu;
        // 0x1b8ed0: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ecc) {
            ctx->pc = 0x1B8F20u;
            return;
        }
    }
    ctx->pc = 0x1B8ED4u;
    // 0x1b8ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1b8ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1b8ed8: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b8ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b8edc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8ee0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b8ee4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b8ee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8EE8u;
    {
        const bool branch_taken_0x1b8ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EE8u;
        // 0x1b8eec: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ee8) {
            ctx->pc = 0x1B8EFCu;
            return;
        }
    }
    ctx->pc = 0x1B8EF0u;
    // 0x1b8ef0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b8ef4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b8ef8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b8efcu;
}
