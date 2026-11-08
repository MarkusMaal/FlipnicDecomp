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

// Function: FUN_00199ca0
// Address: 0x199ca0 - 0x199e34
void FUN_00199ca0_0x199ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199ca0_0x199ca0");
#endif

    switch (ctx->pc) {
        case 0x199cd8u: goto label_199cd8;
        case 0x199cecu: goto label_199cec;
        case 0x199d14u: goto label_199d14;
        case 0x199d34u: goto label_199d34;
        case 0x199e00u: goto label_199e00;
        case 0x199e10u: goto label_199e10;
        default: break;
    }

    ctx->pc = 0x199ca0u;

    // 0x199ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199ca4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x199ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x199ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199cac: 0x24a529c0  addiu       $a1, $a1, 0x29C0
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10688));
    // 0x199cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199cb4: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x199cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cc0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x199cc0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2129C0u));
    // 0x199cc4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x199cc4u;
    { uint32_t bits = FAST_READ32(0x2129C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199cc8: 0x24040940  addiu       $a0, $zero, 0x940
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2368));
    // 0x199ccc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x199cccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x199cd0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x199CD0u;
    SET_GPR_U32(ctx, 31, 0x199CD8u);
    ctx->pc = 0x199CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CD0u;
    // 0x199cd4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x199CD0u, 0x199CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CD8u;
label_199cd8:
    // 0x199cd8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x199CD8u;
    {
        const bool branch_taken_0x199cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CD8u;
        // 0x199cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cd8) {
            ctx->pc = 0x199D60u;
            goto label_199d60;
        }
    }
    ctx->pc = 0x199CE0u;
    // 0x199ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ce4: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x199CE4u;
    SET_GPR_U32(ctx, 31, 0x199CECu);
    ctx->pc = 0x199CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CE4u;
    // 0x199ce8: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x199CE4u, 0x199CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CECu;
label_199cec:
    // 0x199cec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x199cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x199cf0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x199cf4: 0x2463b2c0  addiu       $v1, $v1, -0x4D40
    ctx->pc = 0x199cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947520));
    // 0x199cf8: 0xac43031c  sw          $v1, 0x31C($v0)
    ctx->pc = 0x199cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    // 0x199cfc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x199d00: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x199d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
    // 0x199d04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x199d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x199d08: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x199d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d0c: 0xc0667ac  jal         func_199EB0
    ctx->pc = 0x199D0Cu;
    SET_GPR_U32(ctx, 31, 0x199D14u);
    ctx->pc = 0x199D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D0Cu;
    // 0x199d10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EB0u, 0x199D0Cu, 0x199D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D14u;
label_199d14:
    // 0x199d14: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x199d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x199d18: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x199d1c: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x199d20: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x199d24: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x199d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x199d28: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d2c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x199D2Cu;
    SET_GPR_U32(ctx, 31, 0x199D34u);
    ctx->pc = 0x199D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D2Cu;
    // 0x199d30: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x199D2Cu, 0x199D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D34u;
label_199d34:
    // 0x199d34: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x199d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x199d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199d3c: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x199d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x199d40: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d44: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x199d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x199d48: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x199d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d4c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x199d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x199d50: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x199d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x199d54: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x199d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x199d58: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x199d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x199d5c: 0x0  nop
    ctx->pc = 0x199d5cu;
    // NOP
label_199d60:
    // 0x199d60: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x199D60u;
    {
        const bool branch_taken_0x199d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d60) {
            ctx->pc = 0x199E18u;
            goto label_199e18;
        }
    }
    ctx->pc = 0x199D68u;
    // 0x199d68: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199d6c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x199d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x199d70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199d74: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x199d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d7c: 0x24a5d8a0  addiu       $a1, $a1, -0x2760
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
    // 0x199d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x199d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199d84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199d88: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x199d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x199d8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199d90: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199d94: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x199d98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x199d9c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x199d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x199da0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199da4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x199da8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199dac: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x199dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x199db0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199db4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x199db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x199db8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x199db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x199dbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x199dc0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x199dc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x199dc8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x199dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x199dcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199dd0: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x199dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x199dd4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x199dd8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x199dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x199ddc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x199ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199de0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199de4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x199de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x199de8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x199de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x199dec: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x199decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x199df0: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x199df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x199df4: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x199df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x199df8: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x199DF8u;
    SET_GPR_U32(ctx, 31, 0x199E00u);
    ctx->pc = 0x199DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DF8u;
    // 0x199dfc: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x199DF8u, 0x199E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E00u;
label_199e00:
    // 0x199e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e08: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x199E08u;
    SET_GPR_U32(ctx, 31, 0x199E10u);
    ctx->pc = 0x199E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E08u;
    // 0x199e0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x199E08u, 0x199E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E10u;
label_199e10:
    // 0x199e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199E10u;
    {
        const bool branch_taken_0x199e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E10u;
        // 0x199e14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e10) {
            ctx->pc = 0x199E20u;
            goto label_199e20;
        }
    }
    ctx->pc = 0x199E18u;
label_199e18:
    // 0x199e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199e20:
    // 0x199e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x199E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E2Cu;
        // 0x199e30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199E34u;
}
