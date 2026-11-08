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

// Function: entry_0018cdfc
// Address: 0x18cdfc - 0x18ce04
void entry_0018cdfc_0x18cdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cdfc_0x18cdfc");
#endif

    ctx->pc = 0x18cdfcu;

    // 0x18cdfc: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x18cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x18ce00: 0x0  nop
    ctx->pc = 0x18ce00u;
    // NOP
    ctx->pc = 0x18ce04u;
}
