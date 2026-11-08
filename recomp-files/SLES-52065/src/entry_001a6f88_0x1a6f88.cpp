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

// Function: entry_001a6f88
// Address: 0x1a6f88 - 0x1a6f90
void entry_001a6f88_0x1a6f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f88_0x1a6f88");
#endif

    ctx->pc = 0x1a6f88u;

    // 0x1a6f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6f8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1a6f90u;
}
