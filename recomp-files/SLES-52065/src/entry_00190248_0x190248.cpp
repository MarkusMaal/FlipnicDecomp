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

// Function: entry_00190248
// Address: 0x190248 - 0x190258
void entry_00190248_0x190248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190248_0x190248");
#endif

    ctx->pc = 0x190248u;

    // 0x190248: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190248u;
    {
        const bool branch_taken_0x190248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190248u;
        // 0x19024c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190248) {
            ctx->pc = 0x190258u;
            return;
        }
    }
    ctx->pc = 0x190250u;
    // 0x190250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190250u;
    {
        const bool branch_taken_0x190250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190250) {
            ctx->pc = 0x190270u;
            return;
        }
    }
    ctx->pc = 0x190258u;
}
