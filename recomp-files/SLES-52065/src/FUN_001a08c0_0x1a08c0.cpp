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

// Function: FUN_001a08c0
// Address: 0x1a08c0 - 0x1a09e8
void FUN_001a08c0_0x1a08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a08c0_0x1a08c0");
#endif

    switch (ctx->pc) {
        case 0x1a08f8u: goto label_1a08f8;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09c4u: goto label_1a09c4;
        default: break;
    }

    ctx->pc = 0x1a08c0u;

    // 0x1a08c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a08c4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a08c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a08c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a08cc: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x1a08d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a08d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a08d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a08dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a08dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a08e0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212AA0u));
    // 0x1a08e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a08e4u;
    { uint32_t bits = FAST_READ32(0x212AA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a08e8: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x1a08e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x1a08ec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a08ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a08f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A08F0u;
    SET_GPR_U32(ctx, 31, 0x1A08F8u);
    ctx->pc = 0x1A08F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08F0u;
    // 0x1a08f4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A08F0u, 0x1A08F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08F8u;
label_1a08f8:
    // 0x1a08f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A08F8u;
    {
        const bool branch_taken_0x1a08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08F8u;
        // 0x1a08fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08f8) {
            ctx->pc = 0x1A0914u;
            goto label_1a0914;
        }
    }
    ctx->pc = 0x1A0900u;
    // 0x1a0900: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x1A0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0900u;
    // 0x1a0904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A0900u, 0x1A0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a090c: 0x2442b340  addiu       $v0, $v0, -0x4CC0
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x1a0910: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a0910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a0914:
    // 0x1a0914: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0914u;
    {
        const bool branch_taken_0x1a0914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0914) {
            ctx->pc = 0x1A09CCu;
            goto label_1a09cc;
        }
    }
    ctx->pc = 0x1A091Cu;
    // 0x1a091c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a0924: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0928: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0930: 0x24a5dc80  addiu       $a1, $a1, -0x2380
    ctx->pc = 0x1a0930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958208));
    // 0x1a0934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0938: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a093c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a093cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a0940: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0944: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0948: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a094c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0950: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0954: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0958: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a095c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0960: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a0960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a0964: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0968: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a096c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a096cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a0970: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0974: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0978: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a097c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a097cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a0980: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0984: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a0984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a0988: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a098c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0990: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a0990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0994: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0998: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a099c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a09a0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a09a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a09a4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a09a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a09a8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a09a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a09ac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A09ACu;
    SET_GPR_U32(ctx, 31, 0x1A09B4u);
    ctx->pc = 0x1A09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09ACu;
    // 0x1a09b0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A09ACu, 0x1A09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09B4u;
label_1a09b4:
    // 0x1a09b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09bc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A09BCu;
    SET_GPR_U32(ctx, 31, 0x1A09C4u);
    ctx->pc = 0x1A09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09BCu;
    // 0x1a09c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A09BCu, 0x1A09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09C4u;
label_1a09c4:
    // 0x1a09c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A09C4u;
    {
        const bool branch_taken_0x1a09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09C4u;
        // 0x1a09c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09c4) {
            ctx->pc = 0x1A09D4u;
            goto label_1a09d4;
        }
    }
    ctx->pc = 0x1A09CCu;
label_1a09cc:
    // 0x1a09cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a09ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a09d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a09d4:
    // 0x1a09d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a09d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a09d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a09d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a09dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a09dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a09e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A09E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09E0u;
        // 0x1a09e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A09E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A09E8u;
}
