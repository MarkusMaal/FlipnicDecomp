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

// Function: entry_0019d6e4
// Address: 0x19d6e4 - 0x19d6f0
void entry_0019d6e4_0x19d6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d6e4_0x19d6e4");
#endif

    ctx->pc = 0x19d6e4u;

    // 0x19d6e4: 0x0  nop
    ctx->pc = 0x19d6e4u;
    // NOP
    // 0x19d6e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x19d6ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19d6f0u;
}
