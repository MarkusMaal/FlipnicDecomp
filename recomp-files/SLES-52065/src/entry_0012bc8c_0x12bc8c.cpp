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

// Function: entry_0012bc8c
// Address: 0x12bc8c - 0x12bc98
void entry_0012bc8c_0x12bc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc8c_0x12bc8c");
#endif

    ctx->pc = 0x12bc8cu;

    // 0x12bc8c: 0x0  nop
    ctx->pc = 0x12bc8cu;
    // NOP
    // 0x12bc90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12bc94: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x12bc94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    ctx->pc = 0x12bc98u;
}
