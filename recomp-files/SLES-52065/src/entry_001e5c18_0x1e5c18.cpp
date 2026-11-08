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

// Function: entry_001e5c18
// Address: 0x1e5c18 - 0x1e5c24
void entry_001e5c18_0x1e5c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c18_0x1e5c18");
#endif

    ctx->pc = 0x1e5c18u;

    // 0x1e5c18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e5c1c: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e5c20: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1e5c24u;
}
