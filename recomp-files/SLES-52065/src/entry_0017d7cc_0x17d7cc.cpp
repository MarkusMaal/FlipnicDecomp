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

// Function: entry_0017d7cc
// Address: 0x17d7cc - 0x17d7d0
void entry_0017d7cc_0x17d7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d7cc_0x17d7cc");
#endif

    ctx->pc = 0x17d7ccu;

    // 0x17d7cc: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->pc = 0x17d7d0u;
}
