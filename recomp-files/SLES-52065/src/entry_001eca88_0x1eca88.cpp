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

// Function: entry_001eca88
// Address: 0x1eca88 - 0x1eca8c
void entry_001eca88_0x1eca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca88_0x1eca88");
#endif

    ctx->pc = 0x1eca88u;

    // 0x1eca88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eca88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1eca8cu;
}
