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

// Function: entry_0015d2f8
// Address: 0x15d2f8 - 0x15d308
void entry_0015d2f8_0x15d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d2f8_0x15d2f8");
#endif

    ctx->pc = 0x15d2f8u;

    // 0x15d2f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15d2fc: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d300: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D300u;
        // 0x15d304: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D2CCu;
            return;
        }
    }
    ctx->pc = 0x15D308u;
}
