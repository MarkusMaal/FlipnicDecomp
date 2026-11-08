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

// Function: entry_001a07dc
// Address: 0x1a07dc - 0x1a07f8
void entry_001a07dc_0x1a07dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07dc_0x1a07dc");
#endif

    ctx->pc = 0x1a07dcu;

    // 0x1a07dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a07e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a07e4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a07e8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A07E8u;
    {
        const bool branch_taken_0x1a07e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a07e8) {
            ctx->pc = 0x1A07F8u;
            return;
        }
    }
    ctx->pc = 0x1A07F0u;
    // 0x1a07f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A07F0u;
    {
        const bool branch_taken_0x1a07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07f0) {
            ctx->pc = 0x1A07FCu;
            return;
        }
    }
    ctx->pc = 0x1A07F8u;
}
