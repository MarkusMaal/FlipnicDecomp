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

// Function: entry_001f3a14
// Address: 0x1f3a14 - 0x1f3a1c
void entry_001f3a14_0x1f3a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a14_0x1f3a14");
#endif

    ctx->pc = 0x1f3a14u;

    // 0x1f3a14: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1f3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x1f3a18: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1f3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x1f3a1cu;
}
