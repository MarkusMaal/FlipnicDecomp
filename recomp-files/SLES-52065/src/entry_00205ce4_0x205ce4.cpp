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

// Function: entry_00205ce4
// Address: 0x205ce4 - 0x205cf0
void entry_00205ce4_0x205ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205ce4_0x205ce4");
#endif

    ctx->pc = 0x205ce4u;

    // 0x205ce4: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205ce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205CE8u;
    {
        const bool branch_taken_0x205ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205CE8u;
        // 0x205cec: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ce8) {
            ctx->pc = 0x205D00u;
            return;
        }
    }
    ctx->pc = 0x205CF0u;
}
