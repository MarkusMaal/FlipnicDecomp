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

// Function: entry_001171d4
// Address: 0x1171d4 - 0x1171e4
void entry_001171d4_0x1171d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171d4_0x1171d4");
#endif

    ctx->pc = 0x1171d4u;

    // 0x1171d4: 0x24420a38  addiu       $v0, $v0, 0xA38
    ctx->pc = 0x1171d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2616));
    // 0x1171d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1171d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1171dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1171dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1171e0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1171e4u;
}
