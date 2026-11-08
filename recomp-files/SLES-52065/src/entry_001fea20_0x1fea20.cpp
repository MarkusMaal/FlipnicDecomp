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

// Function: entry_001fea20
// Address: 0x1fea20 - 0x1fea24
void entry_001fea20_0x1fea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fea20_0x1fea20");
#endif

    ctx->pc = 0x1fea20u;

    // 0x1fea20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x1fea24u;
}
