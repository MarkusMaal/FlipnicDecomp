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

// Function: entry_001add5c
// Address: 0x1add5c - 0x1add88
void entry_001add5c_0x1add5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add5c_0x1add5c");
#endif

    ctx->pc = 0x1add5cu;

    // 0x1add5c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1add60: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1add64: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1add68: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1add6c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1add70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1add70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1add74: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1add78: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1add78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1add7c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD7Cu;
    {
        const bool branch_taken_0x1add7c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ADD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD7Cu;
        // 0x1add80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add7c) {
            ctx->pc = 0x1ADD88u;
            return;
        }
    }
    ctx->pc = 0x1ADD84u;
    // 0x1add84: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1add84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x1add88u;
}
