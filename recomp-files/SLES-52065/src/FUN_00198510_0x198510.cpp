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

// Function: FUN_00198510
// Address: 0x198510 - 0x198638
void FUN_00198510_0x198510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198510_0x198510");
#endif

    switch (ctx->pc) {
        case 0x198548u: goto label_198548;
        case 0x198558u: goto label_198558;
        case 0x198604u: goto label_198604;
        case 0x198614u: goto label_198614;
        default: break;
    }

    ctx->pc = 0x198510u;

    // 0x198510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198514: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x198514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x198518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19851c: 0x24a529a0  addiu       $a1, $a1, 0x29A0
    ctx->pc = 0x19851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10656));
    // 0x198520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198524: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x198524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19852c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19852cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198530: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x198530u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2129A0u));
    // 0x198534: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x198534u;
    { uint32_t bits = FAST_READ32(0x2129A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198538: 0x24040740  addiu       $a0, $zero, 0x740
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    // 0x19853c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19853cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x198540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x198540u;
    SET_GPR_U32(ctx, 31, 0x198548u);
    ctx->pc = 0x198544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198540u;
    // 0x198544: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x198540u, 0x198548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198548u;
label_198548:
    // 0x198548: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198548u;
    {
        const bool branch_taken_0x198548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198548u;
        // 0x19854c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198548) {
            ctx->pc = 0x198564u;
            goto label_198564;
        }
    }
    ctx->pc = 0x198550u;
    // 0x198550: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x198550u;
    SET_GPR_U32(ctx, 31, 0x198558u);
    ctx->pc = 0x198554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198550u;
    // 0x198554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x198550u, 0x198558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198558u;
label_198558:
    // 0x198558: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x198558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19855c: 0x2442b270  addiu       $v0, $v0, -0x4D90
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947440));
    // 0x198560: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x198560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_198564:
    // 0x198564: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x198564u;
    {
        const bool branch_taken_0x198564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198564) {
            ctx->pc = 0x19861Cu;
            goto label_19861c;
        }
    }
    ctx->pc = 0x19856Cu;
    // 0x19856c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198570: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x198574: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198578: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19857c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198580: 0x24a5d820  addiu       $a1, $a1, -0x27E0
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
    // 0x198584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198588: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19858c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19858cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x198590: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198594: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x198594u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198598: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19859c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1985a0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1985a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1985a8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1985ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1985b0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1985b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1985b8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1985bc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1985c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1985c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1985c4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1985c8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1985cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1985d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1985d4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1985d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1985d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1985d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1985dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1985dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1985e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1985e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1985e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1985e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1985e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1985e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1985ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1985f0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1985f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1985f4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1985f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1985f8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1985f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1985fc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1985FCu;
    SET_GPR_U32(ctx, 31, 0x198604u);
    ctx->pc = 0x198600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985FCu;
    // 0x198600: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1985FCu, 0x198604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198604u;
label_198604:
    // 0x198604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19860c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19860Cu;
    SET_GPR_U32(ctx, 31, 0x198614u);
    ctx->pc = 0x198610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19860Cu;
    // 0x198610: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19860Cu, 0x198614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198614u;
label_198614:
    // 0x198614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198614u;
    {
        const bool branch_taken_0x198614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198614) {
            ctx->pc = 0x198624u;
            goto label_198624;
        }
    }
    ctx->pc = 0x19861Cu;
label_19861c:
    // 0x19861c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198620: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198624:
    // 0x198624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19862c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198630: 0x3e00008  jr          $ra
    ctx->pc = 0x198630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198630u;
        // 0x198634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198638u;
}
