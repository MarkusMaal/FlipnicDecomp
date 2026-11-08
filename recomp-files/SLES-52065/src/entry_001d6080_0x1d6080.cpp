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

// Function: entry_001d6080
// Address: 0x1d6080 - 0x1d60e0
void entry_001d6080_0x1d6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6080_0x1d6080");
#endif

    switch (ctx->pc) {
        case 0x1d60c4u: goto label_1d60c4;
        default: break;
    }

    ctx->pc = 0x1d6080u;

    // 0x1d6080: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6084: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d6084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6088: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d608c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6090: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1d6094: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6098: 0x26a30558  addiu       $v1, $s5, 0x558
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1368));
    // 0x1d609c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d60a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d60a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d60a8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d60ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d60acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d60b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b4: 0xac5302b0  sw          $s3, 0x2B0($v0)
    ctx->pc = 0x1d60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 19));
    // 0x1d60b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60bc: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D60BCu;
    SET_GPR_U32(ctx, 31, 0x1D60C4u);
    ctx->pc = 0x1D60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60BCu;
    // 0x1d60c0: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D60BCu, 0x1D60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60C4u;
label_1d60c4:
    // 0x1d60c4: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1D60C4u;
    {
        const bool branch_taken_0x1d60c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60C4u;
        // 0x1d60c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60c4) {
            ctx->pc = 0x1D6100u;
            return;
        }
    }
    ctx->pc = 0x1D60CCu;
    // 0x1d60cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d60ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d60d0: 0x6000021  bltz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D60D0u;
    {
        const bool branch_taken_0x1d60d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60D0u;
        // 0x1d60d4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60d0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D60D8u;
    // 0x1d60d8: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d60dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d60e0u;
}
