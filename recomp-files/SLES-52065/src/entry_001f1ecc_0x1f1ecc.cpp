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

// Function: entry_001f1ecc
// Address: 0x1f1ecc - 0x1f1ed8
void entry_001f1ecc_0x1f1ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1ecc_0x1f1ecc");
#endif

    ctx->pc = 0x1f1eccu;

    // 0x1f1ecc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f1eccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f1ed0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f1ed4: 0x2610ee40  addiu       $s0, $s0, -0x11C0
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
    ctx->pc = 0x1f1ed8u;
}
