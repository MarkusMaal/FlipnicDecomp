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

// Function: entry_0011fe60
// Address: 0x11fe60 - 0x11fe8c
void entry_0011fe60_0x11fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe60_0x11fe60");
#endif

    ctx->pc = 0x11fe60u;

    // 0x11fe60: 0x150200a1  bne         $t0, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x11FE60u;
    {
        const bool branch_taken_0x11fe60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe60) {
            ctx->pc = 0x1200E8u;
            return;
        }
    }
    ctx->pc = 0x11FE68u;
    // 0x11fe68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fe6c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FE6Cu;
    {
        const bool branch_taken_0x11fe6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE6Cu;
        // 0x11fe70: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe6c) {
            ctx->pc = 0x11FE90u;
            return;
        }
    }
    ctx->pc = 0x11FE74u;
    // 0x11fe74: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fe78: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FE78u;
    {
        const bool branch_taken_0x11fe78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe78) {
            ctx->pc = 0x11FE8Cu;
            return;
        }
    }
    ctx->pc = 0x11FE80u;
    // 0x11fe80: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fe84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fe88: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fe8cu;
}
