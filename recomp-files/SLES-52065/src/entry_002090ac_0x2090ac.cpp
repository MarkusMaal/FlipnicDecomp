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

// Function: entry_002090ac
// Address: 0x2090ac - 0x2090b0
void entry_002090ac_0x2090ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002090ac_0x2090ac");
#endif

    ctx->pc = 0x2090acu;

    // 0x2090ac: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2090acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->pc = 0x2090b0u;
}
