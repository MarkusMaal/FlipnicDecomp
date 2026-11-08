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

// Function: FUN_001a2590
// Address: 0x1a2590 - 0x1a26b8
void FUN_001a2590_0x1a2590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2590_0x1a2590");
#endif

    switch (ctx->pc) {
        case 0x1a25c8u: goto label_1a25c8;
        case 0x1a25d8u: goto label_1a25d8;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a2694u: goto label_1a2694;
        default: break;
    }

    ctx->pc = 0x1a2590u;

    // 0x1a2590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2594: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a2594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a2598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a259c: 0x24a52ad8  addiu       $a1, $a1, 0x2AD8
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10968));
    // 0x1a25a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a25a4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a25a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a25a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a25ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a25acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25b0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a25b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212AD8u));
    // 0x1a25b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a25b4u;
    { uint32_t bits = FAST_READ32(0x212AE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a25b8: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x1a25b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x1a25bc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a25c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A25C0u;
    SET_GPR_U32(ctx, 31, 0x1A25C8u);
    ctx->pc = 0x1A25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25C0u;
    // 0x1a25c4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A25C0u, 0x1A25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25C8u;
label_1a25c8:
    // 0x1a25c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A25C8u;
    {
        const bool branch_taken_0x1a25c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25C8u;
        // 0x1a25cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25c8) {
            ctx->pc = 0x1A25E4u;
            goto label_1a25e4;
        }
    }
    ctx->pc = 0x1A25D0u;
    // 0x1a25d0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A25D0u;
    SET_GPR_U32(ctx, 31, 0x1A25D8u);
    ctx->pc = 0x1A25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25D0u;
    // 0x1a25d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A25D0u, 0x1A25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25D8u;
label_1a25d8:
    // 0x1a25d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a25dc: 0x2442b370  addiu       $v0, $v0, -0x4C90
    ctx->pc = 0x1a25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947696));
    // 0x1a25e0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a25e4:
    // 0x1a25e4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A25E4u;
    {
        const bool branch_taken_0x1a25e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25e4) {
            ctx->pc = 0x1A269Cu;
            goto label_1a269c;
        }
    }
    ctx->pc = 0x1A25ECu;
    // 0x1a25ec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a25f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a25f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a25f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a25f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a25fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a25fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2600: 0x24a5dd00  addiu       $a1, $a1, -0x2300
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958336));
    // 0x1a2604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2608: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a260c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a260cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2610: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2614: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2618: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a261c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2620: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2624: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2628: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a262c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2630: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2634: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2638: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a263c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2640: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2644: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2648: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a264c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a264cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2650: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2654: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a2654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a2658: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a265c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a265cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2660: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2664: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2668: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a266c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a2670: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a2670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a2674: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a2674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a2678: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a2678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a267c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A267Cu;
    SET_GPR_U32(ctx, 31, 0x1A2684u);
    ctx->pc = 0x1A2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A267Cu;
    // 0x1a2680: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A267Cu, 0x1A2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2684u;
label_1a2684:
    // 0x1a2684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a268c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A268Cu;
    SET_GPR_U32(ctx, 31, 0x1A2694u);
    ctx->pc = 0x1A2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A268Cu;
    // 0x1a2690: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A268Cu, 0x1A2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2694u;
label_1a2694:
    // 0x1a2694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2694u;
    {
        const bool branch_taken_0x1a2694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2694u;
        // 0x1a2698: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2694) {
            ctx->pc = 0x1A26A4u;
            goto label_1a26a4;
        }
    }
    ctx->pc = 0x1A269Cu;
label_1a269c:
    // 0x1a269c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a269cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a26a4:
    // 0x1a26a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a26a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a26a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a26ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a26acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a26b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A26B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26B0u;
        // 0x1a26b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A26B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A26B8u;
}
