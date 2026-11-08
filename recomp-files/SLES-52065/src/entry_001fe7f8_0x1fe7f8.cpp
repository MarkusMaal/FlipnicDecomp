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

// Function: entry_001fe7f8
// Address: 0x1fe7f8 - 0x1fe7fc
void entry_001fe7f8_0x1fe7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe7f8_0x1fe7f8");
#endif

    ctx->pc = 0x1fe7f8u;

    // 0x1fe7f8: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1fe7fcu;
}
