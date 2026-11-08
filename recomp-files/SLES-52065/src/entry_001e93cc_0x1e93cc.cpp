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

// Function: entry_001e93cc
// Address: 0x1e93cc - 0x1e93e4
void entry_001e93cc_0x1e93cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93cc_0x1e93cc");
#endif

    ctx->pc = 0x1e93ccu;

    // 0x1e93cc: 0x0  nop
    ctx->pc = 0x1e93ccu;
    // NOP
    // 0x1e93d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e93d4: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E93D4u;
    {
        const bool branch_taken_0x1e93d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e93d4) {
            ctx->pc = 0x1E93E4u;
            return;
        }
    }
    ctx->pc = 0x1E93DCu;
    // 0x1e93dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E93DCu;
    {
        const bool branch_taken_0x1e93dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E93DCu;
        // 0x1e93e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e93dc) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E93E4u;
}
