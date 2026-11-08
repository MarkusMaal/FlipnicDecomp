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

// Function: entry_001b72ac
// Address: 0x1b72ac - 0x1b72d0
void entry_001b72ac_0x1b72ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b72ac_0x1b72ac");
#endif

    ctx->pc = 0x1b72acu;

    // 0x1b72ac: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B72ACu;
    {
        const bool branch_taken_0x1b72ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b72ac) {
            ctx->pc = 0x1B72D0u;
            return;
        }
    }
    ctx->pc = 0x1B72B4u;
    // 0x1b72b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b72b8: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
    // 0x1b72bc: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1b72c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B72C0u;
    {
        const bool branch_taken_0x1b72c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72c0) {
            ctx->pc = 0x1B72D0u;
            return;
        }
    }
    ctx->pc = 0x1B72C8u;
    // 0x1b72c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72cc: 0xa2630041  sb          $v1, 0x41($s3)
    ctx->pc = 0x1b72ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 65), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b72d0u;
}
