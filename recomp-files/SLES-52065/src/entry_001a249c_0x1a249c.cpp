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

// Function: entry_001a249c
// Address: 0x1a249c - 0x1a24b0
void entry_001a249c_0x1a249c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a249c_0x1a249c");
#endif

    ctx->pc = 0x1a249cu;

    // 0x1a249c: 0x0  nop
    ctx->pc = 0x1a249cu;
    // NOP
    // 0x1a24a0: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a24a4: 0xac400774  sw          $zero, 0x774($v0)
    ctx->pc = 0x1a24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1908), GPR_U32(ctx, 0));
    // 0x1a24a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a24ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a24acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1a24b0u;
}
