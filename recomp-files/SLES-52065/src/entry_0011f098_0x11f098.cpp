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

// Function: entry_0011f098
// Address: 0x11f098 - 0x11f0a0
void entry_0011f098_0x11f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f098_0x11f098");
#endif

    ctx->pc = 0x11f098u;

    // 0x11f098: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x11f09c: 0x2ea10010  sltiu       $at, $s5, 0x10
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    ctx->pc = 0x11f0a0u;
}
