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

// Function: FUN_00118590
// Address: 0x118590 - 0x118668
void FUN_00118590_0x118590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118590_0x118590");
#endif

    switch (ctx->pc) {
        case 0x1185c0u: goto label_1185c0;
        case 0x118600u: goto label_118600;
        case 0x118628u: goto label_118628;
        case 0x118634u: goto label_118634;
        default: break;
    }

    ctx->pc = 0x118590u;

    // 0x118590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x118594: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11859c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1185a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1185a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1185a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1185a8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1185a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1185ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1185acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1185b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1185b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185b4: 0x24a5e5e0  addiu       $a1, $a1, -0x1A20
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960608));
    // 0x1185b8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1185B8u;
    SET_GPR_U32(ctx, 31, 0x1185C0u);
    ctx->pc = 0x1185BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1185B8u;
    // 0x1185bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1185B8u, 0x1185C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1185C0u;
label_1185c0:
    // 0x1185c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1185c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185c4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1185C4u;
    {
        const bool branch_taken_0x1185c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1185c4) {
            ctx->pc = 0x118648u;
            goto label_118648;
        }
    }
    ctx->pc = 0x1185CCu;
    // 0x1185cc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1185CCu;
    {
        const bool branch_taken_0x1185cc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1185D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185CCu;
        // 0x1185d0: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185cc) {
            ctx->pc = 0x1185DCu;
            goto label_1185dc;
        }
    }
    ctx->pc = 0x1185D4u;
    // 0x1185d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1185D4u;
    {
        const bool branch_taken_0x1185d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185D4u;
        // 0x1185d8: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185d4) {
            ctx->pc = 0x1185F8u;
            goto label_1185f8;
        }
    }
    ctx->pc = 0x1185DCu;
label_1185dc:
    // 0x1185dc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1185dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1185e0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1185e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1185e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1185e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1185ec: 0x84720008  lh          $s2, 0x8($v1)
    ctx->pc = 0x1185ecu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1185f0: 0x0  nop
    ctx->pc = 0x1185f0u;
    // NOP
    // 0x1185f4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1185f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1185f8:
    // 0x1185f8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1185F8u;
    {
        const bool branch_taken_0x1185f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1185FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1185F8u;
        // 0x1185fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185f8) {
            ctx->pc = 0x118644u;
            goto label_118644;
        }
    }
    ctx->pc = 0x118600u;
label_118600:
    // 0x118600: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x118604: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x118604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x118608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x118608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11860c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118610: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118614: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x118614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x118618: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x118618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11861c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x11861cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118620: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118620u;
    SET_GPR_U32(ctx, 31, 0x118628u);
    ctx->pc = 0x118624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118620u;
    // 0x118624: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118620u, 0x118628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118628u;
label_118628:
    // 0x118628: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11862c: 0xc062cb4  jal         func_18B2D0
    ctx->pc = 0x11862Cu;
    SET_GPR_U32(ctx, 31, 0x118634u);
    ctx->pc = 0x118630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11862Cu;
    // 0x118630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2D0u, 0x11862Cu, 0x118634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118634u;
label_118634:
    // 0x118634: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118638: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x118638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11863c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11863Cu;
    {
        const bool branch_taken_0x11863c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11863c) {
            ctx->pc = 0x118600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118600;
        }
    }
    ctx->pc = 0x118644u;
label_118644:
    // 0x118644: 0x0  nop
    ctx->pc = 0x118644u;
    // NOP
label_118648:
    // 0x118648: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11864c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11864cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118650: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11865c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11865cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118660: 0x3e00008  jr          $ra
    ctx->pc = 0x118660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118660u;
        // 0x118664: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118668u;
}
