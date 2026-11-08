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

// Function: Unknown
// Address: 0x1b6838 - 0x1b683c
void Unknown_0x1b6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Unknown_0x1b6838");
#endif

    ctx->pc = 0x1b6838u;

    // 0x1b6838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b683cu;
}
