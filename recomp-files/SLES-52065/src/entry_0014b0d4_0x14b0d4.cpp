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

// Function: entry_0014b0d4
// Address: 0x14b0d4 - 0x14b0e0
void entry_0014b0d4_0x14b0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b0d4_0x14b0d4");
#endif

    ctx->pc = 0x14b0d4u;

    // 0x14b0d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b0d8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x14b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x14b0dc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x14b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x14b0e0u;
}
