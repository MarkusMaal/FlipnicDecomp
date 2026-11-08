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

// Function: entry_0021ad30
// Address: 0x21ad30 - 0x21ad34
void entry_0021ad30_0x21ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ad30_0x21ad30");
#endif

    ctx->pc = 0x21ad30u;

    // 0x21ad30: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x21ad30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
    ctx->pc = 0x21ad34u;
}
