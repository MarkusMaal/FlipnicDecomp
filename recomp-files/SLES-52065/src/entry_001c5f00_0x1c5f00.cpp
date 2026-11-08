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

// Function: entry_001c5f00
// Address: 0x1c5f00 - 0x1c5f1c
void entry_001c5f00_0x1c5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f00_0x1c5f00");
#endif

    ctx->pc = 0x1c5f00u;

    // 0x1c5f00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c5f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5f08: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c5f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c5f0c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F0Cu;
    {
        const bool branch_taken_0x1c5f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5f0c) {
            ctx->pc = 0x1C5F1Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F14u;
    // 0x1c5f14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5F14u;
    {
        const bool branch_taken_0x1c5f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f14) {
            ctx->pc = 0x1C5F20u;
            return;
        }
    }
    ctx->pc = 0x1C5F1Cu;
}
