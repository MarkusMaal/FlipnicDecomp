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

// Function: entry_001fef94
// Address: 0x1fef94 - 0x1fefb4
void entry_001fef94_0x1fef94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fef94_0x1fef94");
#endif

    ctx->pc = 0x1fef94u;

    // 0x1fef94: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1fef94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1fef98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FEF98u;
    {
        const bool branch_taken_0x1fef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF98u;
        // 0x1fef9c: 0x246b005b  addiu       $t3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef98) {
            ctx->pc = 0x1FEFE0u;
            return;
        }
    }
    ctx->pc = 0x1FEFA0u;
    // 0x1fefa0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1fefa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1fefa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFA4u;
    {
        const bool branch_taken_0x1fefa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA4u;
        // 0x1fefa8: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefa4) {
            ctx->pc = 0x1FEFB4u;
            return;
        }
    }
    ctx->pc = 0x1FEFACu;
    // 0x1fefac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FEFACu;
    {
        const bool branch_taken_0x1fefac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFACu;
        // 0x1fefb0: 0x244b006e  addiu       $t3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefac) {
            ctx->pc = 0x1FEFE0u;
            return;
        }
    }
    ctx->pc = 0x1FEFB4u;
}
