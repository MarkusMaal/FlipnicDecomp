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

// Function: entry_001cd770
// Address: 0x1cd770 - 0x1cd788
void entry_001cd770_0x1cd770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd770_0x1cd770");
#endif

    ctx->pc = 0x1cd770u;

    // 0x1cd770: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cd774: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CD774u;
    {
        const bool branch_taken_0x1cd774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD774u;
        // 0x1cd778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd774) {
            ctx->pc = 0x1CD748u;
            return;
        }
    }
    ctx->pc = 0x1CD77Cu;
    // 0x1cd77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd780: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CD780u;
    {
        const bool branch_taken_0x1cd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD780u;
        // 0x1cd784: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd780) {
            ctx->pc = 0x1CD7C8u;
            return;
        }
    }
    ctx->pc = 0x1CD788u;
}
