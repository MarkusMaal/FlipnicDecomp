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

// Function: entry_001eb0a8
// Address: 0x1eb0a8 - 0x1eb0c0
void entry_001eb0a8_0x1eb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb0a8_0x1eb0a8");
#endif

    ctx->pc = 0x1eb0a8u;

    // 0x1eb0a8: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb0ac: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1eb0b0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x1eb0b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1eb0b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eb0b8: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x1eb0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
    // 0x1eb0bc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x1eb0c0u;
}
