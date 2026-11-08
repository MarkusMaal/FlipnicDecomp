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

// Function: entry_00205d1c
// Address: 0x205d1c - 0x205d24
void entry_00205d1c_0x205d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d1c_0x205d1c");
#endif

    ctx->pc = 0x205d1cu;

    // 0x205d1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x205D1Cu;
    {
        const bool branch_taken_0x205d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D1Cu;
        // 0x205d20: 0x2f7100b  movn        $v0, $s7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d1c) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205D24u;
}
