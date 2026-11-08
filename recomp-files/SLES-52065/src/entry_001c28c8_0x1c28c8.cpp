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

// Function: entry_001c28c8
// Address: 0x1c28c8 - 0x1c28cc
void entry_001c28c8_0x1c28c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c28c8_0x1c28c8");
#endif

    ctx->pc = 0x1c28c8u;

    // 0x1c28c8: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    ctx->pc = 0x1c28ccu;
}
