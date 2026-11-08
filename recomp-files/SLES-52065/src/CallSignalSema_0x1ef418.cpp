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

// Function: CallSignalSema
// Address: 0x1ef418 - 0x1ef424
void CallSignalSema_0x1ef418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CallSignalSema_0x1ef418");
#endif

    ctx->pc = 0x1ef418u;

    // 0x1ef418: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef41c: 0x807ad90  j           func_1EB640
    ctx->pc = 0x1EF41Cu;
    ctx->pc = 0x1EF420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF41Cu;
    // 0x1ef420: 0x8c44a464  lw          $a0, -0x5B9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943844)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    SignalSema_0x1eb640(rdram, ctx, runtime); return;
    ctx->pc = 0x1EF424u;
}
