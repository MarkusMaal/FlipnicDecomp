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

// Function: entry_00194788
// Address: 0x194788 - 0x1947a0
void entry_00194788_0x194788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194788_0x194788");
#endif

    ctx->pc = 0x194788u;

    // 0x194788: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19478c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19478Cu;
    {
        const bool branch_taken_0x19478c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19478c) {
            ctx->pc = 0x1947A0u;
            return;
        }
    }
    ctx->pc = 0x194794u;
    // 0x194794: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
    // 0x194798: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19479c: 0xae830328  sw          $v1, 0x328($s4)
    ctx->pc = 0x19479cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 808), GPR_U32(ctx, 3));
    ctx->pc = 0x1947a0u;
}
