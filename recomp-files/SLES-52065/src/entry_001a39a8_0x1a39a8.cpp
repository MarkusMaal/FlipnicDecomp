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

// Function: entry_001a39a8
// Address: 0x1a39a8 - 0x1a39c8
void entry_001a39a8_0x1a39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a39a8_0x1a39a8");
#endif

    ctx->pc = 0x1a39a8u;

    // 0x1a39a8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a39ac: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x1a39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a39b0: 0x24442834  addiu       $a0, $v0, 0x2834
    ctx->pc = 0x1a39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10292));
    // 0x1a39b4: 0x8c422834  lw          $v0, 0x2834($v0)
    ctx->pc = 0x1a39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10292)));
    // 0x1a39b8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a39b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a39bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A39BCu;
    {
        const bool branch_taken_0x1a39bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39bc) {
            ctx->pc = 0x1A39C8u;
            return;
        }
    }
    ctx->pc = 0x1A39C4u;
    // 0x1a39c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1a39c8u;
}
