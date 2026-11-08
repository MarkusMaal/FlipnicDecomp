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

// Function: entry_00209000
// Address: 0x209000 - 0x209018
void entry_00209000_0x209000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209000_0x209000");
#endif

    ctx->pc = 0x209000u;

    // 0x209000: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209000u;
    {
        const bool branch_taken_0x209000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209000u;
        // 0x209004: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209000) {
            ctx->pc = 0x209018u;
            return;
        }
    }
    ctx->pc = 0x209008u;
    // 0x209008: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x209008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x20900c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209010: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209010) {
            ctx->pc = 0x2090B8u;
            return;
        }
    }
    ctx->pc = 0x209018u;
}
