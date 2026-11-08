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

// Function: entry_0017edd4
// Address: 0x17edd4 - 0x17eddc
void entry_0017edd4_0x17edd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edd4_0x17edd4");
#endif

    ctx->pc = 0x17edd4u;

    // 0x17edd4: 0x0  nop
    ctx->pc = 0x17edd4u;
    // NOP
    // 0x17edd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17eddcu;
}
