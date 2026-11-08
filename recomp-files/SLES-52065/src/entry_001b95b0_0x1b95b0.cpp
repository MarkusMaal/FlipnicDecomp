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

// Function: entry_001b95b0
// Address: 0x1b95b0 - 0x1b95d4
void entry_001b95b0_0x1b95b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b95b0_0x1b95b0");
#endif

    ctx->pc = 0x1b95b0u;

    // 0x1b95b0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b95b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b95b8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1b95bc: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b95c0: 0x2863003c  slti        $v1, $v1, 0x3C
    ctx->pc = 0x1b95c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1b95c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b95d0: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1b95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    ctx->pc = 0x1b95d4u;
}
