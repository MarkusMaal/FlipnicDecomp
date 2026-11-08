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

// Function: FUN_00176ae0
// Address: 0x176ae0 - 0x176d7c
void FUN_00176ae0_0x176ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176ae0_0x176ae0");
#endif

    switch (ctx->pc) {
        case 0x176b18u: goto label_176b18;
        case 0x176b24u: goto label_176b24;
        case 0x176ba8u: goto label_176ba8;
        case 0x176c84u: goto label_176c84;
        case 0x176cbcu: goto label_176cbc;
        case 0x176d28u: goto label_176d28;
        default: break;
    }

    ctx->pc = 0x176ae0u;

    // 0x176ae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176ae4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x176ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x176ae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x176ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x176aec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x176aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x176af0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x176af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x176af4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x176af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x176af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x176afc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x176afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x176b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x176b04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x176b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x176b08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x176b0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b10: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x176B10u;
    {
        const bool branch_taken_0x176b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B10u;
        // 0x176b14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b10) {
            ctx->pc = 0x176BE0u;
            goto label_176be0;
        }
    }
    ctx->pc = 0x176B18u;
label_176b18:
    // 0x176b18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x176b1c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176B1Cu;
    SET_GPR_U32(ctx, 31, 0x176B24u);
    ctx->pc = 0x176B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B1Cu;
    // 0x176b20: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176B1Cu, 0x176B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B24u;
label_176b24:
    // 0x176b24: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x176b28: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x176b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x176b2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x176b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176b34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x176b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176b38: 0x0  nop
    ctx->pc = 0x176b38u;
    // NOP
    // 0x176b3c: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x176b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x176b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176b44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x176b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x176b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176b4c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x176B4Cu;
    {
        const bool branch_taken_0x176b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B4Cu;
        // 0x176b50: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b4c) {
            ctx->pc = 0x176B9Cu;
            goto label_176b9c;
        }
    }
    ctx->pc = 0x176B54u;
    // 0x176b54: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176b5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176b64: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b68: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176b6c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x176b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b70: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176b78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b7c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176b80: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x176b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b84: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x176b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176b8c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b90: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176B94u;
    {
        const bool branch_taken_0x176b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B94u;
        // 0x176b98: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b94) {
            ctx->pc = 0x176BA8u;
            goto label_176ba8;
        }
    }
    ctx->pc = 0x176B9Cu;
label_176b9c:
    // 0x176b9c: 0x0  nop
    ctx->pc = 0x176b9cu;
    // NOP
    // 0x176ba0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176BA0u;
    SET_GPR_U32(ctx, 31, 0x176BA8u);
    ctx->pc = 0x176BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BA0u;
    // 0x176ba4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176BA0u, 0x176BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176BA8u;
label_176ba8:
    // 0x176ba8: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x176ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176bb0: 0x0  nop
    ctx->pc = 0x176bb0u;
    // NOP
    // 0x176bb4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x176bb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176bb8: 0x0  nop
    ctx->pc = 0x176bb8u;
    // NOP
    // 0x176bbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x176BBCu;
    {
        const bool branch_taken_0x176bbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bbc) {
            ctx->pc = 0x176BC8u;
            goto label_176bc8;
        }
    }
    ctx->pc = 0x176BC4u;
    // 0x176bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176bc8:
    // 0x176bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176bcc: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x176bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176bd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x176bd8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x176bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x176bdc: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x176bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_176be0:
    // 0x176be0: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176be4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x176be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176be8: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x176BE8u;
    {
        const bool branch_taken_0x176be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BE8u;
        // 0x176bec: 0x212a021  addu        $s4, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176be8) {
            ctx->pc = 0x176B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b18;
        }
    }
    ctx->pc = 0x176BF0u;
    // 0x176bf0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x176bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x176bf4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x176bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x176bf8: 0x27b30074  addiu       $s3, $sp, 0x74
    ctx->pc = 0x176bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x176bfc: 0x27b40078  addiu       $s4, $sp, 0x78
    ctx->pc = 0x176bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x176c00: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x176c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x176c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176c0c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x176c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x176c10: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x176c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x176c14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x176c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176c18: 0x8e040c20  lw          $a0, 0xC20($s0)
    ctx->pc = 0x176c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176c1c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x176c1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176c20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176c24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x176c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x176c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176c2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176c30: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x176C30u;
    {
        const bool branch_taken_0x176c30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C30u;
        // 0x176c34: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c30) {
            ctx->pc = 0x176C7Cu;
            goto label_176c7c;
        }
    }
    ctx->pc = 0x176C38u;
    // 0x176c38: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c3c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c44: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c48: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176c4c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x176c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c50: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c58: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c5c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176c60: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x176c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176c64: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x176c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176c68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176c6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176c70: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176C74u;
    {
        const bool branch_taken_0x176c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C74u;
        // 0x176c78: 0xe482001c  swc1        $f2, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c74) {
            ctx->pc = 0x176C84u;
            goto label_176c84;
        }
    }
    ctx->pc = 0x176C7Cu;
label_176c7c:
    // 0x176c7c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176C7Cu;
    SET_GPR_U32(ctx, 31, 0x176C84u);
    ctx->pc = 0x176C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C7Cu;
    // 0x176c80: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176C7Cu, 0x176C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C84u;
label_176c84:
    // 0x176c84: 0x8e030c20  lw          $v1, 0xC20($s0)
    ctx->pc = 0x176c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176c8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x176c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176c90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x176c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176c98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176c9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x176ca0: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x176ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x176ca4: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176ca8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x176ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176cac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x176cb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x176cb4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x176CB4u;
    {
        const bool branch_taken_0x176cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CB4u;
        // 0x176cb8: 0x29100  sll         $s2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cb4) {
            ctx->pc = 0x176D3Cu;
            goto label_176d3c;
        }
    }
    ctx->pc = 0x176CBCu;
label_176cbc:
    // 0x176cbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176cc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cc4: 0x0  nop
    ctx->pc = 0x176cc4u;
    // NOP
    // 0x176cc8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x176cc8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
    // 0x176cd0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x176CD0u;
    {
        const bool branch_taken_0x176cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CD0u;
        // 0x176cd4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cd0) {
            ctx->pc = 0x176D20u;
            goto label_176d20;
        }
    }
    ctx->pc = 0x176CD8u;
    // 0x176cd8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176ce0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176ce4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176ce8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176cec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176cf0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x176cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176cf4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176cfc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176d00: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176d04: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x176d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176d08: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x176d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176d10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176d14: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176D18u;
    {
        const bool branch_taken_0x176d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D18u;
        // 0x176d1c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d18) {
            ctx->pc = 0x176D28u;
            goto label_176d28;
        }
    }
    ctx->pc = 0x176D20u;
label_176d20:
    // 0x176d20: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176D20u;
    SET_GPR_U32(ctx, 31, 0x176D28u);
    ctx->pc = 0x176D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D20u;
    // 0x176d24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176D20u, 0x176D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176D28u;
label_176d28:
    // 0x176d28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176d2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176d30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x176d34: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x176d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x176d38: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_176d3c:
    // 0x176d3c: 0x0  nop
    ctx->pc = 0x176d3cu;
    // NOP
    // 0x176d40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176d44: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x176d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176d48: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x176D48u;
    {
        const bool branch_taken_0x176d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176d48) {
            ctx->pc = 0x176CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cbc;
        }
    }
    ctx->pc = 0x176D50u;
    // 0x176d50: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x176d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x176d54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176d58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x176d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176d5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x176d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176d60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x176d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x176d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x176d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x176d74: 0x3e00008  jr          $ra
    ctx->pc = 0x176D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D74u;
        // 0x176d78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D7Cu;
}
