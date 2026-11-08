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

// Function: entry_0013a1e4
// Address: 0x13a1e4 - 0x13a1f4
void entry_0013a1e4_0x13a1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a1e4_0x13a1e4");
#endif

    ctx->pc = 0x13a1e4u;

    // 0x13a1e4: 0x0  nop
    ctx->pc = 0x13a1e4u;
    // NOP
    // 0x13a1e8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13a1ec: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x13a1f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x13a1f4u;
}
