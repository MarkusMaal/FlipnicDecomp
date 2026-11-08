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

// Function: main_menu_help
// Address: 0x1bf498 - 0x1bf4b4
void main_menu_help_0x1bf498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_help_0x1bf498");
#endif

    ctx->pc = 0x1bf498u;

    // 0x1bf498: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf49c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf4a0: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x1bf4a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x1bf4a4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BF4A4u;
    {
        const bool branch_taken_0x1bf4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4A4u;
        // 0x1bf4a8: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4a4) {
            ctx->pc = 0x1BF580u;
            return;
        }
    }
    ctx->pc = 0x1BF4ACu;
    // 0x1bf4ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1BF4ACu;
    {
        const bool branch_taken_0x1bf4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4ACu;
        // 0x1bf4b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4ac) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF4B4u;
}
