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

// Function: entry_001637b8
// Address: 0x1637b8 - 0x1637d4
void entry_001637b8_0x1637b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001637b8_0x1637b8");
#endif

    ctx->pc = 0x1637b8u;

    // 0x1637b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1637bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1637bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1637c0: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1637c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1637c4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637C4u;
    {
        const bool branch_taken_0x1637c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1637c4) {
            ctx->pc = 0x1637D4u;
            return;
        }
    }
    ctx->pc = 0x1637CCu;
    // 0x1637cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1637CCu;
    {
        const bool branch_taken_0x1637cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1637cc) {
            ctx->pc = 0x1637D8u;
            return;
        }
    }
    ctx->pc = 0x1637D4u;
}
