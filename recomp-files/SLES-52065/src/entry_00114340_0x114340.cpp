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

// Function: entry_00114340
// Address: 0x114340 - 0x1143cc
void entry_00114340_0x114340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114340_0x114340");
#endif

    switch (ctx->pc) {
        case 0x114354u: goto label_114354;
        default: break;
    }

    ctx->pc = 0x114340u;

label_114340:
    // 0x114340: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114344:
    // 0x114344: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114348:
    // 0x114348: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x114348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_11434c:
    // 0x11434c: 0x320f809  jalr        $t9
label_114350:
    if (ctx->pc == 0x114350u) {
        ctx->pc = 0x114350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11434Cu;
        // 0x114350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114354u;
        goto label_114354;
    }
    ctx->pc = 0x11434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114354u);
        ctx->pc = 0x114350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11434Cu;
        // 0x114350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11434Cu, 0x114354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114354u;
label_114354:
    // 0x114354: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114358:
    // 0x114358: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_11435c:
    // 0x11435c: 0x144000ba  bnez        $v0, . + 4 + (0xBA << 2)
label_114360:
    if (ctx->pc == 0x114360u) {
        ctx->pc = 0x114364u;
        goto label_114364;
    }
    ctx->pc = 0x11435Cu;
    {
        const bool branch_taken_0x11435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11435c) {
            ctx->pc = 0x114648u;
            return;
        }
    }
    ctx->pc = 0x114364u;
label_114364:
    // 0x114364: 0x93828250  lbu         $v0, -0x7DB0($gp)
    ctx->pc = 0x114364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935120)));
label_114368:
    // 0x114368: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_11436c:
    if (ctx->pc == 0x11436Cu) {
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114370u;
        goto label_114370;
    }
    ctx->pc = 0x114368u;
    {
        const bool branch_taken_0x114368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114368) {
            ctx->pc = 0x1143D0u;
            return;
        }
    }
    ctx->pc = 0x114370u;
label_114370:
    // 0x114370: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_114374:
    // 0x114374: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x114374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_114378:
    // 0x114378: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x114378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_11437c:
    // 0x11437c: 0x8e42027c  lw          $v0, 0x27C($s2)
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 636)));
label_114380:
    // 0x114380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x114380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_114384:
    // 0x114384: 0x0  nop
    ctx->pc = 0x114384u;
    // NOP
label_114388:
    // 0x114388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x114388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11438c:
    // 0x11438c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114390:
    // 0x114390: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_114394:
    // 0x114394: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_114398:
    // 0x114398: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x114398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_11439c:
    // 0x11439c: 0x0  nop
    ctx->pc = 0x11439cu;
    // NOP
label_1143a0:
    // 0x1143a0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1143a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1143a4:
    // 0x1143a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1143a8:
    if (ctx->pc == 0x1143A8u) {
        ctx->pc = 0x1143A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143A4u;
        // 0x1143a8: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143ACu;
        goto label_1143ac;
    }
    ctx->pc = 0x1143A4u;
    {
        const bool branch_taken_0x1143a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143A4u;
        // 0x1143a8: 0xae42027c  sw          $v0, 0x27C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143a4) {
            ctx->pc = 0x1143CCu;
            return;
        }
    }
    ctx->pc = 0x1143ACu;
label_1143ac:
    // 0x1143ac: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x1143acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
label_1143b0:
    // 0x1143b0: 0x8f82824c  lw          $v0, -0x7DB4($gp)
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_1143b4:
    // 0x1143b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1143b8:
    // 0x1143b8: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1143b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
label_1143bc:
    // 0x1143bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1143c0:
    if (ctx->pc == 0x1143C0u) {
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xaf82824c  sw          $v0, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1143C4u;
        goto label_1143c4;
    }
    ctx->pc = 0x1143BCu;
    {
        const bool branch_taken_0x1143bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143BCu;
        // 0x1143c0: 0xaf82824c  sw          $v0, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143bc) {
            ctx->pc = 0x1143CCu;
            return;
        }
    }
    ctx->pc = 0x1143C4u;
label_1143c4:
    // 0x1143c4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1143c8:
    // 0x1143c8: 0xaf82824c  sw          $v0, -0x7DB4($gp)
    ctx->pc = 0x1143c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 2));
    ctx->pc = 0x1143ccu;
}
