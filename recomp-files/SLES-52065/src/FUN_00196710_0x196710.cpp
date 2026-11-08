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

// Function: FUN_00196710
// Address: 0x196710 - 0x196838
void FUN_00196710_0x196710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196710_0x196710");
#endif

    switch (ctx->pc) {
        case 0x196748u: goto label_196748;
        case 0x196758u: goto label_196758;
        case 0x196804u: goto label_196804;
        case 0x196814u: goto label_196814;
        default: break;
    }

    ctx->pc = 0x196710u;

    // 0x196710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196714: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x196718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19671c: 0x24a52970  addiu       $a1, $a1, 0x2970
    ctx->pc = 0x19671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
    // 0x196720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196724: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19672c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196730: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x196730u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212970u));
    // 0x196734: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x196734u;
    { uint32_t bits = FAST_READ32(0x212978u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196738: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x196738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19673c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19673cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x196740: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x196740u;
    SET_GPR_U32(ctx, 31, 0x196748u);
    ctx->pc = 0x196744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196740u;
    // 0x196744: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x196740u, 0x196748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196748u;
label_196748:
    // 0x196748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196748u;
    {
        const bool branch_taken_0x196748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196748) {
            ctx->pc = 0x196764u;
            goto label_196764;
        }
    }
    ctx->pc = 0x196750u;
    // 0x196750: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x196750u;
    SET_GPR_U32(ctx, 31, 0x196758u);
    ctx->pc = 0x196754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196750u;
    // 0x196754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x196750u, 0x196758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196758u;
label_196758:
    // 0x196758: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19675c: 0x2442b2a0  addiu       $v0, $v0, -0x4D60
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947488));
    // 0x196760: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x196760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_196764:
    // 0x196764: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x196764u;
    {
        const bool branch_taken_0x196764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x196764) {
            ctx->pc = 0x19681Cu;
            goto label_19681c;
        }
    }
    ctx->pc = 0x19676Cu;
    // 0x19676c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196770: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x196774: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196778: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19677c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196780: 0x24a5d760  addiu       $a1, $a1, -0x28A0
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
    // 0x196784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196788: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19678c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19678cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x196790: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196794: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196798: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19679c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1967a0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1967a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1967a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1967a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1967ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1967b0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1967b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1967b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1967b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1967b8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1967b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1967bc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1967bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1967c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1967c4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1967c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1967c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1967c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1967cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1967d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1967d4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1967d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1967d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1967d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1967dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1967dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1967e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1967e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1967e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1967e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1967e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1967ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1967f0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1967f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1967f4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1967f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1967f8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1967f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1967fc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1967FCu;
    SET_GPR_U32(ctx, 31, 0x196804u);
    ctx->pc = 0x196800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967FCu;
    // 0x196800: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1967FCu, 0x196804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196804u;
label_196804:
    // 0x196804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19680c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19680Cu;
    SET_GPR_U32(ctx, 31, 0x196814u);
    ctx->pc = 0x196810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19680Cu;
    // 0x196810: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19680Cu, 0x196814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196814u;
label_196814:
    // 0x196814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196814u;
    {
        const bool branch_taken_0x196814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196814u;
        // 0x196818: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196814) {
            ctx->pc = 0x196824u;
            goto label_196824;
        }
    }
    ctx->pc = 0x19681Cu;
label_19681c:
    // 0x19681c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196820: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196824:
    // 0x196824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19682c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19682cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196830: 0x3e00008  jr          $ra
    ctx->pc = 0x196830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196830u;
        // 0x196834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196838u;
}
