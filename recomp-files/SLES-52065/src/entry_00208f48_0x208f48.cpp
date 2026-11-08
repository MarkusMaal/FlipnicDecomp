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

// Function: entry_00208f48
// Address: 0x208f48 - 0x208f54
void entry_00208f48_0x208f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f48_0x208f48");
#endif

    ctx->pc = 0x208f48u;

    // 0x208f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208f4c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x208f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x208f50: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x208f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x208f54u;
}
