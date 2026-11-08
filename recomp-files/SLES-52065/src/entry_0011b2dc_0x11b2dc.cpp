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

// Function: entry_0011b2dc
// Address: 0x11b2dc - 0x11b2f0
void entry_0011b2dc_0x11b2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2dc_0x11b2dc");
#endif

    ctx->pc = 0x11b2dcu;

    // 0x11b2dc: 0x822203c4  lb          $v0, 0x3C4($s1)
    ctx->pc = 0x11b2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x11b2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B2E0u;
    {
        const bool branch_taken_0x11b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E0u;
        // 0x11b2e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e0) {
            ctx->pc = 0x11B2F0u;
            return;
        }
    }
    ctx->pc = 0x11B2E8u;
    // 0x11b2e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11B2E8u;
    {
        const bool branch_taken_0x11b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E8u;
        // 0x11b2ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e8) {
            ctx->pc = 0x11B330u;
            return;
        }
    }
    ctx->pc = 0x11B2F0u;
}
