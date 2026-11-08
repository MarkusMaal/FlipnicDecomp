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

// Function: entry_001a06a8
// Address: 0x1a06a8 - 0x1a06c4
void entry_001a06a8_0x1a06a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06a8_0x1a06a8");
#endif

    ctx->pc = 0x1a06a8u;

    // 0x1a06a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a06ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a06acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a06b0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a06b4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A06C4u;
            return;
        }
    }
    ctx->pc = 0x1A06BCu;
    // 0x1a06bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A06BCu;
    {
        const bool branch_taken_0x1a06bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06bc) {
            ctx->pc = 0x1A06C8u;
            return;
        }
    }
    ctx->pc = 0x1A06C4u;
}
