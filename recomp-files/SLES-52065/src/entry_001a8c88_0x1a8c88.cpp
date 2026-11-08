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

// Function: entry_001a8c88
// Address: 0x1a8c88 - 0x1a8cac
void entry_001a8c88_0x1a8c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8c88_0x1a8c88");
#endif

    ctx->pc = 0x1a8c88u;

    // 0x1a8c88: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1a8c8c: 0x8ca206bc  lw          $v0, 0x6BC($a1)
    ctx->pc = 0x1a8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
    // 0x1a8c90: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A8C90u;
    {
        const bool branch_taken_0x1a8c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c90) {
            ctx->pc = 0x1A8CF0u;
            return;
        }
    }
    ctx->pc = 0x1A8C98u;
    // 0x1a8c98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a8c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a8ca0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8CA0u;
    {
        const bool branch_taken_0x1a8ca0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8ca0) {
            ctx->pc = 0x1A8CACu;
            return;
        }
    }
    ctx->pc = 0x1A8CA8u;
    // 0x1a8ca8: 0xaca206b4  sw          $v0, 0x6B4($a1)
    ctx->pc = 0x1a8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1716), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8cacu;
}
