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

// Function: FUN_0015b090
// Address: 0x15b090 - 0x15b128
void FUN_0015b090_0x15b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b090_0x15b090");
#endif

    switch (ctx->pc) {
        case 0x15b0acu: goto label_15b0ac;
        default: break;
    }

    ctx->pc = 0x15b090u;

    // 0x15b090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15b0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0a4: 0xc056414  jal         func_159050
    ctx->pc = 0x15B0A4u;
    SET_GPR_U32(ctx, 31, 0x15B0ACu);
    ctx->pc = 0x15B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B0A4u;
    // 0x15b0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159050u, 0x15B0A4u, 0x15B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B0ACu;
label_15b0ac:
    // 0x15b0ac: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x15b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
    // 0x15b0b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15b0b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b0b8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x15b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b0bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15b0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15b0c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b0c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15b0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b0c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x15b0c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15b0cc: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x15b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x15b0d0: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x15b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x15b0d4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x15b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b0d8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15b0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b0dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15b0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15b0e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x15b0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15b0e4: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x15b0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x15b0e8: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x15b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b0ec: 0xc6210218  lwc1        $f1, 0x218($s1)
    ctx->pc = 0x15b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b0f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15b0f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b0f4: 0x0  nop
    ctx->pc = 0x15b0f4u;
    // NOP
    // 0x15b0f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15B0F8u;
    {
        const bool branch_taken_0x15b0f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b0f8) {
            ctx->pc = 0x15B108u;
            goto label_15b108;
        }
    }
    ctx->pc = 0x15B100u;
    // 0x15b100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B100u;
    {
        const bool branch_taken_0x15b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B100u;
        // 0x15b104: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b100) {
            ctx->pc = 0x15B10Cu;
            goto label_15b10c;
        }
    }
    ctx->pc = 0x15B108u;
label_15b108:
    // 0x15b108: 0xe6210200  swc1        $f1, 0x200($s1)
    ctx->pc = 0x15b108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_15b10c:
    // 0x15b10c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x15b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b110: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x15b110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x15b114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b120: 0x3e00008  jr          $ra
    ctx->pc = 0x15B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B128u;
}
