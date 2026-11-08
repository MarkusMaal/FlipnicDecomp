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

// Function: entry_0019c880
// Address: 0x19c880 - 0x19c89c
void entry_0019c880_0x19c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c880_0x19c880");
#endif

    ctx->pc = 0x19c880u;

    // 0x19c880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c884: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19c888: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c88c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C88Cu;
    {
        const bool branch_taken_0x19c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19c88c) {
            ctx->pc = 0x19C89Cu;
            return;
        }
    }
    ctx->pc = 0x19C894u;
    // 0x19c894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C894u;
    {
        const bool branch_taken_0x19c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c894) {
            ctx->pc = 0x19C8A0u;
            return;
        }
    }
    ctx->pc = 0x19C89Cu;
}
