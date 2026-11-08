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

// Function: entry_001784a8
// Address: 0x1784a8 - 0x178540
void entry_001784a8_0x1784a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001784a8_0x1784a8");
#endif

    switch (ctx->pc) {
        case 0x1784d0u: goto label_1784d0;
        case 0x178514u: goto label_178514;
        default: break;
    }

    ctx->pc = 0x1784a8u;

label_1784a8:
    // 0x1784a8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1784a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1784ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1784acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1784b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1784b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1784b4: 0x0  nop
    ctx->pc = 0x1784b4u;
    // NOP
    // 0x1784b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1784b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1784bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1784bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1784c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1784c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1784c4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1784c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1784c8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1784C8u;
    SET_GPR_U32(ctx, 31, 0x1784D0u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1784C8u, 0x1784D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784D0u;
label_1784d0:
    // 0x1784d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1784d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1784d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1784d8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1784d8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1784dc: 0x0  nop
    ctx->pc = 0x1784dcu;
    // NOP
    // 0x1784e0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1784e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1784e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1784e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1784e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1784e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1784ec: 0x0  nop
    ctx->pc = 0x1784ecu;
    // NOP
    // 0x1784f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1784f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1784f4: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1784f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1784f8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1784f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1784fc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x1784fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x178500: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x178500u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x178504: 0x0  nop
    ctx->pc = 0x178504u;
    // NOP
    // 0x178508: 0x0  nop
    ctx->pc = 0x178508u;
    // NOP
    // 0x17850c: 0xc05e1c0  jal         func_178700
    ctx->pc = 0x17850Cu;
    SET_GPR_U32(ctx, 31, 0x178514u);
    ctx->pc = 0x178700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178700u, 0x17850Cu, 0x178514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178514u;
label_178514:
    // 0x178514: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178518: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x178518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17851c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17851Cu;
    {
        const bool branch_taken_0x17851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17851Cu;
        // 0x178520: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17851c) {
            ctx->pc = 0x1784A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1784a8;
        }
    }
    ctx->pc = 0x178524u;
    // 0x178524: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x178528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17852c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17852cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178538: 0x3e00008  jr          $ra
    ctx->pc = 0x178538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178538u;
        // 0x17853c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178540u;
}
