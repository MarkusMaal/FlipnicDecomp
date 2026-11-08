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

// Function: entry_00179924
// Address: 0x179924 - 0x179930
void entry_00179924_0x179924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179924_0x179924");
#endif

    ctx->pc = 0x179924u;

    // 0x179924: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x179924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x179928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17992c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x17992cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x179930u;
}
