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

// Function: entry_0011ddfc
// Address: 0x11ddfc - 0x11de00
void entry_0011ddfc_0x11ddfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ddfc_0x11ddfc");
#endif

    ctx->pc = 0x11ddfcu;

    // 0x11ddfc: 0xae4203e8  sw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
    ctx->pc = 0x11de00u;
}
