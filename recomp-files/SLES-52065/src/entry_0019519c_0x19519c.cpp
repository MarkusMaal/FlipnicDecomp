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

// Function: entry_0019519c
// Address: 0x19519c - 0x1951a4
void entry_0019519c_0x19519c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019519c_0x19519c");
#endif

    ctx->pc = 0x19519cu;

    // 0x19519c: 0x0  nop
    ctx->pc = 0x19519cu;
    // NOP
    // 0x1951a0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1951a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1951a4u;
}
