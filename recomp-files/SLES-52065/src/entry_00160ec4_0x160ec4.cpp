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

// Function: entry_00160ec4
// Address: 0x160ec4 - 0x160ecc
void entry_00160ec4_0x160ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ec4_0x160ec4");
#endif

    ctx->pc = 0x160ec4u;

    // 0x160ec4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160ec8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160eccu;
}
