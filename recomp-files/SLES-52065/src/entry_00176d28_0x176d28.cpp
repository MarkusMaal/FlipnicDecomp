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

// Function: entry_00176d28
// Address: 0x176d28 - 0x176d3c
void entry_00176d28_0x176d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176d28_0x176d28");
#endif

    ctx->pc = 0x176d28u;

    // 0x176d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176d2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176d30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x176d34: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x176d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x176d38: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x176d3cu;
}
