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

// Function: entry_0011fed8
// Address: 0x11fed8 - 0x11fef8
void entry_0011fed8_0x11fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fed8_0x11fed8");
#endif

    ctx->pc = 0x11fed8u;

    // 0x11fed8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FED8u;
    {
        const bool branch_taken_0x11fed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED8u;
        // 0x11fedc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fed8) {
            ctx->pc = 0x11FEFCu;
            return;
        }
    }
    ctx->pc = 0x11FEE0u;
    // 0x11fee0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x11fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11fee4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FEE4u;
    {
        const bool branch_taken_0x11fee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fee4) {
            ctx->pc = 0x11FEF8u;
            return;
        }
    }
    ctx->pc = 0x11FEECu;
    // 0x11feec: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fef0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fef4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fef8u;
}
