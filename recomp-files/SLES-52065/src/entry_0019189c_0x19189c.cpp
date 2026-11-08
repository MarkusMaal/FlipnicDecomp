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

// Function: entry_0019189c
// Address: 0x19189c - 0x1918a8
void entry_0019189c_0x19189c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019189c_0x19189c");
#endif

    ctx->pc = 0x19189cu;

    // 0x19189c: 0x0  nop
    ctx->pc = 0x19189cu;
    // NOP
    // 0x1918a0: 0x100002a0  b           . + 4 + (0x2A0 << 2)
    ctx->pc = 0x1918A0u;
    {
        const bool branch_taken_0x1918a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A0u;
        // 0x1918a4: 0xac6004d0  sw          $zero, 0x4D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918a0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1918A8u;
}
