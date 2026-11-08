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

// Function: entry_0010e2c8
// Address: 0x10e2c8 - 0x10e2e8
void entry_0010e2c8_0x10e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e2c8_0x10e2c8");
#endif

    ctx->pc = 0x10e2c8u;

    // 0x10e2c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10e2cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e2d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10e2d4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10e2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10e2d8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E2D8u;
    {
        const bool branch_taken_0x10e2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x10e2d8) {
            ctx->pc = 0x10E2E8u;
            return;
        }
    }
    ctx->pc = 0x10E2E0u;
    // 0x10e2e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E2E0u;
    {
        const bool branch_taken_0x10e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2e0) {
            ctx->pc = 0x10E2ECu;
            return;
        }
    }
    ctx->pc = 0x10E2E8u;
}
