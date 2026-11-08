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

// Function: FUN_0013e160
// Address: 0x13e160 - 0x13e244
void FUN_0013e160_0x13e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e160_0x13e160");
#endif

    switch (ctx->pc) {
        case 0x13e198u: goto label_13e198;
        case 0x13e1a0u: goto label_13e1a0;
        default: break;
    }

    ctx->pc = 0x13e160u;

    // 0x13e160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13e168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e16c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13e178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e17c: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x13e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x13e180: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x13E180u;
    {
        const bool branch_taken_0x13e180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E180u;
        // 0x13e184: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e180) {
            ctx->pc = 0x13E210u;
            goto label_13e210;
        }
    }
    ctx->pc = 0x13E188u;
    // 0x13e188: 0x264401bc  addiu       $a0, $s2, 0x1BC
    ctx->pc = 0x13e188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x13e18c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x13e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13e190: 0xc0484a8  jal         func_1212A0
    ctx->pc = 0x13E190u;
    SET_GPR_U32(ctx, 31, 0x13E198u);
    ctx->pc = 0x13E194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E190u;
    // 0x13e194: 0x27868098  addiu       $a2, $gp, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212A0u, 0x13E190u, 0x13E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E198u;
label_13e198:
    // 0x13e198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e19c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e1a0:
    // 0x13e1a0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x13e1a8: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x13e1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e1ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13e1b4: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1b8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1bc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13e1c0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1c4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13e1cc: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1d4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13e1d8: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1dc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1e0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x13e1e4: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1ec: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x13e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x13e1f0: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e1f4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e1f8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x13e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x13e1fc: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e200: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13e204: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x13e204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13e208: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x13E208u;
    {
        const bool branch_taken_0x13e208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E208u;
        // 0x13e20c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e208) {
            ctx->pc = 0x13E1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e1a0;
        }
    }
    ctx->pc = 0x13E210u;
label_13e210:
    // 0x13e210: 0x8e4301c4  lw          $v1, 0x1C4($s2)
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e214: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e218: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e220: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E220u;
    {
        const bool branch_taken_0x13e220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e220) {
            ctx->pc = 0x13E22Cu;
            goto label_13e22c;
        }
    }
    ctx->pc = 0x13E228u;
    // 0x13e228: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x13e228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_13e22c:
    // 0x13e22c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13e22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e23c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E23Cu;
        // 0x13e240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E244u;
}
