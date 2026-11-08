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

// Function: entry_001de938
// Address: 0x1de938 - 0x1de948
void entry_001de938_0x1de938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de938_0x1de938");
#endif

    ctx->pc = 0x1de938u;

    // 0x1de938: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1de938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x1de93c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de940: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de944: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1de948u;
}
