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

// Function: entry_0011de00
// Address: 0x11de00 - 0x11de10
void entry_0011de00_0x11de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de00_0x11de00");
#endif

    ctx->pc = 0x11de00u;

    // 0x11de00: 0xa24003ec  sb          $zero, 0x3EC($s2)
    ctx->pc = 0x11de00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1004), (uint8_t)GPR_U32(ctx, 0));
    // 0x11de04: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11de08: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11de0c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x11de10u;
}
