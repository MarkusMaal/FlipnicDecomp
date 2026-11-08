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

// Function: entry_0011fe1c
// Address: 0x11fe1c - 0x11fe3c
void entry_0011fe1c_0x11fe1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe1c_0x11fe1c");
#endif

    ctx->pc = 0x11fe1cu;

    // 0x11fe1c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FE1Cu;
    {
        const bool branch_taken_0x11fe1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE1Cu;
        // 0x11fe20: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe1c) {
            ctx->pc = 0x11FE40u;
            return;
        }
    }
    ctx->pc = 0x11FE24u;
    // 0x11fe24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fe28: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FE3Cu;
            return;
        }
    }
    ctx->pc = 0x11FE30u;
    // 0x11fe30: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fe34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fe38: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fe3cu;
}
