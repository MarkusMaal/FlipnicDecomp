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

// Function: FUN_0019a500
// Address: 0x19a500 - 0x19a628
void FUN_0019a500_0x19a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a500_0x19a500");
#endif

    switch (ctx->pc) {
        case 0x19a538u: goto label_19a538;
        case 0x19a548u: goto label_19a548;
        case 0x19a5f4u: goto label_19a5f4;
        case 0x19a604u: goto label_19a604;
        default: break;
    }

    ctx->pc = 0x19a500u;

    // 0x19a500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a504: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19a504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19a508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a50c: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x19a510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a514: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19a514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a51c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a520: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2129E0u));
    // 0x19a524: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19a524u;
    { uint32_t bits = FAST_READ32(0x2129E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a528: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x19a528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19a52c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19a52cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19a530: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19A530u;
    SET_GPR_U32(ctx, 31, 0x19A538u);
    ctx->pc = 0x19A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A530u;
    // 0x19a534: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19A530u, 0x19A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A538u;
label_19a538:
    // 0x19a538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A538u;
    {
        const bool branch_taken_0x19a538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A538u;
        // 0x19a53c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a538) {
            ctx->pc = 0x19A554u;
            goto label_19a554;
        }
    }
    ctx->pc = 0x19A540u;
    // 0x19a540: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19A540u;
    SET_GPR_U32(ctx, 31, 0x19A548u);
    ctx->pc = 0x19A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A540u;
    // 0x19a544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19A540u, 0x19A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A548u;
label_19a548:
    // 0x19a548: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19a54c: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19a550: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19a550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19a554:
    // 0x19a554: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19A554u;
    {
        const bool branch_taken_0x19a554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a554) {
            ctx->pc = 0x19A60Cu;
            goto label_19a60c;
        }
    }
    ctx->pc = 0x19A55Cu;
    // 0x19a55c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a560: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19a564: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a568: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a570: 0x24a5d920  addiu       $a1, $a1, -0x26E0
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
    // 0x19a574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a578: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a57c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19a580: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a584: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a588: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a58c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a590: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a594: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a598: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a598u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a59c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a5a0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19a5a4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a5a8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5ac: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a5b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a5b4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a5b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a5bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a5c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a5c4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19a5c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a5cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a5d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a5d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a5d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19a5dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19a5e0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19a5e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19a5e4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19a5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19a5e8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19a5ec: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19A5ECu;
    SET_GPR_U32(ctx, 31, 0x19A5F4u);
    ctx->pc = 0x19A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5ECu;
    // 0x19a5f0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19A5ECu, 0x19A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5F4u;
label_19a5f4:
    // 0x19a5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5fc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19A5FCu;
    SET_GPR_U32(ctx, 31, 0x19A604u);
    ctx->pc = 0x19A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5FCu;
    // 0x19a600: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19A5FCu, 0x19A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A604u;
label_19a604:
    // 0x19a604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A604u;
    {
        const bool branch_taken_0x19a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A604u;
        // 0x19a608: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a604) {
            ctx->pc = 0x19A614u;
            goto label_19a614;
        }
    }
    ctx->pc = 0x19A60Cu;
label_19a60c:
    // 0x19a60c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19a60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a614:
    // 0x19a614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a620: 0x3e00008  jr          $ra
    ctx->pc = 0x19A620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A620u;
        // 0x19a624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A628u;
}
