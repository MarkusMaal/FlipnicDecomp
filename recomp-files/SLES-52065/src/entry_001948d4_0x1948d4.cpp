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

// Function: entry_001948d4
// Address: 0x1948d4 - 0x1948e8
void entry_001948d4_0x1948d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001948d4_0x1948d4");
#endif

    ctx->pc = 0x1948d4u;

    // 0x1948d4: 0x0  nop
    ctx->pc = 0x1948d4u;
    // NOP
    // 0x1948d8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1948D8u;
    {
        const bool branch_taken_0x1948d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1948d8) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x1948E0u;
    // 0x1948e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1948E0u;
    {
        const bool branch_taken_0x1948e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E0u;
        // 0x1948e4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e0) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x1948E8u;
}
