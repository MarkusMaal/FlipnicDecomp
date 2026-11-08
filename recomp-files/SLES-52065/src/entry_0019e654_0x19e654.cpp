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

// Function: entry_0019e654
// Address: 0x19e654 - 0x19e65c
void entry_0019e654_0x19e654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e654_0x19e654");
#endif

    ctx->pc = 0x19e654u;

    // 0x19e654: 0x0  nop
    ctx->pc = 0x19e654u;
    // NOP
    // 0x19e658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19e65cu;
}
