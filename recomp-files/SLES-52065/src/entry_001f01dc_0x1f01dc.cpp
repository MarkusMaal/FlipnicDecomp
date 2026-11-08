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

// Function: entry_001f01dc
// Address: 0x1f01dc - 0x1f01ec
void entry_001f01dc_0x1f01dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f01dc_0x1f01dc");
#endif

    ctx->pc = 0x1f01dcu;

    // 0x1f01dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01DCu;
    {
        const bool branch_taken_0x1f01dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01DCu;
        // 0x1f01e0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01dc) {
            ctx->pc = 0x1F01ECu;
            return;
        }
    }
    ctx->pc = 0x1F01E4u;
    // 0x1f01e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F01E4u;
    {
        const bool branch_taken_0x1f01e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01E4u;
        // 0x1f01e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01e4) {
            ctx->pc = 0x1F01F8u;
            return;
        }
    }
    ctx->pc = 0x1F01ECu;
}
