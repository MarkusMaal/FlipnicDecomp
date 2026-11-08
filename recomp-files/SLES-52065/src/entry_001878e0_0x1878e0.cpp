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

// Function: entry_001878e0
// Address: 0x1878e0 - 0x1878ec
void entry_001878e0_0x1878e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878e0_0x1878e0");
#endif

    ctx->pc = 0x1878e0u;

    // 0x1878e0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1878e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1878e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1878ecu;
}
