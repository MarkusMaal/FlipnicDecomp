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

// Function: entry_0016976c
// Address: 0x16976c - 0x169788
void entry_0016976c_0x16976c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016976c_0x16976c");
#endif

    ctx->pc = 0x16976cu;

    // 0x16976c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169774: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169778: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x169778u;
    {
        const bool branch_taken_0x169778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x169778) {
            ctx->pc = 0x169788u;
            return;
        }
    }
    ctx->pc = 0x169780u;
    // 0x169780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169780u;
    {
        const bool branch_taken_0x169780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169780) {
            ctx->pc = 0x16978Cu;
            return;
        }
    }
    ctx->pc = 0x169788u;
}
