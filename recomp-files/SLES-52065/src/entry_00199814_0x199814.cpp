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

// Function: entry_00199814
// Address: 0x199814 - 0x199820
void entry_00199814_0x199814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199814_0x199814");
#endif

    ctx->pc = 0x199814u;

    // 0x199814: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x199818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19981c: 0xae82068c  sw          $v0, 0x68C($s4)
    ctx->pc = 0x19981cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 2));
    ctx->pc = 0x199820u;
}
