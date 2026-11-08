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

// Function: entry_0013d71c
// Address: 0x13d71c - 0x13d728
void entry_0013d71c_0x13d71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d71c_0x13d71c");
#endif

    ctx->pc = 0x13d71cu;

    // 0x13d71c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13D71Cu;
    {
        const bool branch_taken_0x13d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D71Cu;
        // 0x13d720: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d71c) {
            ctx->pc = 0x13D77Cu;
            return;
        }
    }
    ctx->pc = 0x13D724u;
    // 0x13d724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x13d728u;
}
