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

// Function: entry_001d1aa8
// Address: 0x1d1aa8 - 0x1d1abc
void entry_001d1aa8_0x1d1aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1aa8_0x1d1aa8");
#endif

    ctx->pc = 0x1d1aa8u;

    // 0x1d1aa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1ab4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1ab8: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    ctx->pc = 0x1d1abcu;
}
