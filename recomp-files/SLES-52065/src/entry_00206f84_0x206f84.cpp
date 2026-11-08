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

// Function: entry_00206f84
// Address: 0x206f84 - 0x206f88
void entry_00206f84_0x206f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206f84_0x206f84");
#endif

    ctx->pc = 0x206f84u;

    // 0x206f84: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x206f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
    ctx->pc = 0x206f88u;
}
