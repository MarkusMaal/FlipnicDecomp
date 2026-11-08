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

// Function: entry_001fd370
// Address: 0x1fd370 - 0x1fd374
void entry_001fd370_0x1fd370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd370_0x1fd370");
#endif

    ctx->pc = 0x1fd370u;

    // 0x1fd370: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1fd374u;
}
