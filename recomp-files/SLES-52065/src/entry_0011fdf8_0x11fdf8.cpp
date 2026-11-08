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

// Function: entry_0011fdf8
// Address: 0x11fdf8 - 0x11fe18
void entry_0011fdf8_0x11fdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fdf8_0x11fdf8");
#endif

    ctx->pc = 0x11fdf8u;

    // 0x11fdf8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FDF8u;
    {
        const bool branch_taken_0x11fdf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDF8u;
        // 0x11fdfc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdf8) {
            ctx->pc = 0x11FE1Cu;
            return;
        }
    }
    ctx->pc = 0x11FE00u;
    // 0x11fe00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11fe04: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FE04u;
    {
        const bool branch_taken_0x11fe04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fe04) {
            ctx->pc = 0x11FE18u;
            return;
        }
    }
    ctx->pc = 0x11FE0Cu;
    // 0x11fe0c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11fe10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11fe14: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11fe18u;
}
