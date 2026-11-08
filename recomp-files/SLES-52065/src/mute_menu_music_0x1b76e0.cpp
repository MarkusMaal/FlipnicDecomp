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

// Function: mute_menu_music
// Address: 0x1b76e0 - 0x1b76e8
void mute_menu_music_0x1b76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mute_menu_music_0x1b76e0");
#endif

    ctx->pc = 0x1b76e0u;

    // 0x1b76e0: 0x806e944  j           func_1BA510
    ctx->pc = 0x1B76E0u;
    ctx->pc = 0x1B76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76E0u;
    // 0x1b76e4: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA510u;
    FUN_001ba510_0x1ba510(rdram, ctx, runtime); return;
    ctx->pc = 0x1B76E8u;
}
