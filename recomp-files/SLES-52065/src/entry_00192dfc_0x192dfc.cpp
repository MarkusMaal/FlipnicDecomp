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

// Function: entry_00192dfc
// Address: 0x192dfc - 0x192e00
void entry_00192dfc_0x192dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192dfc_0x192dfc");
#endif

    ctx->pc = 0x192dfcu;

    // 0x192dfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x192dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x192e00u;
}
