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

// Function: entry_001d1938
// Address: 0x1d1938 - 0x1d194c
void entry_001d1938_0x1d1938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1938_0x1d1938");
#endif

    ctx->pc = 0x1d1938u;

    // 0x1d1938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d1938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d193c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1940: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1948: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d1948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    ctx->pc = 0x1d194cu;
}
