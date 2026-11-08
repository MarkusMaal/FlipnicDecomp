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

// Function: entry_00208b8c
// Address: 0x208b8c - 0x208b94
void entry_00208b8c_0x208b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208b8c_0x208b8c");
#endif

    ctx->pc = 0x208b8cu;

    // 0x208b8c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x208b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208b90: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x208b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x208b94u;
}
