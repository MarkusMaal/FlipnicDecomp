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

// Function: entry_00197b18
// Address: 0x197b18 - 0x197b1c
void entry_00197b18_0x197b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b18_0x197b18");
#endif

    ctx->pc = 0x197b18u;

    // 0x197b18: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    ctx->pc = 0x197b1cu;
}
