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

// Function: entry_001fcc18
// Address: 0x1fcc18 - 0x1fcc1c
void entry_001fcc18_0x1fcc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc18_0x1fcc18");
#endif

    ctx->pc = 0x1fcc18u;

    // 0x1fcc18: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->pc = 0x1fcc1cu;
}
