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

// Function: entry_0011d284
// Address: 0x11d284 - 0x11d28c
void entry_0011d284_0x11d284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d284_0x11d284");
#endif

    ctx->pc = 0x11d284u;

    // 0x11d284: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x11d284u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
    // 0x11d288: 0x8ea50538  lw          $a1, 0x538($s5)
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    ctx->pc = 0x11d28cu;
}
