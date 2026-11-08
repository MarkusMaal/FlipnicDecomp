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

// Function: FUN_00174cd0
// Address: 0x174cd0 - 0x174ea4
void FUN_00174cd0_0x174cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174cd0_0x174cd0");
#endif

    switch (ctx->pc) {
        case 0x174de4u: goto label_174de4;
        case 0x174decu: goto label_174dec;
        case 0x174e14u: goto label_174e14;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e74u: goto label_174e74;
        default: break;
    }

    ctx->pc = 0x174cd0u;

    // 0x174cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174cd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174cd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ce8: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x174ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x174cec: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x174CECu;
    {
        const bool branch_taken_0x174cec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x174CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CECu;
        // 0x174cf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cec) {
            ctx->pc = 0x174D40u;
            goto label_174d40;
        }
    }
    ctx->pc = 0x174CF4u;
    // 0x174cf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x174cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x174cf8: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x174cfc: 0xae250104  sw          $a1, 0x104($s1)
    ctx->pc = 0x174cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 5));
    // 0x174d00: 0x24631a60  addiu       $v1, $v1, 0x1A60
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6752));
    // 0x174d04: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x174d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x174d08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x174d0c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x174d10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x174d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174d14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174d1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174d20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174d24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174d28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x174d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x174d2c: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x174d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x174d30: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x174d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x174d34: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x174d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x174d38: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x174d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x174d3c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x174d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_174d40:
    // 0x174d40: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x174d44: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x174d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x174d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174d4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174d50: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x174d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174d54: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x174d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174d58: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x174d5c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x174d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174d60: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x174d64: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x174d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x174d68: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174d6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x174d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x174d70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174d78: 0x0  nop
    ctx->pc = 0x174d78u;
    // NOP
    // 0x174d7c: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x174d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x174d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x174D80u;
    {
        const bool branch_taken_0x174d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D80u;
        // 0x174d84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d80) {
            ctx->pc = 0x174DA0u;
            goto label_174da0;
        }
    }
    ctx->pc = 0x174D88u;
    // 0x174d88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174d8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x174d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x174d90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174d98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D98u;
        // 0x174d9c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DC4u;
            goto label_174dc4;
        }
    }
    ctx->pc = 0x174DA0u;
label_174da0:
    // 0x174da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174da4: 0x0  nop
    ctx->pc = 0x174da4u;
    // NOP
    // 0x174da8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x174DA8u;
    {
        const bool branch_taken_0x174da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174da8) {
            ctx->pc = 0x174DC4u;
            goto label_174dc4;
        }
    }
    ctx->pc = 0x174DB0u;
    // 0x174db0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174db4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x174db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x174db8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174dc0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x174dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_174dc4:
    // 0x174dc4: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x174dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x174dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174dd0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174dd4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x174dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174dd8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x174dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174ddc: 0xc05c620  jal         func_171880
    ctx->pc = 0x174DDCu;
    SET_GPR_U32(ctx, 31, 0x174DE4u);
    ctx->pc = 0x174DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DDCu;
    // 0x174de0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171880u, 0x174DDCu, 0x174DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DE4u;
label_174de4:
    // 0x174de4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x174DE4u;
    {
        const bool branch_taken_0x174de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE4u;
        // 0x174de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174de4) {
            ctx->pc = 0x174E3Cu;
            goto label_174e3c;
        }
    }
    ctx->pc = 0x174DECu;
label_174dec:
    // 0x174dec: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x174decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174df0: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x174df4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x174df8: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x174dfc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x174e00: 0x24c67630  addiu       $a2, $a2, 0x7630
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30256));
    // 0x174e04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174e08: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x174e0c: 0xc05c5cc  jal         func_171730
    ctx->pc = 0x174E0Cu;
    SET_GPR_U32(ctx, 31, 0x174E14u);
    ctx->pc = 0x174E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E0Cu;
    // 0x174e10: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171730u, 0x174E0Cu, 0x174E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E14u;
label_174e14:
    // 0x174e14: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x174e18: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x174e1c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174e20: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x174e24: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x174e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x174e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174e2c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x174e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x174e30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174e34: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x174e34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x174e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_174e3c:
    // 0x174e3c: 0x0  nop
    ctx->pc = 0x174e3cu;
    // NOP
    // 0x174e40: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174e44: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174e48: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x174e48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174e4c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x174E4Cu;
    {
        const bool branch_taken_0x174e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E4Cu;
        // 0x174e50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e4c) {
            ctx->pc = 0x174DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174dec;
        }
    }
    ctx->pc = 0x174E54u;
    // 0x174e54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x174E54u;
    {
        const bool branch_taken_0x174e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e54) {
            ctx->pc = 0x174E78u;
            goto label_174e78;
        }
    }
    ctx->pc = 0x174E5Cu;
label_174e5c:
    // 0x174e5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x174e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x174e60: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x174e64: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x174e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x174e68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x174e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e6c: 0xc05c748  jal         func_171D20
    ctx->pc = 0x174E6Cu;
    SET_GPR_U32(ctx, 31, 0x174E74u);
    ctx->pc = 0x174E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E6Cu;
    // 0x174e70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D20u, 0x174E6Cu, 0x174E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E74u;
label_174e74:
    // 0x174e74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174e78:
    // 0x174e78: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x174e7c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174e80: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174e84: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x174E84u;
    {
        const bool branch_taken_0x174e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E84u;
        // 0x174e88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e84) {
            ctx->pc = 0x174E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174e5c;
        }
    }
    ctx->pc = 0x174E8Cu;
    // 0x174e8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x174E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E9Cu;
        // 0x174ea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EA4u;
}
