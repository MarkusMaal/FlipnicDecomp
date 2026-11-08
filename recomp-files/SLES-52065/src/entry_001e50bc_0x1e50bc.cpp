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

// Function: entry_001e50bc
// Address: 0x1e50bc - 0x1e50c0
void entry_001e50bc_0x1e50bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e50bc_0x1e50bc");
#endif

    ctx->pc = 0x1e50bcu;

    // 0x1e50bc: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    ctx->pc = 0x1e50c0u;
}
