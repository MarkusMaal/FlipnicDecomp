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

// Function: entry_001e06b8
// Address: 0x1e06b8 - 0x1e06c0
void entry_001e06b8_0x1e06b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06b8_0x1e06b8");
#endif

    ctx->pc = 0x1e06b8u;

    // 0x1e06b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e06b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06bc: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x1e06c0u;
}
