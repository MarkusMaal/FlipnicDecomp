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

// Function: entry_0011d5a8
// Address: 0x11d5a8 - 0x11d5ac
void entry_0011d5a8_0x11d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d5a8_0x11d5a8");
#endif

    ctx->pc = 0x11d5a8u;

    // 0x11d5a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x11d5acu;
}
