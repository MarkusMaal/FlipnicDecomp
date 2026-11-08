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

// Function: entry_0016523c
// Address: 0x16523c - 0x1652f8
void entry_0016523c_0x16523c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016523c_0x16523c");
#endif

    ctx->pc = 0x16523cu;

    // 0x16523c: 0x0  nop
    ctx->pc = 0x16523cu;
    // NOP
    // 0x165240: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x165244: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x165244u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165248: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x165248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16524c: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x16524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165250: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x165250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x165254: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x165254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x165258: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x165258u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x16525c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16525cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165260: 0xe6600344  swc1        $f0, 0x344($s3)
    ctx->pc = 0x165260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 836), bits); }
    // 0x165264: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x165264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165268: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x165268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x16526c: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x16526cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165270: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x165270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x165274: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x165274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x165278: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x165278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x16527c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x16527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165280: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x165280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x165284: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x165284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x165288: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x165288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x16528c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165290: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x165290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x165294: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x165294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165298: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x165298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x16529c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16529cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1652a0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1652a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1652a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1652a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1652ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1652acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1652b0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1652b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1652b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1652b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652b8: 0x8e640340  lw          $a0, 0x340($s3)
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
    // 0x1652bc: 0xc6610344  lwc1        $f1, 0x344($s3)
    ctx->pc = 0x1652bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1652c0: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1652c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1652c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1652c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1652c8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1652cc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1652ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1652d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1652d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1652d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1652d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1652d8: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1652d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1652dc: 0xae600280  sw          $zero, 0x280($s3)
    ctx->pc = 0x1652dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 0));
    // 0x1652e0: 0xae630334  sw          $v1, 0x334($s3)
    ctx->pc = 0x1652e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 3));
    // 0x1652e4: 0xae6002f0  sw          $zero, 0x2F0($s3)
    ctx->pc = 0x1652e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 0));
    // 0x1652e8: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x1652e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
    // 0x1652ec: 0xae600304  sw          $zero, 0x304($s3)
    ctx->pc = 0x1652ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 0));
    // 0x1652f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1652F0u;
    {
        const bool branch_taken_0x1652f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1652F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652F0u;
        // 0x1652f4: 0xae600300  sw          $zero, 0x300($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652f0) {
            ctx->pc = 0x165304u;
            return;
        }
    }
    ctx->pc = 0x1652F8u;
}
