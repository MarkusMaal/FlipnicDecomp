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

// Function: entry_0020248c
// Address: 0x20248c - 0x202498
void entry_0020248c_0x20248c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020248c_0x20248c");
#endif

    ctx->pc = 0x20248cu;

    // 0x20248c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x202490: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x202490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202494: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    ctx->pc = 0x202498u;
}
