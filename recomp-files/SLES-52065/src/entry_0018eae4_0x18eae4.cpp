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

// Function: entry_0018eae4
// Address: 0x18eae4 - 0x18ebd8
void entry_0018eae4_0x18eae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eae4_0x18eae4");
#endif

    switch (ctx->pc) {
        case 0x18eaecu: goto label_18eaec;
        case 0x18eafcu: goto label_18eafc;
        case 0x18eb48u: goto label_18eb48;
        default: break;
    }

    ctx->pc = 0x18eae4u;

    // 0x18eae4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18EAE4u;
    SET_GPR_U32(ctx, 31, 0x18EAECu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18EAE4u, 0x18EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAECu;
label_18eaec:
    // 0x18eaec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eaf0: 0x240500e5  addiu       $a1, $zero, 0xE5
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x18eaf4: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18EAF4u;
    SET_GPR_U32(ctx, 31, 0x18EAFCu);
    ctx->pc = 0x18EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAF4u;
    // 0x18eaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18EAF4u, 0x18EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAFCu;
label_18eafc:
    // 0x18eafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eb00: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x18eb04: 0xae232720  sw          $v1, 0x2720($s1)
    ctx->pc = 0x18eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 3));
    // 0x18eb08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18eb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x18eb0c: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x18eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
    // 0x18eb10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x18eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x18eb14: 0x24a52920  addiu       $a1, $a1, 0x2920
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10528));
    // 0x18eb18: 0xae220498  sw          $v0, 0x498($s1)
    ctx->pc = 0x18eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1176), GPR_U32(ctx, 2));
    // 0x18eb1c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18eb1cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212920u));
    // 0x18eb20: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18eb20u;
    { uint32_t bits = FAST_READ32(0x212928u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18eb24: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x18eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18eb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb2c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18eb30: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x18eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18eb34: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x18eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18eb38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18eb3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18eb40: 0xc063e40  jal         func_18F900
    ctx->pc = 0x18EB40u;
    SET_GPR_U32(ctx, 31, 0x18EB48u);
    ctx->pc = 0x18EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB40u;
    // 0x18eb44: 0x24520274  addiu       $s2, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F900u, 0x18EB40u, 0x18EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB48u;
label_18eb48:
    // 0x18eb48: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18eb4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18eb50: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x18eb54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18eb58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18eb5c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18eb60: 0xaca60254  sw          $a2, 0x254($a1)
    ctx->pc = 0x18eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 6));
    // 0x18eb64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18eb68: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18eb6c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18eb70: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18eb74: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18eb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18eb78: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18eb7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18eb80: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18eb84: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x18eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x18eb88: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18eb8c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x18eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18eb90: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18eb94: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x18eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x18eb98: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x18eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x18eb9c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x18eba0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18eba4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18eba8: 0xaca00154  sw          $zero, 0x154($a1)
    ctx->pc = 0x18eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
    // 0x18ebac: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x18ebb0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x18ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ebb4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x18ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ebb8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x18ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ebbc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18ebc0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18ebc4: 0xe4820274  swc1        $f2, 0x274($a0)
    ctx->pc = 0x18ebc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x18ebc8: 0xe4810278  swc1        $f1, 0x278($a0)
    ctx->pc = 0x18ebc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x18ebcc: 0xe480027c  swc1        $f0, 0x27C($a0)
    ctx->pc = 0x18ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x18ebd0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18EBD0u;
    {
        const bool branch_taken_0x18ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBD0u;
        // 0x18ebd4: 0xac830280  sw          $v1, 0x280($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebd0) {
            ctx->pc = 0x18EC94u;
            return;
        }
    }
    ctx->pc = 0x18EBD8u;
}
