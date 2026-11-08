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

// Function: FUN_001ab7e0
// Address: 0x1ab7e0 - 0x1ab8bc
void FUN_001ab7e0_0x1ab7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab7e0_0x1ab7e0");
#endif

    switch (ctx->pc) {
        case 0x1ab820u: goto label_1ab820;
        case 0x1ab838u: goto label_1ab838;
        case 0x1ab854u: goto label_1ab854;
        default: break;
    }

    ctx->pc = 0x1ab7e0u;

    // 0x1ab7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab7ec: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1ab7ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ab7f0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB7F0u;
    {
        const bool branch_taken_0x1ab7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7F0u;
        // 0x1ab7f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7f0) {
            ctx->pc = 0x1AB848u;
            goto label_1ab848;
        }
    }
    ctx->pc = 0x1AB7F8u;
    // 0x1ab7f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ab7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ab7fc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB7FCu;
    {
        const bool branch_taken_0x1ab7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7FCu;
        // 0x1ab800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7fc) {
            ctx->pc = 0x1AB84Cu;
            goto label_1ab84c;
        }
    }
    ctx->pc = 0x1AB804u;
    // 0x1ab804: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ab804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ab808: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1ab808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1ab80c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1ab80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ab810: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB810u;
    {
        const bool branch_taken_0x1ab810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab810) {
            ctx->pc = 0x1AB848u;
            goto label_1ab848;
        }
    }
    ctx->pc = 0x1AB818u;
    // 0x1ab818: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1AB818u;
    SET_GPR_U32(ctx, 31, 0x1AB820u);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1AB818u, 0x1AB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB820u;
label_1ab820:
    // 0x1ab820: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB820u;
    {
        const bool branch_taken_0x1ab820 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ab820) {
            ctx->pc = 0x1AB840u;
            goto label_1ab840;
        }
    }
    ctx->pc = 0x1AB828u;
    // 0x1ab828: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab82c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ab830: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1AB830u;
    SET_GPR_U32(ctx, 31, 0x1AB838u);
    ctx->pc = 0x1AB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB830u;
    // 0x1ab834: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1AB830u, 0x1AB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB838u;
label_1ab838:
    // 0x1ab838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB838u;
    {
        const bool branch_taken_0x1ab838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB838u;
        // 0x1ab83c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab838) {
            ctx->pc = 0x1AB844u;
            goto label_1ab844;
        }
    }
    ctx->pc = 0x1AB840u;
label_1ab840:
    // 0x1ab840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab844:
    // 0x1ab844: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x1ab844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
label_1ab848:
    // 0x1ab848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab84c:
    // 0x1ab84c: 0xc06ae5c  jal         func_1AB970
    ctx->pc = 0x1AB84Cu;
    SET_GPR_U32(ctx, 31, 0x1AB854u);
    ctx->pc = 0x1AB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB970u, 0x1AB84Cu, 0x1AB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB854u;
label_1ab854:
    // 0x1ab854: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB854u;
    {
        const bool branch_taken_0x1ab854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab854) {
            ctx->pc = 0x1AB888u;
            goto label_1ab888;
        }
    }
    ctx->pc = 0x1AB85Cu;
    // 0x1ab85c: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x1ab85cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab860: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ab864: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab86c: 0x0  nop
    ctx->pc = 0x1ab86cu;
    // NOP
    // 0x1ab870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab874: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab878: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ab87c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ab880: 0x0  nop
    ctx->pc = 0x1ab880u;
    // NOP
    // 0x1ab884: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ab884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ab888:
    // 0x1ab888: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1ab888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ab88c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB88Cu;
    {
        const bool branch_taken_0x1ab88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab88c) {
            ctx->pc = 0x1AB8A8u;
            goto label_1ab8a8;
        }
    }
    ctx->pc = 0x1AB894u;
    // 0x1ab894: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ab898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab89c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB89Cu;
    {
        const bool branch_taken_0x1ab89c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab89c) {
            ctx->pc = 0x1AB8A8u;
            goto label_1ab8a8;
        }
    }
    ctx->pc = 0x1AB8A4u;
    // 0x1ab8a4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ab8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ab8a8:
    // 0x1ab8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B4u;
        // 0x1ab8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB8BCu;
}
