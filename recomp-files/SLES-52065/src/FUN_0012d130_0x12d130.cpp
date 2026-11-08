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

// Function: FUN_0012d130
// Address: 0x12d130 - 0x12d234
void FUN_0012d130_0x12d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d130_0x12d130");
#endif

    ctx->pc = 0x12d130u;

    // 0x12d130: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x12d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12d134: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x12d134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x12d138: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x12d138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d13c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x12d140: 0xc4870034  lwc1        $f7, 0x34($a0)
    ctx->pc = 0x12d140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x12d144: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x12d144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x12d148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d14c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x12d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d150: 0xc4850060  lwc1        $f5, 0x60($a0)
    ctx->pc = 0x12d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12d154: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x12d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d158: 0xc4860064  lwc1        $f6, 0x64($a0)
    ctx->pc = 0x12d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12d15c: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x12d15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d160: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x12d160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12d164: 0x46050202  mul.s       $f8, $f0, $f5
    ctx->pc = 0x12d164u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x12d168: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x12d168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12d16c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x12d16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x12d170: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x12d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d174: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x12d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d178: 0x46003880  add.s       $f2, $f7, $f0
    ctx->pc = 0x12d178u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x12d17c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x12d17cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x12d180: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12D180u;
    {
        const bool branch_taken_0x12d180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D180u;
        // 0x12d184: 0x46081840  add.s       $f1, $f3, $f8 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d180) {
            ctx->pc = 0x12D1A4u;
            goto label_12d1a4;
        }
    }
    ctx->pc = 0x12D188u;
    // 0x12d188: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x12d18c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d18cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d190: 0x0  nop
    ctx->pc = 0x12d190u;
    // NOP
    // 0x12d194: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x12d194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d198: 0x0  nop
    ctx->pc = 0x12d198u;
    // NOP
    // 0x12d19c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D19Cu;
    {
        const bool branch_taken_0x12d19c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D19Cu;
        // 0x12d1a0: 0x3c03c360  lui         $v1, 0xC360 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d19c) {
            ctx->pc = 0x12D1B4u;
            goto label_12d1b4;
        }
    }
    ctx->pc = 0x12D1A4u;
label_12d1a4:
    // 0x12d1a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d1a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12D1A8u;
    {
        const bool branch_taken_0x12d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A8u;
        // 0x12d1ac: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1a8) {
            ctx->pc = 0x12D22Cu;
            goto label_12d22c;
        }
    }
    ctx->pc = 0x12D1B0u;
    // 0x12d1b0: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x12d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
label_12d1b4:
    // 0x12d1b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d1b8: 0x0  nop
    ctx->pc = 0x12d1b8u;
    // NOP
    // 0x12d1bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12d1bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d1c0: 0x0  nop
    ctx->pc = 0x12d1c0u;
    // NOP
    // 0x12d1c4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x12D1C4u;
    {
        const bool branch_taken_0x12d1c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d1c4) {
            ctx->pc = 0x12D22Cu;
            goto label_12d22c;
        }
    }
    ctx->pc = 0x12D1CCu;
    // 0x12d1cc: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x12d1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d1d4: 0x0  nop
    ctx->pc = 0x12d1d4u;
    // NOP
    // 0x12d1d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12d1d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d1dc: 0x0  nop
    ctx->pc = 0x12d1dcu;
    // NOP
    // 0x12d1e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12D1E0u;
    {
        const bool branch_taken_0x12d1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d1e0) {
            ctx->pc = 0x12D1F0u;
            goto label_12d1f0;
        }
    }
    ctx->pc = 0x12D1E8u;
    // 0x12d1e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D1E8u;
    {
        const bool branch_taken_0x12d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1e8) {
            ctx->pc = 0x12D22Cu;
            goto label_12d22c;
        }
    }
    ctx->pc = 0x12D1F0u;
label_12d1f0:
    // 0x12d1f0: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x12d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d1f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x12d1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x12d1f8: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x12d1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x12d1fc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x12d1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x12d200: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x12d200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x12d204: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x12d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d208: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x12d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d20c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x12d20cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x12d210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d214: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x12d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x12d218: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x12d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d21c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x12d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d224: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x12d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x12d228: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x12d228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
label_12d22c:
    // 0x12d22c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D234u;
}
