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

// Function: entry_00110dac
// Address: 0x110dac - 0x110db8
void entry_00110dac_0x110dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110dac_0x110dac");
#endif

    ctx->pc = 0x110dacu;

    // 0x110dac: 0x0  nop
    ctx->pc = 0x110dacu;
    // NOP
    // 0x110db0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x110db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x110db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x110db8u;
}
