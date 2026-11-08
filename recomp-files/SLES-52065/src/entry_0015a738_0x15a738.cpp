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

// Function: entry_0015a738
// Address: 0x15a738 - 0x15a830
void entry_0015a738_0x15a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a738_0x15a738");
#endif

    switch (ctx->pc) {
        case 0x15a780u: goto label_15a780;
        case 0x15a808u: goto label_15a808;
        case 0x15a81cu: goto label_15a81c;
        default: break;
    }

    ctx->pc = 0x15a738u;

label_15a738:
    // 0x15a738: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_15a73c:
    // 0x15a73c: 0x4800089  bltz        $a0, . + 4 + (0x89 << 2)
label_15a740:
    if (ctx->pc == 0x15A740u) {
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A744u;
        goto label_15a744;
    }
    ctx->pc = 0x15A73Cu;
    {
        const bool branch_taken_0x15a73c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a73c) {
            ctx->pc = 0x15A964u;
            return;
        }
    }
    ctx->pc = 0x15A744u;
label_15a744:
    // 0x15a744: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15a748:
    // 0x15a748: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15a74c:
    // 0x15a74c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a750:
    // 0x15a750: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a754:
    // 0x15a754: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15a758:
    // 0x15a758: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a75c:
    // 0x15a75c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15a760:
    // 0x15a760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a764:
    // 0x15a764: 0x26290300  addiu       $t1, $s1, 0x300
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15a768:
    // 0x15a768: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15a768u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a76c:
    // 0x15a76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a770:
    // 0x15a770: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x15a770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
label_15a774:
    // 0x15a774: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15a778:
    // 0x15a778: 0xc054c30  jal         func_1530C0
label_15a77c:
    if (ctx->pc == 0x15A77Cu) {
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A778u;
        // 0x15a77c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A780u;
        goto label_15a780;
    }
    ctx->pc = 0x15A778u;
    SET_GPR_U32(ctx, 31, 0x15A780u);
    ctx->pc = 0x15A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A778u;
    // 0x15a77c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C0u, 0x15A778u, 0x15A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A780u;
label_15a780:
    // 0x15a780: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a784:
    // 0x15a784: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_15a788:
    // 0x15a788: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_15a78c:
    // 0x15a78c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a790:
    // 0x15a790: 0x0  nop
    ctx->pc = 0x15a790u;
    // NOP
label_15a794:
    // 0x15a794: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15a794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_15a798:
    // 0x15a798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a79c:
    // 0x15a79c: 0x0  nop
    ctx->pc = 0x15a79cu;
    // NOP
label_15a7a0:
    // 0x15a7a0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_15a7a4:
    if (ctx->pc == 0x15A7A4u) {
        ctx->pc = 0x15A7A8u;
        goto label_15a7a8;
    }
    ctx->pc = 0x15A7A0u;
    {
        const bool branch_taken_0x15a7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a7a0) {
            ctx->pc = 0x15A838u;
            return;
        }
    }
    ctx->pc = 0x15A7A8u;
label_15a7a8:
    // 0x15a7a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x15a7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15a7ac:
    // 0x15a7ac: 0x0  nop
    ctx->pc = 0x15a7acu;
    // NOP
label_15a7b0:
    // 0x15a7b0: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x15a7b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a7b4:
    // 0x15a7b4: 0x0  nop
    ctx->pc = 0x15a7b4u;
    // NOP
label_15a7b8:
    // 0x15a7b8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_15a7bc:
    if (ctx->pc == 0x15A7BCu) {
        ctx->pc = 0x15A7C0u;
        goto label_15a7c0;
    }
    ctx->pc = 0x15A7B8u;
    {
        const bool branch_taken_0x15a7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a7b8) {
            ctx->pc = 0x15A838u;
            return;
        }
    }
    ctx->pc = 0x15A7C0u;
label_15a7c0:
    // 0x15a7c0: 0x0  nop
    ctx->pc = 0x15a7c0u;
    // NOP
label_15a7c4:
    // 0x15a7c4: 0x0  nop
    ctx->pc = 0x15a7c4u;
    // NOP
label_15a7c8:
    // 0x15a7c8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x15a7c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_15a7cc:
    // 0x15a7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a7d0:
    // 0x15a7d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d4:
    // 0x15a7d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d8:
    // 0x15a7d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a7dc:
    // 0x15a7dc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15a7e0:
    // 0x15a7e0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a7e4:
    // 0x15a7e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a7e8:
    // 0x15a7e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a7ec:
    // 0x15a7ec: 0x0  nop
    ctx->pc = 0x15a7ecu;
    // NOP
label_15a7f0:
    // 0x15a7f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x15a7f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_15a7f4:
    // 0x15a7f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a7f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15a7f8:
    // 0x15a7f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15a7fc:
    // 0x15a7fc: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x15a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_15a800:
    // 0x15a800: 0xc056a64  jal         func_15A990
label_15a804:
    if (ctx->pc == 0x15A804u) {
        ctx->pc = 0x15A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A800u;
        // 0x15a804: 0xe62302e8  swc1        $f3, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A808u;
        goto label_15a808;
    }
    ctx->pc = 0x15A800u;
    SET_GPR_U32(ctx, 31, 0x15A808u);
    ctx->pc = 0x15A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A800u;
    // 0x15a804: 0xe62302e8  swc1        $f3, 0x2E8($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15A800u, 0x15A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A808u;
label_15a808:
    // 0x15a808: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a80c:
    // 0x15a80c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a810:
    // 0x15a810: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15a814:
    // 0x15a814: 0x320f809  jalr        $t9
label_15a818:
    if (ctx->pc == 0x15A818u) {
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A81Cu;
        goto label_15a81c;
    }
    ctx->pc = 0x15A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15A81Cu);
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A814u, 0x15A81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A81Cu;
label_15a81c:
    // 0x15a81c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a820:
    // 0x15a820: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_15a824:
    if (ctx->pc == 0x15A824u) {
        ctx->pc = 0x15A828u;
        goto label_15a828;
    }
    ctx->pc = 0x15A820u;
    {
        const bool branch_taken_0x15a820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x15a820) {
            ctx->pc = 0x15A830u;
            return;
        }
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x10000050  b           . + 4 + (0x50 << 2)
label_15a82c:
    if (ctx->pc == 0x15A82Cu) {
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A830u;
        goto label_fallthrough_0x15a828;
    }
    ctx->pc = 0x15A828u;
    {
        const bool branch_taken_0x15a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a828) {
            ctx->pc = 0x15A96Cu;
            return;
        }
    }
label_fallthrough_0x15a828:
    ctx->pc = 0x15A830u;
}
