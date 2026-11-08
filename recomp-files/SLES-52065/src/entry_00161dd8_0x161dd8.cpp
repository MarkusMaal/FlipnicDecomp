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

// Function: entry_00161dd8
// Address: 0x161dd8 - 0x161e6c
void entry_00161dd8_0x161dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161dd8_0x161dd8");
#endif

    switch (ctx->pc) {
        case 0x161e44u: goto label_161e44;
        default: break;
    }

    ctx->pc = 0x161dd8u;

    // 0x161dd8: 0x86a201f4  lh          $v0, 0x1F4($s5)
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 500)));
    // 0x161ddc: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x161ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161de0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x161de4: 0x0  nop
    ctx->pc = 0x161de4u;
    // NOP
    // 0x161de8: 0x1010  mfhi        $v0
    ctx->pc = 0x161de8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161df0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x161df4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x161df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161df8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x161DF8u;
    {
        const bool branch_taken_0x161df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161df8) {
            ctx->pc = 0x161DA0u;
            return;
        }
    }
    ctx->pc = 0x161E00u;
    // 0x161e00: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x161e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e04: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161e08: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x161e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x161e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161e10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x161e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e18: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161e18u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161e1c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x161e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x161e20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x161e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x161e24: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x161e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e28: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x161e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161e30: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161e30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x161e34: 0x0  nop
    ctx->pc = 0x161e34u;
    // NOP
    // 0x161e38: 0x0  nop
    ctx->pc = 0x161e38u;
    // NOP
    // 0x161e3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x161E3Cu;
    SET_GPR_U32(ctx, 31, 0x161E44u);
    ctx->pc = 0x161E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161E3Cu;
    // 0x161e40: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x161E3Cu, 0x161E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161E44u;
label_161e44:
    // 0x161e44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x161e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161e48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x161e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161e4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161e50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161e54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161e64: 0x3e00008  jr          $ra
    ctx->pc = 0x161E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E64u;
        // 0x161e68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161E6Cu;
}
