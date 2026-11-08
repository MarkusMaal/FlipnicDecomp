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

// Function: entry_001d9150
// Address: 0x1d9150 - 0x1d9170
void entry_001d9150_0x1d9150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9150_0x1d9150");
#endif

    ctx->pc = 0x1d9150u;

    // 0x1d9150: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1d9154: 0x244b70c0  addiu       $t3, $v0, 0x70C0
    ctx->pc = 0x1d9154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 28864));
    // 0x1d9158: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d915c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d9160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9164: 0x258a66c0  addiu       $t2, $t4, 0x66C0
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 26304));
    // 0x1d9168: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1d9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d916c: 0x0  nop
    ctx->pc = 0x1d916cu;
    // NOP
    ctx->pc = 0x1d9170u;
}
