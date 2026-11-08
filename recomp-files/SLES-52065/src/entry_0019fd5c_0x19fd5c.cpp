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

// Function: entry_0019fd5c
// Address: 0x19fd5c - 0x19fd64
void entry_0019fd5c_0x19fd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd5c_0x19fd5c");
#endif

    ctx->pc = 0x19fd5cu;

    // 0x19fd5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19FD5Cu;
    {
        const bool branch_taken_0x19fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD5Cu;
        // 0x19fd60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd5c) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD64u;
}
