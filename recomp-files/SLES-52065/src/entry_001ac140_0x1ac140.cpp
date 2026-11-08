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

// Function: entry_001ac140
// Address: 0x1ac140 - 0x1ac150
void entry_001ac140_0x1ac140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac140_0x1ac140");
#endif

    ctx->pc = 0x1ac140u;

    // 0x1ac140: 0x8e2206e8  lw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x1ac144: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC144u;
    {
        const bool branch_taken_0x1ac144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC144u;
        // 0x1ac148: 0x26420024  addiu       $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac144) {
            ctx->pc = 0x1AC150u;
            return;
        }
    }
    ctx->pc = 0x1AC14Cu;
    // 0x1ac14c: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
    ctx->pc = 0x1ac150u;
}
