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

// Function: main_menu_free_play
// Address: 0x1bf480 - 0x1bf48c
void main_menu_free_play_0x1bf480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_free_play_0x1bf480");
#endif

    ctx->pc = 0x1bf480u;

    // 0x1bf480: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf484: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BF484u;
    {
        const bool branch_taken_0x1bf484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF484u;
        // 0x1bf488: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf484) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF48Cu;
}
