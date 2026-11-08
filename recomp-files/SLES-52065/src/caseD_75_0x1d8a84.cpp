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

// Function: caseD_75
// Address: 0x1d8a84 - 0x1d8a88
void caseD_75_0x1d8a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_75_0x1d8a84");
#endif

    ctx->pc = 0x1d8a84u;

    // 0x1d8a84: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d8a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->pc = 0x1d8a88u;
}
