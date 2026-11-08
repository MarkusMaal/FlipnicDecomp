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

// Function: entry_0020b2d8
// Address: 0x20b2d8 - 0x20b2dc
void entry_0020b2d8_0x20b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b2d8_0x20b2d8");
#endif

    ctx->pc = 0x20b2d8u;

    // 0x20b2d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20b2d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x20b2dcu;
}
