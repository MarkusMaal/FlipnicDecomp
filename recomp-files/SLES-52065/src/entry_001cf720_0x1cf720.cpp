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

// Function: entry_001cf720
// Address: 0x1cf720 - 0x1cf724
void entry_001cf720_0x1cf720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf720_0x1cf720");
#endif

    ctx->pc = 0x1cf720u;

    // 0x1cf720: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cf720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x1cf724u;
}
