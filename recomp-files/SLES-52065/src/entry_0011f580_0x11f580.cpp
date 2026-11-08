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

// Function: entry_0011f580
// Address: 0x11f580 - 0x11f598
void entry_0011f580_0x11f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f580_0x11f580");
#endif

    ctx->pc = 0x11f580u;

    // 0x11f580: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f584: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11f588: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11f588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11f58c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f594: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x11f594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11f598u;
}
