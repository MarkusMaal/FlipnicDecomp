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

// Function: entry_001eff68
// Address: 0x1eff68 - 0x1eff70
void entry_001eff68_0x1eff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff68_0x1eff68");
#endif

    ctx->pc = 0x1eff68u;

    // 0x1eff68: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1eff6c: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
    ctx->pc = 0x1eff70u;
}
