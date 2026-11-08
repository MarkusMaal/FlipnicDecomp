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

// Function: entry_00101ac4
// Address: 0x101ac4 - 0x101ac8
void entry_00101ac4_0x101ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ac4_0x101ac4");
#endif

    ctx->pc = 0x101ac4u;

    // 0x101ac4: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x101ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x101ac8u;
}
