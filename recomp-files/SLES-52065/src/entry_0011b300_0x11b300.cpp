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

// Function: entry_0011b300
// Address: 0x11b300 - 0x11b310
void entry_0011b300_0x11b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b300_0x11b300");
#endif

    ctx->pc = 0x11b300u;

    // 0x11b300: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B300u;
    {
        const bool branch_taken_0x11b300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B300u;
        // 0x11b304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b300) {
            ctx->pc = 0x11B310u;
            return;
        }
    }
    ctx->pc = 0x11B308u;
    // 0x11b308: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B308u;
    {
        const bool branch_taken_0x11b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B308u;
        // 0x11b30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b308) {
            ctx->pc = 0x11B330u;
            return;
        }
    }
    ctx->pc = 0x11B310u;
}
