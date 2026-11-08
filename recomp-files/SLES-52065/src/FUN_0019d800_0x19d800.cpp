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

// Function: FUN_0019d800
// Address: 0x19d800 - 0x19d928
void FUN_0019d800_0x19d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d800_0x19d800");
#endif

    switch (ctx->pc) {
        case 0x19d838u: goto label_19d838;
        case 0x19d848u: goto label_19d848;
        case 0x19d8f4u: goto label_19d8f4;
        case 0x19d904u: goto label_19d904;
        default: break;
    }

    ctx->pc = 0x19d800u;

    // 0x19d800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d804: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19d804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19d808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d80c: 0x24a52a50  addiu       $a1, $a1, 0x2A50
    ctx->pc = 0x19d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x19d810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d814: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d820: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19d820u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A50u));
    // 0x19d824: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19d824u;
    { uint32_t bits = FAST_READ32(0x212A58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d828: 0x240409c0  addiu       $a0, $zero, 0x9C0
    ctx->pc = 0x19d828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x19d82c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19d830: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19D830u;
    SET_GPR_U32(ctx, 31, 0x19D838u);
    ctx->pc = 0x19D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D830u;
    // 0x19d834: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19D830u, 0x19D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D838u;
label_19d838:
    // 0x19d838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D838u;
    {
        const bool branch_taken_0x19d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D838u;
        // 0x19d83c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d838) {
            ctx->pc = 0x19D854u;
            goto label_19d854;
        }
    }
    ctx->pc = 0x19D840u;
    // 0x19d840: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19D840u;
    SET_GPR_U32(ctx, 31, 0x19D848u);
    ctx->pc = 0x19D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D840u;
    // 0x19d844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19D840u, 0x19D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D848u;
label_19d848:
    // 0x19d848: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19d84c: 0x2442b320  addiu       $v0, $v0, -0x4CE0
    ctx->pc = 0x19d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x19d850: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19d854:
    // 0x19d854: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19D854u;
    {
        const bool branch_taken_0x19d854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d854) {
            ctx->pc = 0x19D90Cu;
            goto label_19d90c;
        }
    }
    ctx->pc = 0x19D85Cu;
    // 0x19d85c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19d860: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19d864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19d864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d868: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d870: 0x24a5db20  addiu       $a1, $a1, -0x24E0
    ctx->pc = 0x19d870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
    // 0x19d874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d878: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19d87c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19d880: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19d884: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19d884u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d888: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19d888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19d88c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19d890: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19d890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19d894: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19d894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19d898: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19d898u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19d89c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19d8a0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19d8a4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19d8a8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19d8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d8ac: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19d8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19d8b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19d8b4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19d8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19d8b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19d8bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19d8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19d8c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19d8c4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19d8c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19d8cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19d8d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d8d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19d8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d8d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19d8dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19d8e0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19d8e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19d8e4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19d8e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19d8e8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19d8ec: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19D8ECu;
    SET_GPR_U32(ctx, 31, 0x19D8F4u);
    ctx->pc = 0x19D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8ECu;
    // 0x19d8f0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19D8ECu, 0x19D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D8F4u;
label_19d8f4:
    // 0x19d8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8fc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19D8FCu;
    SET_GPR_U32(ctx, 31, 0x19D904u);
    ctx->pc = 0x19D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D8FCu;
    // 0x19d900: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19D8FCu, 0x19D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D904u;
label_19d904:
    // 0x19d904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19D904u;
    {
        const bool branch_taken_0x19d904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D904u;
        // 0x19d908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d904) {
            ctx->pc = 0x19D914u;
            goto label_19d914;
        }
    }
    ctx->pc = 0x19D90Cu;
label_19d90c:
    // 0x19d90c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d914:
    // 0x19d914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d920: 0x3e00008  jr          $ra
    ctx->pc = 0x19D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D920u;
        // 0x19d924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D928u;
}
