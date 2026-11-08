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

// Function: entry_001a74d8
// Address: 0x1a74d8 - 0x1a74f0
void entry_001a74d8_0x1a74d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a74d8_0x1a74d8");
#endif

    ctx->pc = 0x1a74d8u;

    // 0x1a74d8: 0x86030022  lh          $v1, 0x22($s0)
    ctx->pc = 0x1a74d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1a74dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a74e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A74E0u;
    {
        const bool branch_taken_0x1a74e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a74e0) {
            ctx->pc = 0x1A74F0u;
            return;
        }
    }
    ctx->pc = 0x1A74E8u;
    // 0x1a74e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A74E8u;
    {
        const bool branch_taken_0x1a74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74e8) {
            ctx->pc = 0x1A74F4u;
            return;
        }
    }
    ctx->pc = 0x1A74F0u;
}
