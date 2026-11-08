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

// Function: entry_001ad360
// Address: 0x1ad360 - 0x1ad36c
void entry_001ad360_0x1ad360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad360_0x1ad360");
#endif

    ctx->pc = 0x1ad360u;

    // 0x1ad360: 0x8e2206d0  lw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1744)));
    // 0x1ad364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad368: 0xae2206d0  sw          $v0, 0x6D0($s1)
    ctx->pc = 0x1ad368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1744), GPR_U32(ctx, 2));
    ctx->pc = 0x1ad36cu;
}
