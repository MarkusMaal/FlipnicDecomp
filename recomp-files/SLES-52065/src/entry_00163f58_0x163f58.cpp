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

// Function: entry_00163f58
// Address: 0x163f58 - 0x164010
void entry_00163f58_0x163f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163f58_0x163f58");
#endif

    ctx->pc = 0x163f58u;

    // 0x163f58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163f5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x163f5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163f60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x163f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f64: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x163f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f68: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x163f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x163f6c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x163f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x163f70: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x163f70u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x163f74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163f78: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x163f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
    // 0x163f7c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x163f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f80: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163f84: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163f88: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163f8c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163f90: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x163f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x163f94: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x163f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163f98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163f9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163fa0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x163fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x163fa4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x163fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fa8: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163fac: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fb0: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163fb4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163fb8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x163fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x163fbc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x163fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163fc8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x163fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x163fcc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x163fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fd0: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x163fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x163fd4: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x163fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fd8: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x163fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x163fdc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x163fe0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x163fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x163fe4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x163fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fe8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163fe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x163fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163ff0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x163ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x163ff4: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x163ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
    // 0x163ff8: 0xae630334  sw          $v1, 0x334($s3)
    ctx->pc = 0x163ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 3));
    // 0x163ffc: 0xae6002f0  sw          $zero, 0x2F0($s3)
    ctx->pc = 0x163ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 0));
    // 0x164000: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x164000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
    // 0x164004: 0xae600304  sw          $zero, 0x304($s3)
    ctx->pc = 0x164004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 0));
    // 0x164008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164008u;
    {
        const bool branch_taken_0x164008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164008u;
        // 0x16400c: 0xae600300  sw          $zero, 0x300($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164008) {
            ctx->pc = 0x16401Cu;
            return;
        }
    }
    ctx->pc = 0x164010u;
}
