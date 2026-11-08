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

// Function: entry_00112218
// Address: 0x112218 - 0x112234
void entry_00112218_0x112218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112218_0x112218");
#endif

    ctx->pc = 0x112218u;

    // 0x112218: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x112218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11221c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11221Cu;
    {
        const bool branch_taken_0x11221c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11221c) {
            ctx->pc = 0x1121D4u;
            return;
        }
    }
    ctx->pc = 0x112224u;
    // 0x112224: 0x14e60043  bne         $a3, $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x112224u;
    {
        const bool branch_taken_0x112224 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112224u;
        // 0x112228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112224) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x11222Cu;
    // 0x11222c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11222Cu;
    {
        const bool branch_taken_0x11222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11222Cu;
        // 0x112230: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11222c) {
            ctx->pc = 0x112264u;
            return;
        }
    }
    ctx->pc = 0x112234u;
}
