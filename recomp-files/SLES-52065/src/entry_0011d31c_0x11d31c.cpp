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

// Function: entry_0011d31c
// Address: 0x11d31c - 0x11d324
void entry_0011d31c_0x11d31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d31c_0x11d31c");
#endif

    ctx->pc = 0x11d31cu;

    // 0x11d31c: 0x3c140002  lui         $s4, 0x2
    ctx->pc = 0x11d31cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
    // 0x11d320: 0x8ea50538  lw          $a1, 0x538($s5)
    ctx->pc = 0x11d320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    ctx->pc = 0x11d324u;
}
