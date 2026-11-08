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

// Function: entry_00208f40
// Address: 0x208f40 - 0x208f44
void entry_00208f40_0x208f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f40_0x208f40");
#endif

    ctx->pc = 0x208f40u;

    // 0x208f40: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x208f40u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->pc = 0x208f44u;
}
