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

// Function: entry_001a16a8
// Address: 0x1a16a8 - 0x1a16c4
void entry_001a16a8_0x1a16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a16a8_0x1a16a8");
#endif

    ctx->pc = 0x1a16a8u;

    // 0x1a16a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a16b0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a16b4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A16B4u;
    {
        const bool branch_taken_0x1a16b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a16b4) {
            ctx->pc = 0x1A16C4u;
            return;
        }
    }
    ctx->pc = 0x1A16BCu;
    // 0x1a16bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A16BCu;
    {
        const bool branch_taken_0x1a16bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16bc) {
            ctx->pc = 0x1A16C8u;
            return;
        }
    }
    ctx->pc = 0x1A16C4u;
}
