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

// Function: entry_0014e630
// Address: 0x14e630 - 0x14e648
void entry_0014e630_0x14e630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e630_0x14e630");
#endif

    ctx->pc = 0x14e630u;

    // 0x14e630: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e634: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e638: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e63c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e640: 0x1660ffe7  bnez        $s3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14E640u;
    {
        const bool branch_taken_0x14e640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E640u;
        // 0x14e644: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e640) {
            ctx->pc = 0x14E5E0u;
            return;
        }
    }
    ctx->pc = 0x14E648u;
}
