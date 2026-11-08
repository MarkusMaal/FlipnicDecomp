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

// Function: entry_001f01ec
// Address: 0x1f01ec - 0x1f01f8
void entry_001f01ec_0x1f01ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f01ec_0x1f01ec");
#endif

    ctx->pc = 0x1f01ecu;

    // 0x1f01ec: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1f01f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f01f4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1f01f8u;
}
