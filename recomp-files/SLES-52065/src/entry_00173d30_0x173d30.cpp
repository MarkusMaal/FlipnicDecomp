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

// Function: entry_00173d30
// Address: 0x173d30 - 0x173de4
void entry_00173d30_0x173d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173d30_0x173d30");
#endif

    switch (ctx->pc) {
        case 0x173d48u: goto label_173d48;
        default: break;
    }

    ctx->pc = 0x173d30u;

    // 0x173d30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x173d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d38: 0x0  nop
    ctx->pc = 0x173d38u;
    // NOP
    // 0x173d3c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x173d3cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x173d40: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x173D40u;
    SET_GPR_U32(ctx, 31, 0x173D48u);
    ctx->pc = 0x173D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D40u;
    // 0x173d44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x173D40u, 0x173D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x173d4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x173d50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173d54: 0x0  nop
    ctx->pc = 0x173d54u;
    // NOP
    // 0x173d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x173d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d5c: 0x0  nop
    ctx->pc = 0x173d5cu;
    // NOP
    // 0x173d60: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x173D60u;
    {
        const bool branch_taken_0x173d60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d60) {
            ctx->pc = 0x173E10u;
            return;
        }
    }
    ctx->pc = 0x173D68u;
    // 0x173d68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173d6c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x173d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173d70: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x173D70u;
    {
        const bool branch_taken_0x173d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D70u;
        // 0x173d74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d70) {
            ctx->pc = 0x173E10u;
            return;
        }
    }
    ctx->pc = 0x173D78u;
    // 0x173d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x173d84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x173d88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x173d8c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x173d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d90: 0x0  nop
    ctx->pc = 0x173d90u;
    // NOP
    // 0x173d94: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x173D94u;
    {
        const bool branch_taken_0x173d94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D94u;
        // 0x173d98: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d94) {
            ctx->pc = 0x173DE4u;
            return;
        }
    }
    ctx->pc = 0x173D9Cu;
    // 0x173d9c: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x173d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173da4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x173da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173da8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173dac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173db0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x173db4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x173db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173db8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x173db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173dc0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173dc4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x173dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173dc8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173dcc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x173dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173dd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173dd4: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x173dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x173dd8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173DDCu;
    {
        const bool branch_taken_0x173ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DDCu;
        // 0x173de0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ddc) {
            ctx->pc = 0x173DF0u;
            return;
        }
    }
    ctx->pc = 0x173DE4u;
}
