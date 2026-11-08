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

// Function: entry_00174354
// Address: 0x174354 - 0x17436c
void entry_00174354_0x174354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174354_0x174354");
#endif

    ctx->pc = 0x174354u;

    // 0x174354: 0x0  nop
    ctx->pc = 0x174354u;
    // NOP
    // 0x174358: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x174358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17435c: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x17435Cu;
    {
        const bool branch_taken_0x17435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17435Cu;
        // 0x174360: 0x3c02c0f0  lui         $v0, 0xC0F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17435c) {
            ctx->pc = 0x174224u;
            return;
        }
    }
    ctx->pc = 0x174364u;
    // 0x174364: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x174364u;
    {
        const bool branch_taken_0x174364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174364) {
            ctx->pc = 0x1746A4u;
            return;
        }
    }
    ctx->pc = 0x17436Cu;
}
