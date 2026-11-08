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

// Function: entry_001496d8
// Address: 0x1496d8 - 0x149710
void entry_001496d8_0x1496d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001496d8_0x1496d8");
#endif

    switch (ctx->pc) {
        case 0x1496f0u: goto label_1496f0;
        default: break;
    }

    ctx->pc = 0x1496d8u;

    // 0x1496d8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1496d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1496dc: 0x0  nop
    ctx->pc = 0x1496dcu;
    // NOP
    // 0x1496e0: 0x0  nop
    ctx->pc = 0x1496e0u;
    // NOP
    // 0x1496e4: 0x2812  mflo        $a1
    ctx->pc = 0x1496e4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1496e8: 0xc050184  jal         func_140610
    ctx->pc = 0x1496E8u;
    SET_GPR_U32(ctx, 31, 0x1496F0u);
    ctx->pc = 0x1496ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496E8u;
    // 0x1496ec: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x1496E8u, 0x1496F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496F0u;
label_1496f0:
    // 0x1496f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1496f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1496f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1496f8: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x1496f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1496fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1496fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149700: 0x0  nop
    ctx->pc = 0x149700u;
    // NOP
    // 0x149704: 0x1010  mfhi        $v0
    ctx->pc = 0x149704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x149708: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14970c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x14970cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x149710u;
}
