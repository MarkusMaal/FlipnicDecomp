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

// Function: entry_001aa660
// Address: 0x1aa660 - 0x1aa678
void entry_001aa660_0x1aa660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa660_0x1aa660");
#endif

    ctx->pc = 0x1aa660u;

    // 0x1aa660: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa664: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa668: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aa66c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1aa670: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1aa674: 0xac430680  sw          $v1, 0x680($v0)
    ctx->pc = 0x1aa674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1664), GPR_U32(ctx, 3));
    ctx->pc = 0x1aa678u;
}
