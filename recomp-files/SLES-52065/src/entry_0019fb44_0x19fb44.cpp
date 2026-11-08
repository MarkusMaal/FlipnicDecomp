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

// Function: entry_0019fb44
// Address: 0x19fb44 - 0x19fbfc
void entry_0019fb44_0x19fb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb44_0x19fb44");
#endif

    switch (ctx->pc) {
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbf4u: goto label_19fbf4;
        default: break;
    }

    ctx->pc = 0x19fb44u;

    // 0x19fb44: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19FB44u;
    {
        const bool branch_taken_0x19fb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb44) {
            ctx->pc = 0x19FBFCu;
            return;
        }
    }
    ctx->pc = 0x19FB4Cu;
    // 0x19fb4c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19fb54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19fb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fb58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19fb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb60: 0x24a5dc00  addiu       $a1, $a1, -0x2400
    ctx->pc = 0x19fb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958080));
    // 0x19fb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fb6c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19fb70: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb74: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb78: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19fb7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19fb80: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19fb84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fb88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19fb8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19fb90: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19fb94: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fb98: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fb9c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19fba0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19fba4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19fba8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19fbac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19fbb0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19fbb4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19fbb8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19fbbc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19fbc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fbc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19fbc8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19fbcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19fbd0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19fbd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19fbd4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19fbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19fbd8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19fbdc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19FBDCu;
    SET_GPR_U32(ctx, 31, 0x19FBE4u);
    ctx->pc = 0x19FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBDCu;
    // 0x19fbe0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19FBDCu, 0x19FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBE4u;
label_19fbe4:
    // 0x19fbe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19fbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19FBECu;
    SET_GPR_U32(ctx, 31, 0x19FBF4u);
    ctx->pc = 0x19FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBECu;
    // 0x19fbf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19FBECu, 0x19FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBF4u;
label_19fbf4:
    // 0x19fbf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FBF4u;
    {
        const bool branch_taken_0x19fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBF4u;
        // 0x19fbf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbf4) {
            ctx->pc = 0x19FC04u;
            return;
        }
    }
    ctx->pc = 0x19FBFCu;
}
