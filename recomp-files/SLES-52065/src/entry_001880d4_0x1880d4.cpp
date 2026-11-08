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

// Function: entry_001880d4
// Address: 0x1880d4 - 0x1880e0
void entry_001880d4_0x1880d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001880d4_0x1880d4");
#endif

    ctx->pc = 0x1880d4u;

    // 0x1880d4: 0x0  nop
    ctx->pc = 0x1880d4u;
    // NOP
    // 0x1880d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1880D8u;
    {
        const bool branch_taken_0x1880d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D8u;
        // 0x1880dc: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d8) {
            ctx->pc = 0x188120u;
            return;
        }
    }
    ctx->pc = 0x1880E0u;
}
