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

// Function: entry_0010d0ac
// Address: 0x10d0ac - 0x10d0b4
void entry_0010d0ac_0x10d0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0ac_0x10d0ac");
#endif

    ctx->pc = 0x10d0acu;

    // 0x10d0ac: 0x0  nop
    ctx->pc = 0x10d0acu;
    // NOP
    // 0x10d0b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x10d0b4u;
}
