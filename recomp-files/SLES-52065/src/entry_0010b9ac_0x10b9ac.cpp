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

// Function: entry_0010b9ac
// Address: 0x10b9ac - 0x10b9b4
void entry_0010b9ac_0x10b9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b9ac_0x10b9ac");
#endif

    ctx->pc = 0x10b9acu;

    // 0x10b9ac: 0x0  nop
    ctx->pc = 0x10b9acu;
    // NOP
    // 0x10b9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10b9b4u;
}
