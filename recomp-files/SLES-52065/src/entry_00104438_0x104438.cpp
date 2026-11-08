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

// Function: entry_00104438
// Address: 0x104438 - 0x104444
void entry_00104438_0x104438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104438_0x104438");
#endif

    ctx->pc = 0x104438u;

    // 0x104438: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x104438u;
    {
        const bool branch_taken_0x104438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104438u;
        // 0x10443c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104438) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104440u;
    // 0x104440: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x104440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->pc = 0x104444u;
}
