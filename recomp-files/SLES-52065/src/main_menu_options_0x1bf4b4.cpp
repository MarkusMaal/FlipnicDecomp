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

// Function: main_menu_options
// Address: 0x1bf4b4 - 0x1bf4c0
void main_menu_options_0x1bf4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_options_0x1bf4b4");
#endif

    ctx->pc = 0x1bf4b4u;

    // 0x1bf4b4: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bf4b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BF4B8u;
    {
        const bool branch_taken_0x1bf4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4B8u;
        // 0x1bf4bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4b8) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF4C0u;
}
