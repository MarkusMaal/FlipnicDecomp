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

// Function: entry_001762c0
// Address: 0x1762c0 - 0x176374
void entry_001762c0_0x1762c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001762c0_0x1762c0");
#endif

    ctx->pc = 0x1762c0u;

    // 0x1762c0: 0x8e620c28  lw          $v0, 0xC28($s3)
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3112)));
    // 0x1762c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1762c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1762cc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1762d0: 0x8c680048  lw          $t0, 0x48($v1)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1762d4: 0x1448005f  bne         $v0, $t0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x176454u;
            return;
        }
    }
    ctx->pc = 0x1762DCu;
    // 0x1762dc: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x1762dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x1762e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1762e4: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x1762e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1762e8: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1762e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1762ec: 0xc421f5c8  lwc1        $f1, -0xA38($at)
    ctx->pc = 0x1762ecu;
    { uint32_t bits = FAST_READ32(0x21F5C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1762f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1762f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1762f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1762F4u;
    {
        const bool branch_taken_0x1762f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F4u;
        // 0x1762f8: 0x460208c2  mul.s       $f3, $f1, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f4) {
            ctx->pc = 0x176374u;
            return;
        }
    }
    ctx->pc = 0x1762FCu;
    // 0x1762fc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1762fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176300: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176304: 0x0  nop
    ctx->pc = 0x176304u;
    // NOP
    // 0x176308: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x176308u;
    {
        const bool branch_taken_0x176308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x176308) {
            ctx->pc = 0x1763D8u;
            return;
        }
    }
    ctx->pc = 0x176310u;
    // 0x176310: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x176310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176314: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x176314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176318: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x17631c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17631cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x176320: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x176320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x176324: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x176324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176328: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x176328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17632c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x17632cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x176330: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x176330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x176334: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x176334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x176338: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x176338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17633c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x17633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176340: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x176340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x176344: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x176344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x176348: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x176348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x17634c: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x17634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176350: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x176350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x176354: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x176354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x176358: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x176358u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x17635c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17635cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176360: 0x0  nop
    ctx->pc = 0x176360u;
    // NOP
    // 0x176364: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x176364u;
    {
        const bool branch_taken_0x176364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176364) {
            ctx->pc = 0x1763D8u;
            return;
        }
    }
    ctx->pc = 0x17636Cu;
    // 0x17636c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17636Cu;
    {
        const bool branch_taken_0x17636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17636Cu;
        // 0x176370: 0xe4600040  swc1        $f0, 0x40($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17636c) {
            ctx->pc = 0x1763D8u;
            return;
        }
    }
    ctx->pc = 0x176374u;
}
