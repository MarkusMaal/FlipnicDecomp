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

// Function: FUN_001a78f0
// Address: 0x1a78f0 - 0x1a7a18
void FUN_001a78f0_0x1a78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a78f0_0x1a78f0");
#endif

    switch (ctx->pc) {
        case 0x1a7928u: goto label_1a7928;
        case 0x1a7938u: goto label_1a7938;
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79f4u: goto label_1a79f4;
        default: break;
    }

    ctx->pc = 0x1a78f0u;

    // 0x1a78f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a78f4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a78f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a78f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a78fc: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x1a78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
    // 0x1a7900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7904: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a7904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a790c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a790cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7910: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212C08u));
    // 0x1a7914: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a7914u;
    { uint32_t bits = FAST_READ32(0x212C10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7918: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x1a7918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x1a791c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a791cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a7920: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A7920u;
    SET_GPR_U32(ctx, 31, 0x1A7928u);
    ctx->pc = 0x1A7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7920u;
    // 0x1a7924: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A7920u, 0x1A7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7928u;
label_1a7928:
    // 0x1a7928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7928u;
    {
        const bool branch_taken_0x1a7928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7928u;
        // 0x1a792c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7928) {
            ctx->pc = 0x1A7944u;
            goto label_1a7944;
        }
    }
    ctx->pc = 0x1A7930u;
    // 0x1a7930: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A7930u;
    SET_GPR_U32(ctx, 31, 0x1A7938u);
    ctx->pc = 0x1A7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7930u;
    // 0x1a7934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A7930u, 0x1A7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7938u;
label_1a7938:
    // 0x1a7938: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a7938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a793c: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x1a7940: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a7944:
    // 0x1a7944: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A7944u;
    {
        const bool branch_taken_0x1a7944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7944) {
            ctx->pc = 0x1A79FCu;
            goto label_1a79fc;
        }
    }
    ctx->pc = 0x1A794Cu;
    // 0x1a794c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7950: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a7950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a7954: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7958: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a795c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7960: 0x24a5df40  addiu       $a1, $a1, -0x20C0
    ctx->pc = 0x1a7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    // 0x1a7964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7968: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a796c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a796cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a7970: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7974: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7978: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a7978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a797c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a797cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a7980: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a7984: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a7988: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a7988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a798c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7990: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a7990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a7994: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a7998: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a7998u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a799c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a79a0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a79a4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a79a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a79ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a79b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a79b4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a79b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a79bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a79c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a79c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a79c8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a79cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a79ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a79d0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a79d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a79d4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a79d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a79d8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a79d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a79dc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A79DCu;
    SET_GPR_U32(ctx, 31, 0x1A79E4u);
    ctx->pc = 0x1A79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79DCu;
    // 0x1a79e0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A79DCu, 0x1A79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a79e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a79ec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A79ECu, 0x1A79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7A04u;
            goto label_1a7a04;
        }
    }
    ctx->pc = 0x1A79FCu;
label_1a79fc:
    // 0x1a79fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a79fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7a00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a04:
    // 0x1a7a04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7a10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A10u;
        // 0x1a7a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7A18u;
}
