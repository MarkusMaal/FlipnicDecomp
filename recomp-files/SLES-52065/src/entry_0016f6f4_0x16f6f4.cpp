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

// Function: entry_0016f6f4
// Address: 0x16f6f4 - 0x16f708
void entry_0016f6f4_0x16f6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f6f4_0x16f6f4");
#endif

    ctx->pc = 0x16f6f4u;

    // 0x16f6f4: 0x0  nop
    ctx->pc = 0x16f6f4u;
    // NOP
    // 0x16f6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6F8u;
    {
        const bool branch_taken_0x16f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f6f8) {
            ctx->pc = 0x16F708u;
            return;
        }
    }
    ctx->pc = 0x16F700u;
    // 0x16f700: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16F700u;
    {
        const bool branch_taken_0x16f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F700u;
        // 0x16f704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f700) {
            ctx->pc = 0x16F76Cu;
            return;
        }
    }
    ctx->pc = 0x16F708u;
}
