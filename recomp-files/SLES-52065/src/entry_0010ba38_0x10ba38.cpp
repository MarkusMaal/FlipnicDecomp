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

// Function: entry_0010ba38
// Address: 0x10ba38 - 0x10ba44
void entry_0010ba38_0x10ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba38_0x10ba38");
#endif

    ctx->pc = 0x10ba38u;

    // 0x10ba38: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ba3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10BA3Cu;
    {
        const bool branch_taken_0x10ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA3Cu;
        // 0x10ba40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba3c) {
            ctx->pc = 0x10BA74u;
            return;
        }
    }
    ctx->pc = 0x10BA44u;
}
