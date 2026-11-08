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

// Function: entry_001a8f14
// Address: 0x1a8f14 - 0x1a8f20
void entry_001a8f14_0x1a8f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f14_0x1a8f14");
#endif

    ctx->pc = 0x1a8f14u;

    // 0x1a8f14: 0x0  nop
    ctx->pc = 0x1a8f14u;
    // NOP
    // 0x1a8f18: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1a8f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1a8f1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1a8f20u;
}
