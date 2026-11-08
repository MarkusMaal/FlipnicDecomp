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

// Function: entry_0019dccc
// Address: 0x19dccc - 0x19dcd0
void entry_0019dccc_0x19dccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dccc_0x19dccc");
#endif

    ctx->pc = 0x19dcccu;

    // 0x19dccc: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    ctx->pc = 0x19dcd0u;
}
