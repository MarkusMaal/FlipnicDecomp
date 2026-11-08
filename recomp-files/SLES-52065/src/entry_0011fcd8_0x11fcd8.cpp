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

// Function: entry_0011fcd8
// Address: 0x11fcd8 - 0x11fcf8
void entry_0011fcd8_0x11fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcd8_0x11fcd8");
#endif

    ctx->pc = 0x11fcd8u;

    // 0x11fcd8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FCD8u;
    {
        const bool branch_taken_0x11fcd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCD8u;
        // 0x11fcdc: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcd8) {
            ctx->pc = 0x11FCFCu;
            return;
        }
    }
    ctx->pc = 0x11FCE0u;
    // 0x11fce0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x11fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fce4: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FCE4u;
    {
        const bool branch_taken_0x11fce4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fce4) {
            ctx->pc = 0x11FCF8u;
            return;
        }
    }
    ctx->pc = 0x11FCECu;
    // 0x11fcec: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fcf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fcf4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fcf8u;
}
