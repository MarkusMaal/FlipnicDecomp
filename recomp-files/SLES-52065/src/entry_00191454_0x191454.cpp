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

// Function: entry_00191454
// Address: 0x191454 - 0x19145c
void entry_00191454_0x191454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191454_0x191454");
#endif

    ctx->pc = 0x191454u;

    // 0x191454: 0x0  nop
    ctx->pc = 0x191454u;
    // NOP
    // 0x191458: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19145cu;
}
