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

// Function: entry_002084a8
// Address: 0x2084a8 - 0x2084ac
void entry_002084a8_0x2084a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002084a8_0x2084a8");
#endif

    ctx->pc = 0x2084a8u;

    // 0x2084a8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2084a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    ctx->pc = 0x2084acu;
}
