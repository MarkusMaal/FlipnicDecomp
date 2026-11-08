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

// Function: entry_00104e0c
// Address: 0x104e0c - 0x104e1c
void entry_00104e0c_0x104e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e0c_0x104e0c");
#endif

    ctx->pc = 0x104e0cu;

    // 0x104e0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x104e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104e10: 0xac620220  sw          $v0, 0x220($v1)
    ctx->pc = 0x104e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 2));
    // 0x104e14: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104e18: 0x0  nop
    ctx->pc = 0x104e18u;
    // NOP
    ctx->pc = 0x104e1cu;
}
