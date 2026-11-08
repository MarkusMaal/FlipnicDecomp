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

// Function: entry_0011dc78
// Address: 0x11dc78 - 0x11dc7c
void entry_0011dc78_0x11dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc78_0x11dc78");
#endif

    ctx->pc = 0x11dc78u;

    // 0x11dc78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x11dc7cu;
}
