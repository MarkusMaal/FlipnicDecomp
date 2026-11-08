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

// Function: entry_001fbe0c
// Address: 0x1fbe0c - 0x1fbe10
void entry_001fbe0c_0x1fbe0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbe0c_0x1fbe0c");
#endif

    ctx->pc = 0x1fbe0cu;

    // 0x1fbe0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fbe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1fbe10u;
}
