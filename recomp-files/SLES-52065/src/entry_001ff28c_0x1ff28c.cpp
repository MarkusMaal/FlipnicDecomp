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

// Function: entry_001ff28c
// Address: 0x1ff28c - 0x1ff290
void entry_001ff28c_0x1ff28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff28c_0x1ff28c");
#endif

    ctx->pc = 0x1ff28cu;

    // 0x1ff28c: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    ctx->pc = 0x1ff290u;
}
