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

// Function: entry_001c62d4
// Address: 0x1c62d4 - 0x1c62d8
void entry_001c62d4_0x1c62d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c62d4_0x1c62d4");
#endif

    ctx->pc = 0x1c62d4u;

    // 0x1c62d4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1c62d4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1c62d8u;
}
