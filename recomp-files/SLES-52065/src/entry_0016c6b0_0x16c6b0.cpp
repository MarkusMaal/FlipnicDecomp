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

// Function: entry_0016c6b0
// Address: 0x16c6b0 - 0x16c73c
void entry_0016c6b0_0x16c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c6b0_0x16c6b0");
#endif

    ctx->pc = 0x16c6b0u;

    // 0x16c6b0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x16c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c6b4: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
    // 0x16c6b8: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x16c6bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16c6c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c6c4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x16c6c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16c6cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16c6ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16c6d0: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
    // 0x16c6d4: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c6dc: 0x0  nop
    ctx->pc = 0x16c6dcu;
    // NOP
    // 0x16c6e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16c6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c6e8: 0x0  nop
    ctx->pc = 0x16c6e8u;
    // NOP
    // 0x16c6ec: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x16C6ECu;
    {
        const bool branch_taken_0x16c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6ECu;
        // 0x16c6f0: 0xe6210224  swc1        $f1, 0x224($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6ec) {
            ctx->pc = 0x16C84Cu;
            return;
        }
    }
    ctx->pc = 0x16C6F4u;
    // 0x16c6f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16c6f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16c6f8: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16c6fc: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16c6fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x16c700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c704: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x16c704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c708: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16c708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x16c70c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x16c70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16c710: 0x1420004e  bnez        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x16C710u;
    {
        const bool branch_taken_0x16c710 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C710u;
        // 0x16c714: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c710) {
            ctx->pc = 0x16C84Cu;
            return;
        }
    }
    ctx->pc = 0x16C718u;
    // 0x16c718: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C718u;
    {
        const bool branch_taken_0x16c718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c718) {
            ctx->pc = 0x16C73Cu;
            return;
        }
    }
    ctx->pc = 0x16C720u;
    // 0x16c720: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16c724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c728: 0x0  nop
    ctx->pc = 0x16c728u;
    // NOP
    // 0x16c72c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16c72cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c730: 0x0  nop
    ctx->pc = 0x16c730u;
    // NOP
    // 0x16c734: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x16C734u;
    {
        const bool branch_taken_0x16c734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c734) {
            ctx->pc = 0x16C79Cu;
            return;
        }
    }
    ctx->pc = 0x16C73Cu;
}
