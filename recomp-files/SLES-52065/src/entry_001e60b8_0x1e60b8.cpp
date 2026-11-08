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

// Function: entry_001e60b8
// Address: 0x1e60b8 - 0x1e60c4
void entry_001e60b8_0x1e60b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e60b8_0x1e60b8");
#endif

    ctx->pc = 0x1e60b8u;

    // 0x1e60b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e60bc: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e60c0: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1e60c4u;
}
