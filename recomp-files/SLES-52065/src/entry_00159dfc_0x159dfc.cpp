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

// Function: entry_00159dfc
// Address: 0x159dfc - 0x159e00
void entry_00159dfc_0x159dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159dfc_0x159dfc");
#endif

    ctx->pc = 0x159dfcu;

    // 0x159dfc: 0x8e03033c  lw          $v1, 0x33C($s0)
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    ctx->pc = 0x159e00u;
}
