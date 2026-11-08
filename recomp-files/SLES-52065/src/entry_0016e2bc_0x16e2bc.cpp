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

// Function: entry_0016e2bc
// Address: 0x16e2bc - 0x16e2c8
void entry_0016e2bc_0x16e2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2bc_0x16e2bc");
#endif

    ctx->pc = 0x16e2bcu;

    // 0x16e2bc: 0x0  nop
    ctx->pc = 0x16e2bcu;
    // NOP
    // 0x16e2c0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x16e2c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x16e2c8u;
}
