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

// Function: entry_0019f56c
// Address: 0x19f56c - 0x19f590
void entry_0019f56c_0x19f56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f56c_0x19f56c");
#endif

    ctx->pc = 0x19f56cu;

    // 0x19f56c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f570: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f570u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f574: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19f578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F578u;
    {
        const bool branch_taken_0x19f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F578u;
        // 0x19f57c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f578) {
            ctx->pc = 0x19F590u;
            return;
        }
    }
    ctx->pc = 0x19F580u;
    // 0x19f580: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x19f584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F584u;
    {
        const bool branch_taken_0x19f584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f584) {
            ctx->pc = 0x19F590u;
            return;
        }
    }
    ctx->pc = 0x19F58Cu;
    // 0x19f58c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f58cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f590u;
}
