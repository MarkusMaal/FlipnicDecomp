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

// Function: entry_001897e0
// Address: 0x1897e0 - 0x189818
void entry_001897e0_0x1897e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001897e0_0x1897e0");
#endif

    ctx->pc = 0x1897e0u;

    // 0x1897e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1897E0u;
    {
        const bool branch_taken_0x1897e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E0u;
        // 0x1897e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897e0) {
            ctx->pc = 0x189850u;
            return;
        }
    }
    ctx->pc = 0x1897E8u;
    // 0x1897e8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1897E8u;
    {
        const bool branch_taken_0x1897e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897E8u;
        // 0x1897ec: 0x8e86005c  lw          $a2, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897e8) {
            ctx->pc = 0x18983Cu;
            return;
        }
    }
    ctx->pc = 0x1897F0u;
    // 0x1897f0: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1897f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1897f4: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1897f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1897f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1897fc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1897fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189800: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189804: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189804u;
    {
        const bool branch_taken_0x189804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189804u;
        // 0x189808: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189804) {
            ctx->pc = 0x189818u;
            return;
        }
    }
    ctx->pc = 0x18980Cu;
    // 0x18980c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189810: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189814: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189818u;
}
