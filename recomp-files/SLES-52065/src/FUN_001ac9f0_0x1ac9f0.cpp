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

// Function: FUN_001ac9f0
// Address: 0x1ac9f0 - 0x1acacc
void FUN_001ac9f0_0x1ac9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac9f0_0x1ac9f0");
#endif

    switch (ctx->pc) {
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca64u: goto label_1aca64;
        default: break;
    }

    ctx->pc = 0x1ac9f0u;

    // 0x1ac9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ac9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac9fc: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1ac9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1aca00: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ACA00u;
    {
        const bool branch_taken_0x1aca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA00u;
        // 0x1aca04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca00) {
            ctx->pc = 0x1ACA58u;
            goto label_1aca58;
        }
    }
    ctx->pc = 0x1ACA08u;
    // 0x1aca08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1aca0c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ACA0Cu;
    {
        const bool branch_taken_0x1aca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA0Cu;
        // 0x1aca10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca0c) {
            ctx->pc = 0x1ACA5Cu;
            goto label_1aca5c;
        }
    }
    ctx->pc = 0x1ACA14u;
    // 0x1aca14: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aca18: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1aca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1aca1c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1aca1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1aca20: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACA20u;
    {
        const bool branch_taken_0x1aca20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca20) {
            ctx->pc = 0x1ACA58u;
            goto label_1aca58;
        }
    }
    ctx->pc = 0x1ACA28u;
    // 0x1aca28: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1ACA28u;
    SET_GPR_U32(ctx, 31, 0x1ACA30u);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1ACA28u, 0x1ACA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA30u;
label_1aca30:
    // 0x1aca30: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACA30u;
    {
        const bool branch_taken_0x1aca30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1aca30) {
            ctx->pc = 0x1ACA50u;
            goto label_1aca50;
        }
    }
    ctx->pc = 0x1ACA38u;
    // 0x1aca38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1aca38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1aca3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1aca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aca40: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1ACA40u;
    SET_GPR_U32(ctx, 31, 0x1ACA48u);
    ctx->pc = 0x1ACA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA40u;
    // 0x1aca44: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1ACA40u, 0x1ACA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA48u;
label_1aca48:
    // 0x1aca48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACA48u;
    {
        const bool branch_taken_0x1aca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA48u;
        // 0x1aca4c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca48) {
            ctx->pc = 0x1ACA54u;
            goto label_1aca54;
        }
    }
    ctx->pc = 0x1ACA50u;
label_1aca50:
    // 0x1aca50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca54:
    // 0x1aca54: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x1aca54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
label_1aca58:
    // 0x1aca58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aca5c:
    // 0x1aca5c: 0xc06b2cc  jal         func_1ACB30
    ctx->pc = 0x1ACA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA64u);
    ctx->pc = 0x1ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACB30u, 0x1ACA5Cu, 0x1ACA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA64u;
label_1aca64:
    // 0x1aca64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACA64u;
    {
        const bool branch_taken_0x1aca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca64) {
            ctx->pc = 0x1ACA98u;
            goto label_1aca98;
        }
    }
    ctx->pc = 0x1ACA6Cu;
    // 0x1aca6c: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x1aca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aca70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1aca74: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aca78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aca78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aca7c: 0x0  nop
    ctx->pc = 0x1aca7cu;
    // NOP
    // 0x1aca80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aca80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aca84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aca84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aca88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aca88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aca8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aca8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aca90: 0x0  nop
    ctx->pc = 0x1aca90u;
    // NOP
    // 0x1aca94: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1aca94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1aca98:
    // 0x1aca98: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1aca98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1aca9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACA9Cu;
    {
        const bool branch_taken_0x1aca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aca9c) {
            ctx->pc = 0x1ACAB8u;
            goto label_1acab8;
        }
    }
    ctx->pc = 0x1ACAA4u;
    // 0x1acaa4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1acaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1acaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acaac: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACAACu;
    {
        const bool branch_taken_0x1acaac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ACAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAACu;
        // 0x1acab0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaac) {
            ctx->pc = 0x1ACAB8u;
            goto label_1acab8;
        }
    }
    ctx->pc = 0x1ACAB4u;
    // 0x1acab4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1acab8:
    // 0x1acab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acabc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAC4u;
        // 0x1acac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACACCu;
}
