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

// Function: FUN_001932b0
// Address: 0x1932b0 - 0x1932c8
void FUN_001932b0_0x1932b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001932b0_0x1932b0");
#endif

    ctx->pc = 0x1932b0u;

    // 0x1932b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1932b4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1932b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932bc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1932c0: 0x8042118  j           func_108460
    ctx->pc = 0x1932C0u;
    ctx->pc = 0x1932C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932C0u;
    // 0x1932c4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    FUN_00108460_0x108460(rdram, ctx, runtime); return;
    ctx->pc = 0x1932C8u;
}
