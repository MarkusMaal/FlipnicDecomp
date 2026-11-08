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

// Function: entry_001e5ac4
// Address: 0x1e5ac4 - 0x1e5ad0
void entry_001e5ac4_0x1e5ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5ac4_0x1e5ac4");
#endif

    ctx->pc = 0x1e5ac4u;

    // 0x1e5ac4: 0x0  nop
    ctx->pc = 0x1e5ac4u;
    // NOP
    // 0x1e5ac8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E5AC8u;
    {
        const bool branch_taken_0x1e5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AC8u;
        // 0x1e5acc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ac8) {
            ctx->pc = 0x1E5B50u;
            return;
        }
    }
    ctx->pc = 0x1E5AD0u;
}
