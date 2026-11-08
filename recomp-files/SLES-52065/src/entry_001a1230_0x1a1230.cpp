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

// Function: entry_001a1230
// Address: 0x1a1230 - 0x1a1238
void entry_001a1230_0x1a1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1230_0x1a1230");
#endif

    ctx->pc = 0x1a1230u;

    // 0x1a1230: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a1234: 0xae8206ac  sw          $v0, 0x6AC($s4)
    ctx->pc = 0x1a1234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 2));
    ctx->pc = 0x1a1238u;
}
