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

// Function: entry_0010412c
// Address: 0x10412c - 0x104138
void entry_0010412c_0x10412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010412c_0x10412c");
#endif

    ctx->pc = 0x10412cu;

    // 0x10412c: 0x1000043a  b           . + 4 + (0x43A << 2)
    ctx->pc = 0x10412Cu;
    {
        const bool branch_taken_0x10412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10412Cu;
        // 0x104130: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10412c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104134u;
    // 0x104134: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x104138u;
}
