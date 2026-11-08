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

// Function: entry_00176ab4
// Address: 0x176ab4 - 0x176ab8
void entry_00176ab4_0x176ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176ab4_0x176ab4");
#endif

    ctx->pc = 0x176ab4u;

    // 0x176ab4: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x176ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    ctx->pc = 0x176ab8u;
}
