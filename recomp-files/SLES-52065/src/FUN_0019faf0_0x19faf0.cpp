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

// Function: FUN_0019faf0
// Address: 0x19faf0 - 0x19fc18
void FUN_0019faf0_0x19faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019faf0_0x19faf0");
#endif

    switch (ctx->pc) {
        case 0x19fb28u: goto label_19fb28;
        case 0x19fb38u: goto label_19fb38;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbf4u: goto label_19fbf4;
        default: break;
    }

    ctx->pc = 0x19faf0u;

    // 0x19faf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19faf4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19faf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19faf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fafc: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x19fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
    // 0x19fb00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fb04: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19fb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fb0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb10: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19fb10u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A80u));
    // 0x19fb14: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19fb14u;
    { uint32_t bits = FAST_READ32(0x212A88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fb18: 0x240406b0  addiu       $a0, $zero, 0x6B0
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x19fb1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19fb20: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19FB20u;
    SET_GPR_U32(ctx, 31, 0x19FB28u);
    ctx->pc = 0x19FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB20u;
    // 0x19fb24: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19FB20u, 0x19FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB28u;
label_19fb28:
    // 0x19fb28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB28u;
    {
        const bool branch_taken_0x19fb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB28u;
        // 0x19fb2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb28) {
            ctx->pc = 0x19FB44u;
            goto label_19fb44;
        }
    }
    ctx->pc = 0x19FB30u;
    // 0x19fb30: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19FB30u;
    SET_GPR_U32(ctx, 31, 0x19FB38u);
    ctx->pc = 0x19FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB30u;
    // 0x19fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19FB30u, 0x19FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB38u;
label_19fb38:
    // 0x19fb38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19fb3c: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x19fb40: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19fb44:
    // 0x19fb44: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19FB44u;
    {
        const bool branch_taken_0x19fb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb44) {
            ctx->pc = 0x19FBFCu;
            goto label_19fbfc;
        }
    }
    ctx->pc = 0x19FB4Cu;
    // 0x19fb4c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19fb54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fb58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19fb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb60: 0x24a5dc00  addiu       $a1, $a1, -0x2400
    ctx->pc = 0x19fb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958080));
    // 0x19fb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fb6c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19fb70: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb74: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb78: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19fb7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19fb80: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19fb84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fb88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19fb8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19fb90: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19fb94: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb98: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb9c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19fba0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19fba4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19fba8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fbac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19fbb0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19fbb4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19fbb8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fbbc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19fbc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fbc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fbc8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19fbcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19fbd0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19fbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19fbd4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19fbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19fbd8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19fbdc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19FBDCu;
    SET_GPR_U32(ctx, 31, 0x19FBE4u);
    ctx->pc = 0x19FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBDCu;
    // 0x19fbe0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19FBDCu, 0x19FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBE4u;
label_19fbe4:
    // 0x19fbe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19FBECu;
    SET_GPR_U32(ctx, 31, 0x19FBF4u);
    ctx->pc = 0x19FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBECu;
    // 0x19fbf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19FBECu, 0x19FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBF4u;
label_19fbf4:
    // 0x19fbf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FBF4u;
    {
        const bool branch_taken_0x19fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBF4u;
        // 0x19fbf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbf4) {
            ctx->pc = 0x19FC04u;
            goto label_19fc04;
        }
    }
    ctx->pc = 0x19FBFCu;
label_19fbfc:
    // 0x19fbfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19fbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19fc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc04:
    // 0x19fc04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC10u;
        // 0x19fc14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC18u;
}
