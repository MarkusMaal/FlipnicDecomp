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

// Function: entry_00171bbc
// Address: 0x171bbc - 0x171bc4
void entry_00171bbc_0x171bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171bbc_0x171bbc");
#endif

    ctx->pc = 0x171bbcu;

    // 0x171bbc: 0x0  nop
    ctx->pc = 0x171bbcu;
    // NOP
    // 0x171bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x171bc4u;
}
