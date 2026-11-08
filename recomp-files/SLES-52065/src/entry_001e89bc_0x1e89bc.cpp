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

// Function: entry_001e89bc
// Address: 0x1e89bc - 0x1e89c8
void entry_001e89bc_0x1e89bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e89bc_0x1e89bc");
#endif

    ctx->pc = 0x1e89bcu;

    // 0x1e89bc: 0x0  nop
    ctx->pc = 0x1e89bcu;
    // NOP
    // 0x1e89c0: 0x1d00ffeb  bgtz        $t0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E89C0u;
    {
        const bool branch_taken_0x1e89c0 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1E89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E89C0u;
        // 0x1e89c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e89c0) {
            ctx->pc = 0x1E8970u;
            return;
        }
    }
    ctx->pc = 0x1E89C8u;
}
