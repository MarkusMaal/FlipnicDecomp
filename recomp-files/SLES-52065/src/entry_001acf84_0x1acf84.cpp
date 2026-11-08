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

// Function: entry_001acf84
// Address: 0x1acf84 - 0x1ad03c
void entry_001acf84_0x1acf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acf84_0x1acf84");
#endif

    switch (ctx->pc) {
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad034u: goto label_1ad034;
        default: break;
    }

    ctx->pc = 0x1acf84u;

    // 0x1acf84: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1ACF84u;
    {
        const bool branch_taken_0x1acf84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acf84) {
            ctx->pc = 0x1AD03Cu;
            return;
        }
    }
    ctx->pc = 0x1ACF8Cu;
    // 0x1acf8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acf90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1acf94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acf98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1acf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfa0: 0x24a5e190  addiu       $a1, $a1, -0x1E70
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959504));
    // 0x1acfa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1acfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1acfb0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acfb4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1acfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfb8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1acfbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1acfc0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1acfc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfc8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1acfcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1acfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1acfd0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1acfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1acfd4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acfd8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1acfdc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1acfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1acfe0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1acfe4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1acfe8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1acfec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1acff0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1acff4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1acff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1acff8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1acffc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1acffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ad000: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ad000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad004: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ad004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad008: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ad00c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad010: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1ad010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1ad014: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1ad014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1ad018: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1ad018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1ad01c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1AD01Cu;
    SET_GPR_U32(ctx, 31, 0x1AD024u);
    ctx->pc = 0x1AD020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD01Cu;
    // 0x1ad020: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1AD01Cu, 0x1AD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD024u;
label_1ad024:
    // 0x1ad024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad02c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1AD02Cu;
    SET_GPR_U32(ctx, 31, 0x1AD034u);
    ctx->pc = 0x1AD030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD02Cu;
    // 0x1ad030: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1AD02Cu, 0x1AD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD034u;
    {
        const bool branch_taken_0x1ad034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD034u;
        // 0x1ad038: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad034) {
            ctx->pc = 0x1AD044u;
            return;
        }
    }
    ctx->pc = 0x1AD03Cu;
}
