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

// Function: entry_0014d738
// Address: 0x14d738 - 0x14d750
void entry_0014d738_0x14d738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d738_0x14d738");
#endif

    ctx->pc = 0x14d738u;

    // 0x14d738: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d73c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d740: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d748: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14D748u;
    {
        const bool branch_taken_0x14d748 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D748u;
        // 0x14d74c: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d748) {
            ctx->pc = 0x14D728u;
            return;
        }
    }
    ctx->pc = 0x14D750u;
}
