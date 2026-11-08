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

// Function: main_menu_memory_card
// Address: 0x1bf48c - 0x1bf498
void main_menu_memory_card_0x1bf48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_memory_card_0x1bf48c");
#endif

    ctx->pc = 0x1bf48cu;

    // 0x1bf48c: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bf490: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF490u;
    {
        const bool branch_taken_0x1bf490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF490u;
        // 0x1bf494: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf490) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF498u;
}
