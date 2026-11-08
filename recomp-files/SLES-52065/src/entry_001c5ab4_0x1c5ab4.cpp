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

// Function: entry_001c5ab4
// Address: 0x1c5ab4 - 0x1c5ae8
void entry_001c5ab4_0x1c5ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5ab4_0x1c5ab4");
#endif

    ctx->pc = 0x1c5ab4u;

    // 0x1c5ab4: 0x8c30c6c0  lw          $s0, -0x3940($at)
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952640)));
    // 0x1c5ab8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5AB8u;
    {
        const bool branch_taken_0x1c5ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AB8u;
        // 0x1c5abc: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ab8) {
            ctx->pc = 0x1C5B0Cu;
            return;
        }
    }
    ctx->pc = 0x1C5AC0u;
    // 0x1c5ac0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5ac4: 0x3444544f  ori         $a0, $v0, 0x544F
    ctx->pc = 0x1c5ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1c5ac8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5acc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1c5accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1c5ad0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5AD4u;
    {
        const bool branch_taken_0x1c5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AD4u;
        // 0x1c5ad8: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ad4) {
            ctx->pc = 0x1C5AE8u;
            return;
        }
    }
    ctx->pc = 0x1C5ADCu;
    // 0x1c5adc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1c5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c5ae0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1c5ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1c5ae4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1c5ae8u;
}
