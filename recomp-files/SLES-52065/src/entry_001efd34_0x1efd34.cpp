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

// Function: entry_001efd34
// Address: 0x1efd34 - 0x1efd40
void entry_001efd34_0x1efd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd34_0x1efd34");
#endif

    ctx->pc = 0x1efd34u;

    // 0x1efd34: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1efd34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1efd38: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1efd3c: 0x2610ee40  addiu       $s0, $s0, -0x11C0
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
    ctx->pc = 0x1efd40u;
}
