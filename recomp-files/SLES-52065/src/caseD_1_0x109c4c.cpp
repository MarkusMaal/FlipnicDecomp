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

// Function: caseD_1
// Address: 0x109c4c - 0x109c74
void caseD_1_0x109c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x109c4c");
#endif

    ctx->pc = 0x109c4cu;

    // 0x109c4c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109c50: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x109c54: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109c58: 0x8c632c1c  lw          $v1, 0x2C1C($v1)
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11292)));
    // 0x109c5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x109c60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x109c64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c6c: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x109C6Cu;
    {
        const bool branch_taken_0x109c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C6Cu;
        // 0x109c70: 0xa0440041  sb          $a0, 0x41($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c6c) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109C74u;
}
