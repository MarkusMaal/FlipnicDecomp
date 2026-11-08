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

// Function: FUN_0014f150
// Address: 0x14f150 - 0x14f16c
void FUN_0014f150_0x14f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f150_0x14f150");
#endif

    ctx->pc = 0x14f150u;

    // 0x14f150: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14f154: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f158: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14f158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x14f15c: 0x24427220  addiu       $v0, $v0, 0x7220
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29216));
    // 0x14f160: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x14f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f164: 0x8053c64  j           func_14F190
    ctx->pc = 0x14F164u;
    ctx->pc = 0x14F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F164u;
    // 0x14f168: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F190u;
    FUN_0014f190_0x14f190(rdram, ctx, runtime); return;
    ctx->pc = 0x14F16Cu;
}
