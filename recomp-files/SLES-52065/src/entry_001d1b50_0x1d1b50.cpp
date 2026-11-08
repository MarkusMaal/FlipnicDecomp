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

// Function: entry_001d1b50
// Address: 0x1d1b50 - 0x1d1b64
void entry_001d1b50_0x1d1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b50_0x1d1b50");
#endif

    ctx->pc = 0x1d1b50u;

    // 0x1d1b50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1b5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1b60: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    ctx->pc = 0x1d1b64u;
}
