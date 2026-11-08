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

// Function: entry_0012c268
// Address: 0x12c268 - 0x12c274
void entry_0012c268_0x12c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c268_0x12c268");
#endif

    ctx->pc = 0x12c268u;

    // 0x12c268: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C268u;
    {
        const bool branch_taken_0x12c268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C268u;
        // 0x12c26c: 0x34a28000  ori         $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c268) {
            ctx->pc = 0x12C274u;
            return;
        }
    }
    ctx->pc = 0x12C270u;
    // 0x12c270: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12c270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x12c274u;
}
