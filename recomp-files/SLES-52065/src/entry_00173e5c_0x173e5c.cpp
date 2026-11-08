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

// Function: entry_00173e5c
// Address: 0x173e5c - 0x173e6c
void entry_00173e5c_0x173e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173e5c_0x173e5c");
#endif

    ctx->pc = 0x173e5cu;

    // 0x173e5c: 0x0  nop
    ctx->pc = 0x173e5cu;
    // NOP
    // 0x173e60: 0x2ac20010  slti        $v0, $s6, 0x10
    ctx->pc = 0x173e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x173e64: 0x1440ff69  bnez        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x173E64u;
    {
        const bool branch_taken_0x173e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173E64u;
        // 0x173e68: 0x3c02c180  lui         $v0, 0xC180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e64) {
            ctx->pc = 0x173C0Cu;
            return;
        }
    }
    ctx->pc = 0x173E6Cu;
}
