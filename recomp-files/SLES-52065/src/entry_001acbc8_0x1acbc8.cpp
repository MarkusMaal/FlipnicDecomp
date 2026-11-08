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

// Function: entry_001acbc8
// Address: 0x1acbc8 - 0x1acbe8
void entry_001acbc8_0x1acbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acbc8_0x1acbc8");
#endif

    ctx->pc = 0x1acbc8u;

    // 0x1acbc8: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACBC8u;
    {
        const bool branch_taken_0x1acbc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acbc8) {
            ctx->pc = 0x1ACBF4u;
            return;
        }
    }
    ctx->pc = 0x1ACBD0u;
    // 0x1acbd0: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1acbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acbd8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACBD8u;
    {
        const bool branch_taken_0x1acbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acbd8) {
            ctx->pc = 0x1ACBE8u;
            return;
        }
    }
    ctx->pc = 0x1ACBE0u;
    // 0x1acbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACBE0u;
    {
        const bool branch_taken_0x1acbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbe0) {
            ctx->pc = 0x1ACBECu;
            return;
        }
    }
    ctx->pc = 0x1ACBE8u;
}
