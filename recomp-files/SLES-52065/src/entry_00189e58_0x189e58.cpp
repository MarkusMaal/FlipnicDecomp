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

// Function: entry_00189e58
// Address: 0x189e58 - 0x189e8c
void entry_00189e58_0x189e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e58_0x189e58");
#endif

    ctx->pc = 0x189e58u;

    // 0x189e58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x189E58u;
    {
        const bool branch_taken_0x189e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e58) {
            ctx->pc = 0x189EC0u;
            return;
        }
    }
    ctx->pc = 0x189E60u;
    // 0x189e60: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189E60u;
    {
        const bool branch_taken_0x189e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E60u;
        // 0x189e64: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e60) {
            ctx->pc = 0x189EB0u;
            return;
        }
    }
    ctx->pc = 0x189E68u;
    // 0x189e68: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189e70: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189e74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189e78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189E78u;
    {
        const bool branch_taken_0x189e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E78u;
        // 0x189e7c: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e78) {
            ctx->pc = 0x189E8Cu;
            return;
        }
    }
    ctx->pc = 0x189E80u;
    // 0x189e80: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189e84: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189e88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189e8cu;
}
