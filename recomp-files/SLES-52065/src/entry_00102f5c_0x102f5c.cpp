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

// Function: entry_00102f5c
// Address: 0x102f5c - 0x102f64
void entry_00102f5c_0x102f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f5c_0x102f5c");
#endif

    ctx->pc = 0x102f5cu;

    // 0x102f5c: 0x0  nop
    ctx->pc = 0x102f5cu;
    // NOP
    // 0x102f60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x102f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x102f64u;
}
