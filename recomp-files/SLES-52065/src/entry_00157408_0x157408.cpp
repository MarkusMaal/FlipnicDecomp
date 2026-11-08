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

// Function: entry_00157408
// Address: 0x157408 - 0x157410
void entry_00157408_0x157408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157408_0x157408");
#endif

    ctx->pc = 0x157408u;

    // 0x157408: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157408u;
    {
        const bool branch_taken_0x157408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157408u;
        // 0x15740c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157408) {
            ctx->pc = 0x157434u;
            return;
        }
    }
    ctx->pc = 0x157410u;
}
