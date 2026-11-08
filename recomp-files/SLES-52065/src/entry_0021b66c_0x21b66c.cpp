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

// Function: entry_0021b66c
// Address: 0x21b66c - 0x21b674
void entry_0021b66c_0x21b66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b66c_0x21b66c");
#endif

    ctx->pc = 0x21b66cu;

    // 0x21b66c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
    // 0x21b670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21b674u;
}
