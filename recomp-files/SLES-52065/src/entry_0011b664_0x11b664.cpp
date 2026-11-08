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

// Function: entry_0011b664
// Address: 0x11b664 - 0x11b67c
void entry_0011b664_0x11b664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b664_0x11b664");
#endif

    ctx->pc = 0x11b664u;

    // 0x11b664: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B664u;
    {
        const bool branch_taken_0x11b664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B664u;
        // 0x11b668: 0x2921007b  slti        $at, $t1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b664) {
            ctx->pc = 0x11B67Cu;
            return;
        }
    }
    ctx->pc = 0x11B66Cu;
    // 0x11b66c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B66Cu;
    {
        const bool branch_taken_0x11b66c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B66Cu;
        // 0x11b670: 0x2523ffe0  addiu       $v1, $t1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b66c) {
            ctx->pc = 0x11B67Cu;
            return;
        }
    }
    ctx->pc = 0x11B674u;
    // 0x11b674: 0x34e3c  dsll32      $t1, $v1, 24
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b678: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x11b678u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    ctx->pc = 0x11b67cu;
}
