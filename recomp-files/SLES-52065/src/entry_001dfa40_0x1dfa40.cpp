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

// Function: entry_001dfa40
// Address: 0x1dfa40 - 0x1dfa44
void entry_001dfa40_0x1dfa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa40_0x1dfa40");
#endif

    ctx->pc = 0x1dfa40u;

    // 0x1dfa40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1dfa44u;
}
