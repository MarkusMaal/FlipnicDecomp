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

// Function: entry_0010b1a8
// Address: 0x10b1a8 - 0x10b1c8
void entry_0010b1a8_0x10b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b1a8_0x10b1a8");
#endif

    ctx->pc = 0x10b1a8u;

    // 0x10b1a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10b1ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10b1b4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10b1b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10b1b8: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B1B8u;
    {
        const bool branch_taken_0x10b1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x10b1b8) {
            ctx->pc = 0x10B1C8u;
            return;
        }
    }
    ctx->pc = 0x10B1C0u;
    // 0x10b1c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B1C0u;
    {
        const bool branch_taken_0x10b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b1c0) {
            ctx->pc = 0x10B1CCu;
            return;
        }
    }
    ctx->pc = 0x10B1C8u;
}
