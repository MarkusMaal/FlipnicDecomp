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

// Function: FUN_0019e810
// Address: 0x19e810 - 0x19e938
void FUN_0019e810_0x19e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e810_0x19e810");
#endif

    switch (ctx->pc) {
        case 0x19e848u: goto label_19e848;
        case 0x19e858u: goto label_19e858;
        case 0x19e904u: goto label_19e904;
        case 0x19e914u: goto label_19e914;
        default: break;
    }

    ctx->pc = 0x19e810u;

    // 0x19e810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e814: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19e814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19e818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e81c: 0x24a52a70  addiu       $a1, $a1, 0x2A70
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
    // 0x19e820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e824: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e830: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19e830u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A70u));
    // 0x19e834: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19e834u;
    { uint32_t bits = FAST_READ32(0x212A78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e838: 0x24040a80  addiu       $a0, $zero, 0xA80
    ctx->pc = 0x19e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2688));
    // 0x19e83c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19e840: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19E840u;
    SET_GPR_U32(ctx, 31, 0x19E848u);
    ctx->pc = 0x19E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E840u;
    // 0x19e844: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19E840u, 0x19E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E848u;
label_19e848:
    // 0x19e848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E864u;
            goto label_19e864;
        }
    }
    ctx->pc = 0x19E850u;
    // 0x19e850: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19E850u;
    SET_GPR_U32(ctx, 31, 0x19E858u);
    ctx->pc = 0x19E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E850u;
    // 0x19e854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19E850u, 0x19E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E858u;
label_19e858:
    // 0x19e858: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19e85c: 0x2442b300  addiu       $v0, $v0, -0x4D00
    ctx->pc = 0x19e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
    // 0x19e860: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19e860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19e864:
    // 0x19e864: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19E864u;
    {
        const bool branch_taken_0x19e864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e864) {
            ctx->pc = 0x19E91Cu;
            goto label_19e91c;
        }
    }
    ctx->pc = 0x19E86Cu;
    // 0x19e86c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e870: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19e874: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e878: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e880: 0x24a5dba0  addiu       $a1, $a1, -0x2460
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957984));
    // 0x19e884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e888: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e88c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19e890: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e894: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e898: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19e898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19e89c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19e8a0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19e8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19e8a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e8a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19e8ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19e8b0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19e8b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e8b8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19e8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19e8bc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19e8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19e8c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19e8c4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19e8c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19e8cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19e8d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19e8d4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19e8d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19e8dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19e8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19e8e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19e8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e8e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e8e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19e8ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19e8f0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19e8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19e8f4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19e8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19e8f8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19e8fc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19E8FCu;
    SET_GPR_U32(ctx, 31, 0x19E904u);
    ctx->pc = 0x19E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8FCu;
    // 0x19e900: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19E8FCu, 0x19E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E904u;
label_19e904:
    // 0x19e904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e90c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19E90Cu;
    SET_GPR_U32(ctx, 31, 0x19E914u);
    ctx->pc = 0x19E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E90Cu;
    // 0x19e910: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19E90Cu, 0x19E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E914u;
label_19e914:
    // 0x19e914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E914u;
    {
        const bool branch_taken_0x19e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E914u;
        // 0x19e918: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e914) {
            ctx->pc = 0x19E924u;
            goto label_19e924;
        }
    }
    ctx->pc = 0x19E91Cu;
label_19e91c:
    // 0x19e91c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e924:
    // 0x19e924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19e924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e930: 0x3e00008  jr          $ra
    ctx->pc = 0x19E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E930u;
        // 0x19e934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E938u;
}
