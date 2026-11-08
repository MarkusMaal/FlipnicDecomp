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

// Function: entry_0011119c
// Address: 0x11119c - 0x1111a8
void entry_0011119c_0x11119c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011119c_0x11119c");
#endif

    ctx->pc = 0x11119cu;

    // 0x11119c: 0x0  nop
    ctx->pc = 0x11119cu;
    // NOP
    // 0x1111a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1111a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1111a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1111a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1111a8u;
}
