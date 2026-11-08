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

// Function: entry_0010409c
// Address: 0x10409c - 0x1040a8
void entry_0010409c_0x10409c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010409c_0x10409c");
#endif

    ctx->pc = 0x10409cu;

    // 0x10409c: 0x1000045e  b           . + 4 + (0x45E << 2)
    ctx->pc = 0x10409Cu;
    {
        const bool branch_taken_0x10409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10409Cu;
        // 0x1040a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10409c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1040A4u;
    // 0x1040a4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1040a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x1040a8u;
}
