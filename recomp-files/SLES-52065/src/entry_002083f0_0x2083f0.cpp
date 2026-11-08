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

// Function: entry_002083f0
// Address: 0x2083f0 - 0x208408
void entry_002083f0_0x2083f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002083f0_0x2083f0");
#endif

    ctx->pc = 0x2083f0u;

    // 0x2083f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2083F0u;
    {
        const bool branch_taken_0x2083f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F0u;
        // 0x2083f4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083f0) {
            ctx->pc = 0x208408u;
            return;
        }
    }
    ctx->pc = 0x2083F8u;
    // 0x2083f8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2083f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x2083fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2083fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208400: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x208400u;
    {
        const bool branch_taken_0x208400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208400u;
        // 0x208404: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208400) {
            ctx->pc = 0x2084B0u;
            return;
        }
    }
    ctx->pc = 0x208408u;
}
