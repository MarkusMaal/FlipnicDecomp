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

// Function: entry_00104d8c
// Address: 0x104d8c - 0x104d9c
void entry_00104d8c_0x104d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104d8c_0x104d8c");
#endif

    ctx->pc = 0x104d8cu;

    // 0x104d8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d90: 0xac620220  sw          $v0, 0x220($v1)
    ctx->pc = 0x104d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 2));
    // 0x104d94: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d98: 0x0  nop
    ctx->pc = 0x104d98u;
    // NOP
    ctx->pc = 0x104d9cu;
}
