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

// Function: entry_001412d4
// Address: 0x1412d4 - 0x141304
void entry_001412d4_0x1412d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001412d4_0x1412d4");
#endif

    ctx->pc = 0x1412d4u;

    // 0x1412d4: 0x8fa701b4  lw          $a3, 0x1B4($sp)
    ctx->pc = 0x1412d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1412d8: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1412dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1412dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1412e0: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x1412e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
    // 0x1412e4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1412e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1412e8: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1412e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1412ec: 0x14e80005  bne         $a3, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1412ECu;
    {
        const bool branch_taken_0x1412ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1412ec) {
            ctx->pc = 0x141304u;
            return;
        }
    }
    ctx->pc = 0x1412F4u;
    // 0x1412f4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1412f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1412fc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x141300: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x141300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x141304u;
}
