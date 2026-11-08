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

// Function: entry_001231b4
// Address: 0x1231b4 - 0x1231c8
void entry_001231b4_0x1231b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231b4_0x1231b4");
#endif

    ctx->pc = 0x1231b4u;

    // 0x1231b4: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1231b8: 0x14e40009  bne         $a3, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1231B8u;
    {
        const bool branch_taken_0x1231b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1231b8) {
            ctx->pc = 0x1231E0u;
            return;
        }
    }
    ctx->pc = 0x1231C0u;
    // 0x1231c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1231C0u;
    {
        const bool branch_taken_0x1231c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231C0u;
        // 0x1231c4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231c0) {
            ctx->pc = 0x1231E0u;
            return;
        }
    }
    ctx->pc = 0x1231C8u;
}
