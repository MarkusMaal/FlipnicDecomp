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

// Function: entry_001fefb4
// Address: 0x1fefb4 - 0x1fefc8
void entry_001fefb4_0x1fefb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fefb4_0x1fefb4");
#endif

    ctx->pc = 0x1fefb4u;

    // 0x1fefb4: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1fefb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1fefb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFB8u;
    {
        const bool branch_taken_0x1fefb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB8u;
        // 0x1fefbc: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefb8) {
            ctx->pc = 0x1FEFC8u;
            return;
        }
    }
    ctx->pc = 0x1FEFC0u;
    // 0x1fefc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEFC0u;
    {
        const bool branch_taken_0x1fefc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFC0u;
        // 0x1fefc4: 0x244b0077  addiu       $t3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefc0) {
            ctx->pc = 0x1FEFE0u;
            return;
        }
    }
    ctx->pc = 0x1FEFC8u;
}
