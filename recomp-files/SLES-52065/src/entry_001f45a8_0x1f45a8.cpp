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

// Function: entry_001f45a8
// Address: 0x1f45a8 - 0x1f45ac
void entry_001f45a8_0x1f45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f45a8_0x1f45a8");
#endif

    ctx->pc = 0x1f45a8u;

    // 0x1f45a8: 0xaed1aad8  sw          $s1, -0x5528($s6)
    ctx->pc = 0x1f45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294945496), GPR_U32(ctx, 17));
    ctx->pc = 0x1f45acu;
}
