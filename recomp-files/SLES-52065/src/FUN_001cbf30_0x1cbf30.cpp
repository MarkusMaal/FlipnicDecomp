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

// Function: FUN_001cbf30
// Address: 0x1cbf30 - 0x1cbf6c
void FUN_001cbf30_0x1cbf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cbf30_0x1cbf30");
#endif

    ctx->pc = 0x1cbf30u;

    // 0x1cbf30: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbf34: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbf38: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbf3c: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cbf40: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1cbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbf44: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cbf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cbf48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cbf4c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cbf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cbf50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbf54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cbf58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cbf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cbf60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbf64: 0x8080702  j           func_201C08
    ctx->pc = 0x1CBF64u;
    ctx->pc = 0x1CBF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF64u;
    // 0x1cbf68: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    FUN_00201c08_0x201c08(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBF6Cu;
}
