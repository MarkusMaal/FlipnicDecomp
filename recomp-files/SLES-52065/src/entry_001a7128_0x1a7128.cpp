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

// Function: entry_001a7128
// Address: 0x1a7128 - 0x1a7140
void entry_001a7128_0x1a7128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7128_0x1a7128");
#endif

    ctx->pc = 0x1a7128u;

    // 0x1a7128: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x1a7128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a712c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7130: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7130u;
    {
        const bool branch_taken_0x1a7130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7130) {
            ctx->pc = 0x1A7140u;
            return;
        }
    }
    ctx->pc = 0x1A7138u;
    // 0x1a7138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7138u;
    {
        const bool branch_taken_0x1a7138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7138) {
            ctx->pc = 0x1A7144u;
            return;
        }
    }
    ctx->pc = 0x1A7140u;
}
