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

// Function: entry_0011fca4
// Address: 0x11fca4 - 0x11fcd4
void entry_0011fca4_0x11fca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fca4_0x11fca4");
#endif

    ctx->pc = 0x11fca4u;

    // 0x11fca4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x11fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11fca8: 0x1502006d  bne         $t0, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x11FCA8u;
    {
        const bool branch_taken_0x11fca8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA8u;
        // 0x11fcac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fca8) {
            ctx->pc = 0x11FE60u;
            return;
        }
    }
    ctx->pc = 0x11FCB0u;
    // 0x11fcb0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x11fcb4: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FCB4u;
    {
        const bool branch_taken_0x11fcb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB4u;
        // 0x11fcb8: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcb4) {
            ctx->pc = 0x11FCD8u;
            return;
        }
    }
    ctx->pc = 0x11FCBCu;
    // 0x11fcbc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fcc0: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FCC0u;
    {
        const bool branch_taken_0x11fcc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fcc0) {
            ctx->pc = 0x11FCD4u;
            return;
        }
    }
    ctx->pc = 0x11FCC8u;
    // 0x11fcc8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fccc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fcd0: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fcd4u;
}
