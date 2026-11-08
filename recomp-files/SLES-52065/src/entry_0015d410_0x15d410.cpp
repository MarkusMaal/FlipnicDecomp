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

// Function: entry_0015d410
// Address: 0x15d410 - 0x15d420
void entry_0015d410_0x15d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d410_0x15d410");
#endif

    ctx->pc = 0x15d410u;

    // 0x15d410: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15d414: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x15d414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d418: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15D418u;
    {
        const bool branch_taken_0x15d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d418) {
            ctx->pc = 0x15D3E4u;
            return;
        }
    }
    ctx->pc = 0x15D420u;
}
