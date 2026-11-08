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

// Function: entry_001d41b4
// Address: 0x1d41b4 - 0x1d41c0
void entry_001d41b4_0x1d41b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41b4_0x1d41b4");
#endif

    ctx->pc = 0x1d41b4u;

    // 0x1d41b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d41bc: 0x0  nop
    ctx->pc = 0x1d41bcu;
    // NOP
    ctx->pc = 0x1d41c0u;
}
