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

// Function: FUN_00179960
// Address: 0x179960 - 0x179ab4
void FUN_00179960_0x179960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179960_0x179960");
#endif

    switch (ctx->pc) {
        case 0x179988u: goto label_179988;
        case 0x179990u: goto label_179990;
        case 0x1799c8u: goto label_1799c8;
        case 0x179a04u: goto label_179a04;
        case 0x179a48u: goto label_179a48;
        case 0x179a50u: goto label_179a50;
        default: break;
    }

    ctx->pc = 0x179960u;

    // 0x179960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x179964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x179968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17996c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17997c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179984: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179988:
    // 0x179988: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x179988u;
    SET_GPR_U32(ctx, 31, 0x179990u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x179988u, 0x179990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179990u;
label_179990:
    // 0x179990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179994: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x179994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x179998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17999c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1799a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1799a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1799a4: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x1799a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x1799a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1799a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1799ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1799acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1799b0: 0x0  nop
    ctx->pc = 0x1799b0u;
    // NOP
    // 0x1799b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1799b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1799b8: 0x0  nop
    ctx->pc = 0x1799b8u;
    // NOP
    // 0x1799bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1799bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1799c0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1799C0u;
    SET_GPR_U32(ctx, 31, 0x1799C8u);
    ctx->pc = 0x1799C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799C0u;
    // 0x1799c4: 0xe6400070  swc1        $f0, 0x70($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1799C0u, 0x1799C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799C8u;
label_1799c8:
    // 0x1799c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1799c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1799cc: 0x0  nop
    ctx->pc = 0x1799ccu;
    // NOP
    // 0x1799d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1799d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1799d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1799d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1799d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1799d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1799dc: 0x0  nop
    ctx->pc = 0x1799dcu;
    // NOP
    // 0x1799e0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1799e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1799e4: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x1799e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x1799e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1799e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1799ec: 0x0  nop
    ctx->pc = 0x1799ecu;
    // NOP
    // 0x1799f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1799f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1799f4: 0x0  nop
    ctx->pc = 0x1799f4u;
    // NOP
    // 0x1799f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1799f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1799fc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1799FCu;
    SET_GPR_U32(ctx, 31, 0x179A04u);
    ctx->pc = 0x179A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1799FCu;
    // 0x179a00: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1799FCu, 0x179A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A04u;
label_179a04:
    // 0x179a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x179a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x179a0c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x179a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x179a10: 0x2653007c  addiu       $s3, $s2, 0x7C
    ctx->pc = 0x179a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x179a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x179a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x179a18: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x179a1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x179a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179a24: 0x0  nop
    ctx->pc = 0x179a24u;
    // NOP
    // 0x179a28: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x179a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x179a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a30: 0x0  nop
    ctx->pc = 0x179a30u;
    // NOP
    // 0x179a34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x179a34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x179a38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x179a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x179a3c: 0xe6400078  swc1        $f0, 0x78($s2)
    ctx->pc = 0x179a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x179a40: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179A40u;
    SET_GPR_U32(ctx, 31, 0x179A48u);
    ctx->pc = 0x179A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A40u;
    // 0x179a44: 0xae43007c  sw          $v1, 0x7C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179A40u, 0x179A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A48u;
label_179a48:
    // 0x179a48: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x179A48u;
    SET_GPR_U32(ctx, 31, 0x179A50u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x179A48u, 0x179A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A50u;
label_179a50:
    // 0x179a50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179a54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x179a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x179a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x179a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179a60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x179a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x179a64: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x179a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x179a68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179a6c: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x179a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x179a70: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x179a70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179a74: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x179a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x179a78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x179a78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a7c: 0x0  nop
    ctx->pc = 0x179a7cu;
    // NOP
    // 0x179a80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x179a80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x179a84: 0x0  nop
    ctx->pc = 0x179a84u;
    // NOP
    // 0x179a88: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x179a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x179a8c: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x179A8Cu;
    {
        const bool branch_taken_0x179a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A8Cu;
        // 0x179a90: 0xae4400a0  sw          $a0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a8c) {
            ctx->pc = 0x179988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179988;
        }
    }
    ctx->pc = 0x179A94u;
    // 0x179a94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x179a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179aac: 0x3e00008  jr          $ra
    ctx->pc = 0x179AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AACu;
        // 0x179ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179AB4u;
}
