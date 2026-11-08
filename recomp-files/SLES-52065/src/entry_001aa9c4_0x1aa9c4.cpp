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

// Function: entry_001aa9c4
// Address: 0x1aa9c4 - 0x1aa9c8
void entry_001aa9c4_0x1aa9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa9c4_0x1aa9c4");
#endif

    ctx->pc = 0x1aa9c4u;

    // 0x1aa9c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1aa9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x1aa9c8u;
}
