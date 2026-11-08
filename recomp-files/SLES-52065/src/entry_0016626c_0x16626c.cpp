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

// Function: entry_0016626c
// Address: 0x16626c - 0x166270
void entry_0016626c_0x16626c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016626c_0x16626c");
#endif

    ctx->pc = 0x16626cu;

    // 0x16626c: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x16626cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    ctx->pc = 0x166270u;
}
