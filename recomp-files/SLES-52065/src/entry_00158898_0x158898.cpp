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

// Function: entry_00158898
// Address: 0x158898 - 0x1588a0
void entry_00158898_0x158898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158898_0x158898");
#endif

    ctx->pc = 0x158898u;

    // 0x158898: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x158898u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15889c: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x15889cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    ctx->pc = 0x1588a0u;
}
