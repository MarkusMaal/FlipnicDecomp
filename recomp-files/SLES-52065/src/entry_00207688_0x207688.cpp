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

// Function: entry_00207688
// Address: 0x207688 - 0x207690
void entry_00207688_0x207688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207688_0x207688");
#endif

    ctx->pc = 0x207688u;

    // 0x207688: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x207688u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20768c: 0x0  nop
    ctx->pc = 0x20768cu;
    // NOP
    ctx->pc = 0x207690u;
}
