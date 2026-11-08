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

// Function: entry_00138c14
// Address: 0x138c14 - 0x138c2c
void entry_00138c14_0x138c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c14_0x138c14");
#endif

    ctx->pc = 0x138c14u;

    // 0x138c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138c18: 0x16050004  bne         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x138C18u;
    {
        const bool branch_taken_0x138c18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x138c18) {
            ctx->pc = 0x138C2Cu;
            return;
        }
    }
    ctx->pc = 0x138C20u;
    // 0x138c20: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x138c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138c24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138c28: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x138c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    ctx->pc = 0x138c2cu;
}
