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

// Function: entry_001ed2a8
// Address: 0x1ed2a8 - 0x1ed2ac
void entry_001ed2a8_0x1ed2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed2a8_0x1ed2a8");
#endif

    ctx->pc = 0x1ed2a8u;

    // 0x1ed2a8: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1ed2a8u;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    ctx->pc = 0x1ed2acu;
}
