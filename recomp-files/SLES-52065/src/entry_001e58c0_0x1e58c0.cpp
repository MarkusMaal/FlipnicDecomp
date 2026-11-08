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

// Function: entry_001e58c0
// Address: 0x1e58c0 - 0x1e58dc
void entry_001e58c0_0x1e58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e58c0_0x1e58c0");
#endif

    ctx->pc = 0x1e58c0u;

    // 0x1e58c0: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1e58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e58c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e58c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e58c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e58cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e58d0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x1e58d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1e58d4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1E58D4u;
    {
        const bool branch_taken_0x1e58d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e58d4) {
            ctx->pc = 0x1E5870u;
            return;
        }
    }
    ctx->pc = 0x1E58DCu;
}
