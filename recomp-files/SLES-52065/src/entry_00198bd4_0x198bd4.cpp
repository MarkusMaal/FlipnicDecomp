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

// Function: entry_00198bd4
// Address: 0x198bd4 - 0x198bdc
void entry_00198bd4_0x198bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198bd4_0x198bd4");
#endif

    ctx->pc = 0x198bd4u;

    // 0x198bd4: 0x0  nop
    ctx->pc = 0x198bd4u;
    // NOP
    // 0x198bd8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198bdcu;
}
