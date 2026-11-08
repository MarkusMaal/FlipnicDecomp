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

// Function: entry_001a6f74
// Address: 0x1a6f74 - 0x1a6f88
void entry_001a6f74_0x1a6f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f74_0x1a6f74");
#endif

    ctx->pc = 0x1a6f74u;

    // 0x1a6f74: 0x0  nop
    ctx->pc = 0x1a6f74u;
    // NOP
    // 0x1a6f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a6f7c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1a6f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1a6f80: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1A6F80u;
    {
        const bool branch_taken_0x1a6f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F80u;
        // 0x1a6f84: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f80) {
            ctx->pc = 0x1A6F34u;
            return;
        }
    }
    ctx->pc = 0x1A6F88u;
}
