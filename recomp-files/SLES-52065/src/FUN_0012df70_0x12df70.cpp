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

// Function: FUN_0012df70
// Address: 0x12df70 - 0x12e060
void FUN_0012df70_0x12df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012df70_0x12df70");
#endif

    switch (ctx->pc) {
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfb0u: goto label_12dfb0;
        default: break;
    }

    ctx->pc = 0x12df70u;

    // 0x12df70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12df74: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x12df78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12df7c: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x12df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x12df80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12df84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12df88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12df88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12df90: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x12df90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12df94: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x12df94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x12df98: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x12df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x12df9c: 0xc04b924  jal         func_12E490
    ctx->pc = 0x12DF9Cu;
    SET_GPR_U32(ctx, 31, 0x12DFA4u);
    ctx->pc = 0x12DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF9Cu;
    // 0x12dfa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E490u, 0x12DF9Cu, 0x12DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFA4u;
label_12dfa4:
    // 0x12dfa4: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12dfa8: 0xc04b818  jal         func_12E060
    ctx->pc = 0x12DFA8u;
    SET_GPR_U32(ctx, 31, 0x12DFB0u);
    ctx->pc = 0x12DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFA8u;
    // 0x12dfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E060u, 0x12DFA8u, 0x12DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFB0u;
label_12dfb0:
    // 0x12dfb0: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12DFB0u;
    {
        const bool branch_taken_0x12dfb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12dfb0) {
            ctx->pc = 0x12E008u;
            goto label_12e008;
        }
    }
    ctx->pc = 0x12DFB8u;
    // 0x12dfb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x12dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12dfbc: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x12dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x12dfc0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12dfc4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12dfc8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x12dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12dfcc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x12dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dfd0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x12dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dfd4: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x12dfd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12dfd8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x12dfd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x12dfdc: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x12dfdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x12dfe0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x12dfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x12dfe4: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x12dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12dfe8: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x12dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12dfec: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x12dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12dff0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x12dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12dff4: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x12dff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x12dff8: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x12dff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x12dffc: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x12dffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x12e000: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12E000u;
    {
        const bool branch_taken_0x12e000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E000u;
        // 0x12e004: 0xe640001c  swc1        $f0, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e000) {
            ctx->pc = 0x12E048u;
            goto label_12e048;
        }
    }
    ctx->pc = 0x12E008u;
label_12e008:
    // 0x12e008: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x12e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e00c: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x12e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e010: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x12e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e014: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x12e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e018: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x12e018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12e01c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x12e01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x12e020: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x12e020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x12e024: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x12e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x12e028: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x12e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e02c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x12e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e030: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x12e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e034: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x12e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e038: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x12e038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x12e03c: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x12e03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x12e040: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x12e040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x12e044: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_12e048:
    // 0x12e048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e04c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e04cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e058: 0x3e00008  jr          $ra
    ctx->pc = 0x12E058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E058u;
        // 0x12e05c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E060u;
}
