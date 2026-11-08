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

// Function: FUN_0019ae70
// Address: 0x19ae70 - 0x19af98
void FUN_0019ae70_0x19ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ae70_0x19ae70");
#endif

    switch (ctx->pc) {
        case 0x19aea8u: goto label_19aea8;
        case 0x19aeb8u: goto label_19aeb8;
        case 0x19af64u: goto label_19af64;
        case 0x19af74u: goto label_19af74;
        default: break;
    }

    ctx->pc = 0x19ae70u;

    // 0x19ae70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ae74: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19ae78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ae7c: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x19ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x19ae80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ae84: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ae88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ae8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ae8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae90: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19ae90u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A20u));
    // 0x19ae94: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19ae94u;
    { uint32_t bits = FAST_READ32(0x212A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ae98: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19ae9c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19aea0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19AEA0u;
    SET_GPR_U32(ctx, 31, 0x19AEA8u);
    ctx->pc = 0x19AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEA0u;
    // 0x19aea4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19AEA0u, 0x19AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEA8u;
label_19aea8:
    // 0x19aea8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AEA8u;
    {
        const bool branch_taken_0x19aea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA8u;
        // 0x19aeac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea8) {
            ctx->pc = 0x19AEC4u;
            goto label_19aec4;
        }
    }
    ctx->pc = 0x19AEB0u;
    // 0x19aeb0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19AEB0u;
    SET_GPR_U32(ctx, 31, 0x19AEB8u);
    ctx->pc = 0x19AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEB0u;
    // 0x19aeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19AEB0u, 0x19AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEB8u;
label_19aeb8:
    // 0x19aeb8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19aebc: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19aec0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19aec4:
    // 0x19aec4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19AEC4u;
    {
        const bool branch_taken_0x19aec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aec4) {
            ctx->pc = 0x19AF7Cu;
            goto label_19af7c;
        }
    }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aed0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19aed4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19aed8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19aedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aee0: 0x24a5da20  addiu       $a1, $a1, -0x25E0
    ctx->pc = 0x19aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
    // 0x19aee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19aeec: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19aef0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aef4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19aef8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19aefc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19af00: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19af00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19af04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19af08: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19af08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19af0c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19af10: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19af10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19af14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19af18: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19af18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19af1c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19af1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19af20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19af20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19af24: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19af24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19af28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19af2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19af2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19af30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19af34: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19af34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19af38: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19af3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19af40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19af44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19af44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19af48: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19af4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19af50: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19af50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19af54: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19af54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19af58: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19af58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19af5c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19AF5Cu;
    SET_GPR_U32(ctx, 31, 0x19AF64u);
    ctx->pc = 0x19AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF5Cu;
    // 0x19af60: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19AF5Cu, 0x19AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF64u;
label_19af64:
    // 0x19af64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19af68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af6c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19AF6Cu;
    SET_GPR_U32(ctx, 31, 0x19AF74u);
    ctx->pc = 0x19AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF6Cu;
    // 0x19af70: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19AF6Cu, 0x19AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF74u;
label_19af74:
    // 0x19af74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF74u;
    {
        const bool branch_taken_0x19af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF74u;
        // 0x19af78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af74) {
            ctx->pc = 0x19AF84u;
            goto label_19af84;
        }
    }
    ctx->pc = 0x19AF7Cu;
label_19af7c:
    // 0x19af7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19af84:
    // 0x19af84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19af84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19af88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19af88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19af8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19af8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af90: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF90u;
        // 0x19af94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF98u;
}
