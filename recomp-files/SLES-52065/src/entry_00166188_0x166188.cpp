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

// Function: entry_00166188
// Address: 0x166188 - 0x1661a4
void entry_00166188_0x166188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166188_0x166188");
#endif

    ctx->pc = 0x166188u;

    // 0x166188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x166188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16618c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166190: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x166194: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x166194) {
            ctx->pc = 0x1661A4u;
            return;
        }
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16619Cu;
    {
        const bool branch_taken_0x16619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16619c) {
            ctx->pc = 0x1661A8u;
            return;
        }
    }
    ctx->pc = 0x1661A4u;
}
