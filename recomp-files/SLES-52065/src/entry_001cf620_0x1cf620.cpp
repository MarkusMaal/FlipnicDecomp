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

// Function: entry_001cf620
// Address: 0x1cf620 - 0x1cf648
void entry_001cf620_0x1cf620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf620_0x1cf620");
#endif

    ctx->pc = 0x1cf620u;

    // 0x1cf620: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1cf620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf624: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf628: 0xaea3007c  sw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 3));
    // 0x1cf62c: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf630: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf634: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x1cf634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1cf638: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x1cf638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1cf63c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF63Cu;
    {
        const bool branch_taken_0x1cf63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF63Cu;
        // 0x1cf640: 0x24080031  addiu       $t0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf63c) {
            ctx->pc = 0x1CF648u;
            return;
        }
    }
    ctx->pc = 0x1CF644u;
    // 0x1cf644: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x1cf648u;
}
