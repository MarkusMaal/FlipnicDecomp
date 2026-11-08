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

// Function: entry_001433a8
// Address: 0x1433a8 - 0x1433c4
void entry_001433a8_0x1433a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001433a8_0x1433a8");
#endif

    ctx->pc = 0x1433a8u;

    // 0x1433a8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1433a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1433ac: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1433b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1433b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1433b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1433b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1433b8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1433bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1433bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1433c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1433c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1433c4u;
}
