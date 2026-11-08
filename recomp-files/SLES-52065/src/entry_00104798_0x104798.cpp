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

// Function: entry_00104798
// Address: 0x104798 - 0x1047a4
void entry_00104798_0x104798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104798_0x104798");
#endif

    ctx->pc = 0x104798u;

    // 0x104798: 0x1000029f  b           . + 4 + (0x29F << 2)
    ctx->pc = 0x104798u;
    {
        const bool branch_taken_0x104798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104798u;
        // 0x10479c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104798) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1047A0u;
    // 0x1047a0: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1047a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x1047a4u;
}
