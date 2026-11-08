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

// Function: entry_00137b18
// Address: 0x137b18 - 0x137b1c
void entry_00137b18_0x137b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b18_0x137b18");
#endif

    ctx->pc = 0x137b18u;

    // 0x137b18: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x137b18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x137b1cu;
}
