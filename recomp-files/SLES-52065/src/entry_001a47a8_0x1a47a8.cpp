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

// Function: entry_001a47a8
// Address: 0x1a47a8 - 0x1a47cc
void entry_001a47a8_0x1a47a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47a8_0x1a47a8");
#endif

    ctx->pc = 0x1a47a8u;

    // 0x1a47a8: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x1a47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1a47ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a47b0: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A47B0u;
    {
        const bool branch_taken_0x1a47b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a47b0) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A47B8u;
    // 0x1a47b8: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x1a47bc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A47BCu;
    {
        const bool branch_taken_0x1a47bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a47bc) {
            ctx->pc = 0x1A47CCu;
            return;
        }
    }
    ctx->pc = 0x1A47C4u;
    // 0x1a47c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a47c8: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x1a47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    ctx->pc = 0x1a47ccu;
}
