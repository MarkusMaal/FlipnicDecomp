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

// Function: entry_00204dfc
// Address: 0x204dfc - 0x204e00
void entry_00204dfc_0x204dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204dfc_0x204dfc");
#endif

    ctx->pc = 0x204dfcu;

    // 0x204dfc: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    ctx->pc = 0x204e00u;
}
