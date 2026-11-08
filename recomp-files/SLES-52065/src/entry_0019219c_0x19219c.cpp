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

// Function: entry_0019219c
// Address: 0x19219c - 0x1921b0
void entry_0019219c_0x19219c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019219c_0x19219c");
#endif

    ctx->pc = 0x19219cu;

    // 0x19219c: 0x0  nop
    ctx->pc = 0x19219cu;
    // NOP
    // 0x1921a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1921A0u;
    {
        const bool branch_taken_0x1921a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1921a0) {
            ctx->pc = 0x1921B0u;
            return;
        }
    }
    ctx->pc = 0x1921A8u;
    // 0x1921a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1921A8u;
    {
        const bool branch_taken_0x1921a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A8u;
        // 0x1921ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921a8) {
            ctx->pc = 0x1921B4u;
            return;
        }
    }
    ctx->pc = 0x1921B0u;
}
