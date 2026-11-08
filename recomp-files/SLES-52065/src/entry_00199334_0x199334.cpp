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

// Function: entry_00199334
// Address: 0x199334 - 0x199340
void entry_00199334_0x199334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199334_0x199334");
#endif

    ctx->pc = 0x199334u;

    // 0x199334: 0x0  nop
    ctx->pc = 0x199334u;
    // NOP
    // 0x199338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19933c: 0xae83067c  sw          $v1, 0x67C($s4)
    ctx->pc = 0x19933cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1660), GPR_U32(ctx, 3));
    ctx->pc = 0x199340u;
}
