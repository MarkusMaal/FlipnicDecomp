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

// Function: entry_00203c5c
// Address: 0x203c5c - 0x203c64
void entry_00203c5c_0x203c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c5c_0x203c5c");
#endif

    ctx->pc = 0x203c5cu;

    // 0x203c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x203C5Cu;
    {
        const bool branch_taken_0x203c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C5Cu;
        // 0x203c60: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c5c) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203C64u;
}
