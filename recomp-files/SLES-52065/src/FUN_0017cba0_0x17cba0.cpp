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

// Function: FUN_0017cba0
// Address: 0x17cba0 - 0x17ccb8
void FUN_0017cba0_0x17cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017cba0_0x17cba0");
#endif

    ctx->pc = 0x17cba0u;

    // 0x17cba0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x17cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cba4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17cba8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x17cba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17cbac: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x17cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cbb0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x17cbb4: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x17cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x17cbb8: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x17cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x17cbbc: 0x46036240  add.s       $f9, $f12, $f3
    ctx->pc = 0x17cbbcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x17cbc0: 0x460160c0  add.s       $f3, $f12, $f1
    ctx->pc = 0x17cbc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x17cbc4: 0x46061842  mul.s       $f1, $f3, $f6
    ctx->pc = 0x17cbc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x17cbc8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x17cbc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x17cbcc: 0x46084842  mul.s       $f1, $f9, $f8
    ctx->pc = 0x17cbccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x17cbd0: 0x46010a9c  madd.s      $f10, $f1, $f1
    ctx->pc = 0x17cbd0u;
    ctx->f[10] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x17cbd4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x17cbd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x17cbd8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x17cbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17cbdc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x17cbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x17cbe0: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x17cbe0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x17cbe4: 0x46041842  mul.s       $f1, $f3, $f4
    ctx->pc = 0x17cbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x17cbe8: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x17cbe8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x17cbec: 0x46034842  mul.s       $f1, $f9, $f3
    ctx->pc = 0x17cbecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x17cbf0: 0xc4870008  lwc1        $f7, 0x8($a0)
    ctx->pc = 0x17cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x17cbf4: 0x460948c2  mul.s       $f3, $f9, $f9
    ctx->pc = 0x17cbf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x17cbf8: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x17cbf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x17cbfc: 0x4603419c  madd.s      $f6, $f8, $f3
    ctx->pc = 0x17cbfcu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x17cc00: 0x460748c2  mul.s       $f3, $f9, $f7
    ctx->pc = 0x17cc00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x17cc04: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x17cc04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x17cc08: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x17cc08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[4], ctx->f[3]));
    // 0x17cc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc10: 0x0  nop
    ctx->pc = 0x17cc10u;
    // NOP
    // 0x17cc14: 0x460108dd  msub.s      $f3, $f1, $f1
    ctx->pc = 0x17cc14u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x17cc18: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x17cc18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x17cc1c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x17cc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x17cc20: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x17cc20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x17cc24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17cc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17cc28: 0x0  nop
    ctx->pc = 0x17cc28u;
    // NOP
    // 0x17cc2c: 0x460300dd  msub.s      $f3, $f0, $f3
    ctx->pc = 0x17cc2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x17cc30: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x17cc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc34: 0x0  nop
    ctx->pc = 0x17cc34u;
    // NOP
    // 0x17cc38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17CC38u;
    {
        const bool branch_taken_0x17cc38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC38u;
        // 0x17cc3c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc38) {
            ctx->pc = 0x17CC4Cu;
            goto label_17cc4c;
        }
    }
    ctx->pc = 0x17CC40u;
    // 0x17cc40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17CC44u;
    {
        const bool branch_taken_0x17cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc44) {
            ctx->pc = 0x17CCB0u;
            goto label_17ccb0;
        }
    }
    ctx->pc = 0x17CC4Cu;
label_17cc4c:
    // 0x17cc4c: 0x0  nop
    ctx->pc = 0x17cc4cu;
    // NOP
    // 0x17cc50: 0x0  nop
    ctx->pc = 0x17cc50u;
    // NOP
    // 0x17cc54: 0x0  nop
    ctx->pc = 0x17cc54u;
    // NOP
    // 0x17cc58: 0x460300c4  c1          0x300C4
    ctx->pc = 0x17cc58u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x17cc5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17cc5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17cc60: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x17cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x17cc64: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x17cc64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x17cc68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17cc68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17cc6c: 0x0  nop
    ctx->pc = 0x17cc6cu;
    // NOP
    // 0x17cc70: 0x0  nop
    ctx->pc = 0x17cc70u;
    // NOP
    // 0x17cc74: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17cc74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc78: 0x0  nop
    ctx->pc = 0x17cc78u;
    // NOP
    // 0x17cc7c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17CC7Cu;
    {
        const bool branch_taken_0x17cc7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC7Cu;
        // 0x17cc80: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc7c) {
            ctx->pc = 0x17CCACu;
            goto label_17ccac;
        }
    }
    ctx->pc = 0x17CC84u;
    // 0x17cc84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cc8c: 0x0  nop
    ctx->pc = 0x17cc8cu;
    // NOP
    // 0x17cc90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc94: 0x0  nop
    ctx->pc = 0x17cc94u;
    // NOP
    // 0x17cc98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC98u;
    {
        const bool branch_taken_0x17cc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cc98) {
            ctx->pc = 0x17CCA8u;
            goto label_17cca8;
        }
    }
    ctx->pc = 0x17CCA0u;
    // 0x17cca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CCA0u;
    {
        const bool branch_taken_0x17cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cca0) {
            ctx->pc = 0x17CCB0u;
            goto label_17ccb0;
        }
    }
    ctx->pc = 0x17CCA8u;
label_17cca8:
    // 0x17cca8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_17ccac:
    // 0x17ccac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ccacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ccb0:
    // 0x17ccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CCB8u;
}
