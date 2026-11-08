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

// Function: FUN_001adfa0
// Address: 0x1adfa0 - 0x1ae0c4
void FUN_001adfa0_0x1adfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adfa0_0x1adfa0");
#endif

    switch (ctx->pc) {
        case 0x1adfd8u: goto label_1adfd8;
        case 0x1adfecu: goto label_1adfec;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae0a0u: goto label_1ae0a0;
        default: break;
    }

    ctx->pc = 0x1adfa0u;

    // 0x1adfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adfa4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1adfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1adfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adfac: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0
    ctx->pc = 0x1adfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
    // 0x1adfb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adfb4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1adfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1adfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adfbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adfbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfc0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1adfc0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212CF0u));
    // 0x1adfc4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1adfc4u;
    { uint32_t bits = FAST_READ32(0x212CF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adfc8: 0x240407f0  addiu       $a0, $zero, 0x7F0
    ctx->pc = 0x1adfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    // 0x1adfcc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1adfccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1adfd0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1ADFD0u;
    SET_GPR_U32(ctx, 31, 0x1ADFD8u);
    ctx->pc = 0x1ADFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFD0u;
    // 0x1adfd4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1ADFD0u, 0x1ADFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFD8u;
label_1adfd8:
    // 0x1adfd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfdc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADFDCu;
    {
        const bool branch_taken_0x1adfdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFDCu;
        // 0x1adfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfdc) {
            ctx->pc = 0x1ADFF0u;
            goto label_1adff0;
        }
    }
    ctx->pc = 0x1ADFE4u;
    // 0x1adfe4: 0xc06b834  jal         func_1AE0D0
    ctx->pc = 0x1ADFE4u;
    SET_GPR_U32(ctx, 31, 0x1ADFECu);
    ctx->pc = 0x1AE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE0D0u, 0x1ADFE4u, 0x1ADFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFECu;
label_1adfec:
    // 0x1adfec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1adff0:
    // 0x1adff0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ADFF0u;
    {
        const bool branch_taken_0x1adff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adff0) {
            ctx->pc = 0x1AE0A8u;
            goto label_1ae0a8;
        }
    }
    ctx->pc = 0x1ADFF8u;
    // 0x1adff8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1adffc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1adffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ae000: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae004: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1ae004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ae008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae00c: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x1ae00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
    // 0x1ae010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ae010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae014: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ae014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae018: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1ae018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1ae01c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ae01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ae020: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1ae020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae024: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae028: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ae028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ae02c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1ae02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1ae030: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ae030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae034: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ae038: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ae038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ae03c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1ae03cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1ae040: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ae044: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae048: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1ae048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae04c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ae04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ae050: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1ae050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1ae054: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae058: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1ae058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ae05c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ae05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ae060: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1ae060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1ae064: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ae068: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1ae068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae06c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ae06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ae070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae074: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ae078: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae07c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1ae07cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1ae080: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1ae080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1ae084: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1ae084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1ae088: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1AE088u;
    SET_GPR_U32(ctx, 31, 0x1AE090u);
    ctx->pc = 0x1AE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE088u;
    // 0x1ae08c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1AE088u, 0x1AE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE090u;
label_1ae090:
    // 0x1ae090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae098: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1AE098u;
    SET_GPR_U32(ctx, 31, 0x1AE0A0u);
    ctx->pc = 0x1AE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE098u;
    // 0x1ae09c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1AE098u, 0x1AE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE0A0u;
label_1ae0a0:
    // 0x1ae0a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0A0u;
    {
        const bool branch_taken_0x1ae0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0A0u;
        // 0x1ae0a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0a0) {
            ctx->pc = 0x1AE0B0u;
            goto label_1ae0b0;
        }
    }
    ctx->pc = 0x1AE0A8u;
label_1ae0a8:
    // 0x1ae0a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ae0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae0b0:
    // 0x1ae0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0BCu;
        // 0x1ae0c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE0C4u;
}
