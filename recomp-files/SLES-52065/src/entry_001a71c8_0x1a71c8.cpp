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

// Function: entry_001a71c8
// Address: 0x1a71c8 - 0x1a71e0
void entry_001a71c8_0x1a71c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a71c8_0x1a71c8");
#endif

    ctx->pc = 0x1a71c8u;

    // 0x1a71c8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x1a71c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a71cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71D0u;
    {
        const bool branch_taken_0x1a71d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71d0) {
            ctx->pc = 0x1A71E0u;
            return;
        }
    }
    ctx->pc = 0x1A71D8u;
    // 0x1a71d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A71E4u;
            return;
        }
    }
    ctx->pc = 0x1A71E0u;
}
