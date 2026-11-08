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

// Function: entry_001ebd9c
// Address: 0x1ebd9c - 0x1ebda8
void entry_001ebd9c_0x1ebd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebd9c_0x1ebd9c");
#endif

    ctx->pc = 0x1ebd9cu;

    // 0x1ebd9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ebda0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBDA0u;
    {
        const bool branch_taken_0x1ebda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDA0u;
        // 0x1ebda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda0) {
            ctx->pc = 0x1EBDB4u;
            return;
        }
    }
    ctx->pc = 0x1EBDA8u;
}
