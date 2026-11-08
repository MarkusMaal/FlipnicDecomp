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

// Function: entry_0017f20c
// Address: 0x17f20c - 0x17f214
void entry_0017f20c_0x17f20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f20c_0x17f20c");
#endif

    ctx->pc = 0x17f20cu;

    // 0x17f20c: 0x0  nop
    ctx->pc = 0x17f20cu;
    // NOP
    // 0x17f210: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f214u;
}
