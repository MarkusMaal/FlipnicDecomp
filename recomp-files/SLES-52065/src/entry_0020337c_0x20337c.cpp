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

// Function: entry_0020337c
// Address: 0x20337c - 0x203380
void entry_0020337c_0x20337c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020337c_0x20337c");
#endif

    ctx->pc = 0x20337cu;

    // 0x20337c: 0x5e200b  movn        $a0, $v0, $fp
    ctx->pc = 0x20337cu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->pc = 0x203380u;
}
