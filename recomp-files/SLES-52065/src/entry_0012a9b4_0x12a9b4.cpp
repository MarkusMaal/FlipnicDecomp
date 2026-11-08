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

// Function: entry_0012a9b4
// Address: 0x12a9b4 - 0x12a9c8
void entry_0012a9b4_0x12a9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a9b4_0x12a9b4");
#endif

    ctx->pc = 0x12a9b4u;

    // 0x12a9b4: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x12a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x12a9b8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12a9bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a9c0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x12a9c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a9c4: 0x0  nop
    ctx->pc = 0x12a9c4u;
    // NOP
    ctx->pc = 0x12a9c8u;
}
