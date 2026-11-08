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

// Function: entry_00207bd8
// Address: 0x207bd8 - 0x207bdc
void entry_00207bd8_0x207bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207bd8_0x207bd8");
#endif

    ctx->pc = 0x207bd8u;

    // 0x207bd8: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x207bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
    ctx->pc = 0x207bdcu;
}
