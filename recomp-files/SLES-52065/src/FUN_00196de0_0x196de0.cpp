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

// Function: FUN_00196de0
// Address: 0x196de0 - 0x196f08
void FUN_00196de0_0x196de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196de0_0x196de0");
#endif

    switch (ctx->pc) {
        case 0x196e18u: goto label_196e18;
        case 0x196e28u: goto label_196e28;
        case 0x196ed4u: goto label_196ed4;
        case 0x196ee4u: goto label_196ee4;
        default: break;
    }

    ctx->pc = 0x196de0u;

    // 0x196de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196de4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x196de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x196de8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196dec: 0x24a52980  addiu       $a1, $a1, 0x2980
    ctx->pc = 0x196decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10624));
    // 0x196df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196df4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196dfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e00: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x196e00u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212980u));
    // 0x196e04: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x196e04u;
    { uint32_t bits = FAST_READ32(0x212988u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196e08: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x196e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x196e0c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x196e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x196e10: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x196E10u;
    SET_GPR_U32(ctx, 31, 0x196E18u);
    ctx->pc = 0x196E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E10u;
    // 0x196e14: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x196E10u, 0x196E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E18u;
label_196e18:
    // 0x196e18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196E18u;
    {
        const bool branch_taken_0x196e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E18u;
        // 0x196e1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e18) {
            ctx->pc = 0x196E34u;
            goto label_196e34;
        }
    }
    ctx->pc = 0x196E20u;
    // 0x196e20: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x196E20u;
    SET_GPR_U32(ctx, 31, 0x196E28u);
    ctx->pc = 0x196E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E20u;
    // 0x196e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x196E20u, 0x196E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E28u;
label_196e28:
    // 0x196e28: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x196e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x196e2c: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
    // 0x196e30: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x196e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_196e34:
    // 0x196e34: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x196E34u;
    {
        const bool branch_taken_0x196e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e34) {
            ctx->pc = 0x196EECu;
            goto label_196eec;
        }
    }
    ctx->pc = 0x196E3Cu;
    // 0x196e3c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x196e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x196e44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196e48: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e50: 0x24a5d7a0  addiu       $a1, $a1, -0x2860
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956960));
    // 0x196e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e5c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x196e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x196e60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e64: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e68: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x196e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x196e6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196e70: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x196e74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196e7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196e80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x196e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x196e84: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e88: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x196e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e8c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x196e90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196e94: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x196e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x196e98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196ea0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196ea4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x196ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x196ea8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196eac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x196eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196eb0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x196eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196eb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x196eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196eb8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x196ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x196ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x196ec0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x196ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x196ec4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x196ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x196ec8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x196ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x196ecc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x196ECCu;
    SET_GPR_U32(ctx, 31, 0x196ED4u);
    ctx->pc = 0x196ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ECCu;
    // 0x196ed0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x196ECCu, 0x196ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196ED4u;
label_196ed4:
    // 0x196ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196edc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x196EDCu;
    SET_GPR_U32(ctx, 31, 0x196EE4u);
    ctx->pc = 0x196EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EDCu;
    // 0x196ee0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x196EDCu, 0x196EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EE4u;
label_196ee4:
    // 0x196ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196EE4u;
    {
        const bool branch_taken_0x196ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EE4u;
        // 0x196ee8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ee4) {
            ctx->pc = 0x196EF4u;
            goto label_196ef4;
        }
    }
    ctx->pc = 0x196EECu;
label_196eec:
    // 0x196eec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x196eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196ef4:
    // 0x196ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f00: 0x3e00008  jr          $ra
    ctx->pc = 0x196F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F00u;
        // 0x196f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F08u;
}
