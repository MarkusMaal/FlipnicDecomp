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

// Function: entry_001e7e90
// Address: 0x1e7e90 - 0x1e7e98
void entry_001e7e90_0x1e7e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e90_0x1e7e90");
#endif

    ctx->pc = 0x1e7e90u;

    // 0x1e7e90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7e94: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x1e7e94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1e7e98u;
}
