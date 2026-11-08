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

// Function: entry_0017640c
// Address: 0x17640c - 0x176414
void entry_0017640c_0x17640c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017640c_0x17640c");
#endif

    ctx->pc = 0x17640cu;

    // 0x17640c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17640Cu;
    {
        const bool branch_taken_0x17640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17640Cu;
        // 0x176410: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17640c) {
            ctx->pc = 0x176438u;
            return;
        }
    }
    ctx->pc = 0x176414u;
}
