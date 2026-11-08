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

// Function: entry_001eb188
// Address: 0x1eb188 - 0x1eb1a0
void entry_001eb188_0x1eb188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb188_0x1eb188");
#endif

    ctx->pc = 0x1eb188u;

    // 0x1eb188: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1eb188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1eb18c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1eb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eb190: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1eb190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1eb194: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1eb198: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x1eb198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
    // 0x1eb19c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1eb19cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    ctx->pc = 0x1eb1a0u;
}
