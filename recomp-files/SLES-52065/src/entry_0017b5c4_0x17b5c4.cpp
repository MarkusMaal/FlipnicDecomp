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

// Function: entry_0017b5c4
// Address: 0x17b5c4 - 0x17b5d0
void entry_0017b5c4_0x17b5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5c4_0x17b5c4");
#endif

    ctx->pc = 0x17b5c4u;

    // 0x17b5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17b5c8: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b5cc: 0x0  nop
    ctx->pc = 0x17b5ccu;
    // NOP
    ctx->pc = 0x17b5d0u;
}
