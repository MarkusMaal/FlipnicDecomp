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

// Function: entry_001e9370
// Address: 0x1e9370 - 0x1e9390
void entry_001e9370_0x1e9370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9370_0x1e9370");
#endif

    ctx->pc = 0x1e9370u;

    // 0x1e9370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9374: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e9374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9378: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9378u;
    {
        const bool branch_taken_0x1e9378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1E937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9378u;
        // 0x1e937c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9378) {
            ctx->pc = 0x1E9394u;
            return;
        }
    }
    ctx->pc = 0x1E9380u;
    // 0x1e9380: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e9380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9384: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9384u;
    {
        const bool branch_taken_0x1e9384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1e9384) {
            ctx->pc = 0x1E9390u;
            return;
        }
    }
    ctx->pc = 0x1E938Cu;
    // 0x1e938c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1e9390u;
}
