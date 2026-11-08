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

// Function: main_menu_extra
// Address: 0x1bf504 - 0x1bf510
void main_menu_extra_0x1bf504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("main_menu_extra_0x1bf504");
#endif

    ctx->pc = 0x1bf504u;

    // 0x1bf504: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x1bf504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1bf508: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BF508u;
    {
        const bool branch_taken_0x1bf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF508u;
        // 0x1bf50c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf508) {
            ctx->pc = 0x1BF544u;
            return;
        }
    }
    ctx->pc = 0x1BF510u;
}
