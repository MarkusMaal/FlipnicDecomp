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

// Function: entry_0020880c
// Address: 0x20880c - 0x208814
void entry_0020880c_0x20880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020880c_0x20880c");
#endif

    ctx->pc = 0x20880cu;

    // 0x20880c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x208810: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x208810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x208814u;
}
