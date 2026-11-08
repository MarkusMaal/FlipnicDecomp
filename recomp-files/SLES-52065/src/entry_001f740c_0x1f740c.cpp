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

// Function: entry_001f740c
// Address: 0x1f740c - 0x1f741c
void entry_001f740c_0x1f740c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f740c_0x1f740c");
#endif

    ctx->pc = 0x1f740cu;

    // 0x1f740c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F740Cu;
    {
        const bool branch_taken_0x1f740c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F740Cu;
        // 0x1f7410: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f740c) {
            ctx->pc = 0x1F7380u;
            return;
        }
    }
    ctx->pc = 0x1F7414u;
    // 0x1f7414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7414u;
    {
        const bool branch_taken_0x1f7414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7414u;
        // 0x1f7418: 0xae20bb44  sw          $zero, -0x44BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294949700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7414) {
            ctx->pc = 0x1F7428u;
            return;
        }
    }
    ctx->pc = 0x1F741Cu;
}
