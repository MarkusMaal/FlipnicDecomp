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

// Function: FUN_0016d410
// Address: 0x16d410 - 0x16d508
void FUN_0016d410_0x16d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d410_0x16d410");
#endif

    switch (ctx->pc) {
        case 0x16d428u: goto label_16d428;
        case 0x16d43cu: goto label_16d43c;
        case 0x16d49cu: goto label_16d49c;
        default: break;
    }

    ctx->pc = 0x16d410u;

    // 0x16d410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d420: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16D420u;
    SET_GPR_U32(ctx, 31, 0x16D428u);
    ctx->pc = 0x16D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D420u;
    // 0x16d424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16D420u, 0x16D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D428u;
label_16d428:
    // 0x16d428: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x16d428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x16d42c: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x16d430: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x16d430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x16d434: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16D434u;
    SET_GPR_U32(ctx, 31, 0x16D43Cu);
    ctx->pc = 0x16D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D434u;
    // 0x16d438: 0x8e110224  lw          $s1, 0x224($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16D434u, 0x16D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D43Cu;
label_16d43c:
    // 0x16d43c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x16d43cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d440: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16d444: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16d444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16d448: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x16d44c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16d44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16d450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d454: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16d454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d45c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16d45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d460: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16d460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16d464: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x16d468: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16d468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16d46c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16d46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16d470: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x16d470u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d474: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16d474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d478: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16d478u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16d47c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16d47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16d480: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16d480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16d484: 0x0  nop
    ctx->pc = 0x16d484u;
    // NOP
    // 0x16d488: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x16d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x16d48c: 0xae0501d4  sw          $a1, 0x1D4($s0)
    ctx->pc = 0x16d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 5));
    // 0x16d490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d494: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D494u;
    SET_GPR_U32(ctx, 31, 0x16D49Cu);
    ctx->pc = 0x16D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D494u;
    // 0x16d498: 0xa046002b  sb          $a2, 0x2B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D494u, 0x16D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D49Cu;
label_16d49c:
    // 0x16d49c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d4a0: 0x80630024  lb          $v1, 0x24($v1)
    ctx->pc = 0x16d4a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16d4a4: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    // 0x16d4a8: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x16d4ac: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D4ACu;
    {
        const bool branch_taken_0x16d4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d4ac) {
            ctx->pc = 0x16D4F4u;
            goto label_16d4f4;
        }
    }
    ctx->pc = 0x16D4B4u;
    // 0x16d4b4: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x16d4b8: 0x8c642830  lw          $a0, 0x2830($v1)
    ctx->pc = 0x16d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10288)));
    // 0x16d4bc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D4BCu;
    {
        const bool branch_taken_0x16d4bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4BCu;
        // 0x16d4c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4bc) {
            ctx->pc = 0x16D4D0u;
            goto label_16d4d0;
        }
    }
    ctx->pc = 0x16D4C4u;
    // 0x16d4c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d4c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16D4C8u;
    {
        const bool branch_taken_0x16d4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4C8u;
        // 0x16d4cc: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4c8) {
            ctx->pc = 0x16D4F4u;
            goto label_16d4f4;
        }
    }
    ctx->pc = 0x16D4D0u;
label_16d4d0:
    // 0x16d4d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D4D0u;
    {
        const bool branch_taken_0x16d4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d4d0) {
            ctx->pc = 0x16D4E4u;
            goto label_16d4e4;
        }
    }
    ctx->pc = 0x16D4D8u;
    // 0x16d4d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d4dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16D4DCu;
    {
        const bool branch_taken_0x16d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4DCu;
        // 0x16d4e0: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4dc) {
            ctx->pc = 0x16D4F4u;
            goto label_16d4f4;
        }
    }
    ctx->pc = 0x16D4E4u;
label_16d4e4:
    // 0x16d4e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d4e8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D4E8u;
    {
        const bool branch_taken_0x16d4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4E8u;
        // 0x16d4ec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4e8) {
            ctx->pc = 0x16D4F4u;
            goto label_16d4f4;
        }
    }
    ctx->pc = 0x16D4F0u;
    // 0x16d4f0: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
label_16d4f4:
    // 0x16d4f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d4f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d4fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d500: 0x3e00008  jr          $ra
    ctx->pc = 0x16D500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D500u;
        // 0x16d504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D508u;
}
