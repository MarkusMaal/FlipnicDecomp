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

// Function: FUN_001a3e20
// Address: 0x1a3e20 - 0x1a3f48
void FUN_001a3e20_0x1a3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3e20_0x1a3e20");
#endif

    switch (ctx->pc) {
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f24u: goto label_1a3f24;
        default: break;
    }

    ctx->pc = 0x1a3e20u;

    // 0x1a3e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a3e24: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a3e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a3e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3e2c: 0x24a52b38  addiu       $a1, $a1, 0x2B38
    ctx->pc = 0x1a3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11064));
    // 0x1a3e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3e34: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e40: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a3e40u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212B38u));
    // 0x1a3e44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a3e44u;
    { uint32_t bits = FAST_READ32(0x212B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3e48: 0x240407d0  addiu       $a0, $zero, 0x7D0
    ctx->pc = 0x1a3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1a3e4c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a3e50: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A3E50u;
    SET_GPR_U32(ctx, 31, 0x1A3E58u);
    ctx->pc = 0x1A3E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E50u;
    // 0x1a3e54: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A3E50u, 0x1A3E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E58u;
label_1a3e58:
    // 0x1a3e58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3E58u;
    {
        const bool branch_taken_0x1a3e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E58u;
        // 0x1a3e5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e58) {
            ctx->pc = 0x1A3E74u;
            goto label_1a3e74;
        }
    }
    ctx->pc = 0x1A3E60u;
    // 0x1a3e60: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A3E60u;
    SET_GPR_U32(ctx, 31, 0x1A3E68u);
    ctx->pc = 0x1A3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E60u;
    // 0x1a3e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A3E60u, 0x1A3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E68u;
label_1a3e68:
    // 0x1a3e68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a3e6c: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x1a3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x1a3e70: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a3e74:
    // 0x1a3e74: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A3E74u;
    {
        const bool branch_taken_0x1a3e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e74) {
            ctx->pc = 0x1A3F2Cu;
            goto label_1a3f2c;
        }
    }
    ctx->pc = 0x1A3E7Cu;
    // 0x1a3e7c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a3e80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a3e84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a3e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3e88: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e90: 0x24a5de80  addiu       $a1, $a1, -0x2180
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x1a3e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3e98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3e9c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a3ea0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a3ea4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a3ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3ea8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a3eac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a3eb0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a3eb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3eb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3ebc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a3ec0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a3ec4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a3ec8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a3ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3ecc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a3eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a3ed0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a3ed4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a3ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a3ed8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a3edc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a3edcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a3ee0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a3ee4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a3ee8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a3eec: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a3eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3ef0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a3ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3ef4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a3ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3ef8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a3efc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a3f00: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a3f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a3f04: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a3f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a3f08: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a3f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a3f0c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F14u);
    ctx->pc = 0x1A3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F0Cu;
    // 0x1a3f10: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A3F0Cu, 0x1A3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F14u;
label_1a3f14:
    // 0x1a3f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f1c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F24u);
    ctx->pc = 0x1A3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F1Cu;
    // 0x1a3f20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A3F1Cu, 0x1A3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F24u;
label_1a3f24:
    // 0x1a3f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3F24u;
    {
        const bool branch_taken_0x1a3f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F24u;
        // 0x1a3f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f24) {
            ctx->pc = 0x1A3F34u;
            goto label_1a3f34;
        }
    }
    ctx->pc = 0x1A3F2Cu;
label_1a3f2c:
    // 0x1a3f2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a3f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f34:
    // 0x1a3f34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F40u;
        // 0x1a3f44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F48u;
}
