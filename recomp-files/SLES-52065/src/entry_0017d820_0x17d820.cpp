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

// Function: entry_0017d820
// Address: 0x17d820 - 0x17d824
void entry_0017d820_0x17d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d820_0x17d820");
#endif

    ctx->pc = 0x17d820u;

    // 0x17d820: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x17d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    ctx->pc = 0x17d824u;
}
