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

// Function: entry_00160320
// Address: 0x160320 - 0x160330
void entry_00160320_0x160320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160320_0x160320");
#endif

    ctx->pc = 0x160320u;

    // 0x160320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x160324: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x160324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x160328: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x160328u;
    {
        const bool branch_taken_0x160328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160328u;
        // 0x16032c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160328) {
            ctx->pc = 0x1602DCu;
            return;
        }
    }
    ctx->pc = 0x160330u;
}
