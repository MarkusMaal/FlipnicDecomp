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

// Function: FUN_00164370
// Address: 0x164370 - 0x1643f4
void FUN_00164370_0x164370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164370_0x164370");
#endif

    switch (ctx->pc) {
        case 0x164384u: goto label_164384;
        default: break;
    }

    ctx->pc = 0x164370u;

    // 0x164370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16437c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16437Cu;
    SET_GPR_U32(ctx, 31, 0x164384u);
    ctx->pc = 0x164380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16437Cu;
    // 0x164380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16437Cu, 0x164384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164384u;
label_164384:
    // 0x164384: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x164384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164388: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x164388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16438c: 0x80a40022  lb          $a0, 0x22($a1)
    ctx->pc = 0x16438cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x164390: 0xa6040218  sh          $a0, 0x218($s0)
    ctx->pc = 0x164390u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 4));
    // 0x164394: 0x80a40023  lb          $a0, 0x23($a1)
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x164398: 0xa604021a  sh          $a0, 0x21A($s0)
    ctx->pc = 0x164398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 4));
    // 0x16439c: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x16439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x1643a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1643a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1643a4: 0xa6030240  sh          $v1, 0x240($s0)
    ctx->pc = 0x1643a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 576), (uint16_t)GPR_U32(ctx, 3));
    // 0x1643a8: 0x80830027  lb          $v1, 0x27($a0)
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x1643ac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1643acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1643b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1643b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1643b4: 0x0  nop
    ctx->pc = 0x1643b4u;
    // NOP
    // 0x1643b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1643b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1643bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1643bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1643c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1643c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1643c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1643c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1643c8: 0x0  nop
    ctx->pc = 0x1643c8u;
    // NOP
    // 0x1643cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1643CCu;
    {
        const bool branch_taken_0x1643cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1643cc) {
            ctx->pc = 0x1643D8u;
            goto label_1643d8;
        }
    }
    ctx->pc = 0x1643D4u;
    // 0x1643d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1643d8:
    // 0x1643d8: 0xa6030242  sh          $v1, 0x242($s0)
    ctx->pc = 0x1643d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x1643dc: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1643e0: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1643e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1643e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1643e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1643e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1643ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643ECu;
        // 0x1643f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643F4u;
}
