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

// Function: entry_001a3988
// Address: 0x1a3988 - 0x1a39a8
void entry_001a3988_0x1a3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3988_0x1a3988");
#endif

    ctx->pc = 0x1a3988u;

    // 0x1a3988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a398c: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x1a398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
    // 0x1a3990: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x1a3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a3994: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x1a3994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1a3998: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3998u;
    {
        const bool branch_taken_0x1a3998 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3998) {
            ctx->pc = 0x1A39A8u;
            return;
        }
    }
    ctx->pc = 0x1A39A0u;
    // 0x1a39a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a39a4: 0xae220678  sw          $v0, 0x678($s1)
    ctx->pc = 0x1a39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 2));
    ctx->pc = 0x1a39a8u;
}
