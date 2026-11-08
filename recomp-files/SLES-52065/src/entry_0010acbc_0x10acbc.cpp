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

// Function: entry_0010acbc
// Address: 0x10acbc - 0x10acc8
void entry_0010acbc_0x10acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010acbc_0x10acbc");
#endif

    ctx->pc = 0x10acbcu;

    // 0x10acbc: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
    // 0x10acc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10ACD4u;
            return;
        }
    }
    ctx->pc = 0x10ACC8u;
}
