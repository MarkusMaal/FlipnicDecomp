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

// Function: entry_001eaef8
// Address: 0x1eaef8 - 0x1eaf00
void entry_001eaef8_0x1eaef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaef8_0x1eaef8");
#endif

    ctx->pc = 0x1eaef8u;

    // 0x1eaef8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1eaefc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1eaefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1eaf00u;
}
