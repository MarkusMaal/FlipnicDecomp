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

// Function: entry_001d1230
// Address: 0x1d1230 - 0x1d1234
void entry_001d1230_0x1d1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1230_0x1d1230");
#endif

    ctx->pc = 0x1d1230u;

    // 0x1d1230: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x1d1230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    ctx->pc = 0x1d1234u;
}
