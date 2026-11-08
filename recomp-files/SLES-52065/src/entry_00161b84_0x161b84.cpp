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

// Function: entry_00161b84
// Address: 0x161b84 - 0x161b88
void entry_00161b84_0x161b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b84_0x161b84");
#endif

    ctx->pc = 0x161b84u;

    // 0x161b84: 0x28c1fffe  slti        $at, $a2, -0x2
    ctx->pc = 0x161b84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    ctx->pc = 0x161b88u;
}
