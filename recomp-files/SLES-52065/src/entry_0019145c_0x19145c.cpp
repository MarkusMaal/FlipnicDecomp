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

// Function: entry_0019145c
// Address: 0x19145c - 0x191470
void entry_0019145c_0x19145c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019145c_0x19145c");
#endif

    ctx->pc = 0x19145cu;

    // 0x19145c: 0x0  nop
    ctx->pc = 0x19145cu;
    // NOP
    // 0x191460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191460u;
    {
        const bool branch_taken_0x191460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191460) {
            ctx->pc = 0x191470u;
            return;
        }
    }
    ctx->pc = 0x191468u;
    // 0x191468: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x191468u;
    {
        const bool branch_taken_0x191468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191468) {
            ctx->pc = 0x191484u;
            return;
        }
    }
    ctx->pc = 0x191470u;
}
