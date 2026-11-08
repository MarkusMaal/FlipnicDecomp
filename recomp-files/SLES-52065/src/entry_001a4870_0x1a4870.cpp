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

// Function: entry_001a4870
// Address: 0x1a4870 - 0x1a4918
void entry_001a4870_0x1a4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4870_0x1a4870");
#endif

    switch (ctx->pc) {
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a4900u: goto label_1a4900;
        default: break;
    }

    ctx->pc = 0x1a4870u;

label_1a4870:
    // 0x1a4870: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
label_1a4874:
    if (ctx->pc == 0x1A4874u) {
        ctx->pc = 0x1A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4870u;
        // 0x1a4874: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4878u;
        goto label_1a4878;
    }
    ctx->pc = 0x1A4870u;
    {
        const bool branch_taken_0x1a4870 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4870u;
        // 0x1a4874: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4870) {
            ctx->pc = 0x1A491Cu;
            return;
        }
    }
    ctx->pc = 0x1A4878u;
label_1a4878:
    // 0x1a4878: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a487c:
    // 0x1a487c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a4880:
    // 0x1a4880: 0xae230670  sw          $v1, 0x670($s1)
    ctx->pc = 0x1a4880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
label_1a4884:
    // 0x1a4884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a4888:
    // 0x1a4888: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a488c:
    // 0x1a488c: 0x8e23067c  lw          $v1, 0x67C($s1)
    ctx->pc = 0x1a488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a4890:
    // 0x1a4890: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
label_1a4894:
    // 0x1a4894: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4898:
    // 0x1a4898: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a489c:
    // 0x1a489c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a489cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a48a0:
    // 0x1a48a0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1a48a4:
    // 0x1a48a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a48a8:
    // 0x1a48a8: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_1a48ac:
    // 0x1a48ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a48acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a48b0:
    // 0x1a48b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a48b4:
    // 0x1a48b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a48b8:
    // 0x1a48b8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a48bc:
    // 0x1a48bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a48bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a48c0:
    // 0x1a48c0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a48c4:
    // 0x1a48c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a48c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a48c8:
    // 0x1a48c8: 0x0  nop
    ctx->pc = 0x1a48c8u;
    // NOP
label_1a48cc:
    // 0x1a48cc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1a48ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a48d0:
    // 0x1a48d0: 0x0  nop
    ctx->pc = 0x1a48d0u;
    // NOP
label_1a48d4:
    // 0x1a48d4: 0x0  nop
    ctx->pc = 0x1a48d4u;
    // NOP
label_1a48d8:
    // 0x1a48d8: 0x3012  mflo        $a2
    ctx->pc = 0x1a48d8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1a48dc:
    // 0x1a48dc: 0xc04bf38  jal         func_12FCE0
label_1a48e0:
    if (ctx->pc == 0x1A48E0u) {
        ctx->pc = 0x1A48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48DCu;
        // 0x1a48e0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48E4u;
        goto label_1a48e4;
    }
    ctx->pc = 0x1A48DCu;
    SET_GPR_U32(ctx, 31, 0x1A48E4u);
    ctx->pc = 0x1A48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48DCu;
    // 0x1a48e0: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1A48DCu, 0x1A48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48E4u;
label_1a48e4:
    // 0x1a48e4: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a48e8:
    // 0x1a48e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a48ec:
    // 0x1a48ec: 0x24a5d5d0  addiu       $a1, $a1, -0x2A30
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956496));
label_1a48f0:
    // 0x1a48f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a48f4:
    // 0x1a48f4: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a48f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a48f8:
    // 0x1a48f8: 0x320f809  jalr        $t9
label_1a48fc:
    if (ctx->pc == 0x1A48FCu) {
        ctx->pc = 0x1A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F8u;
        // 0x1a48fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4900u;
        goto label_1a4900;
    }
    ctx->pc = 0x1A48F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4900u);
        ctx->pc = 0x1A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F8u;
        // 0x1a48fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48F8u, 0x1A4900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4900u;
label_1a4900:
    // 0x1a4900: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1a4904:
    // 0x1a4904: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a4908:
    if (ctx->pc == 0x1A4908u) {
        ctx->pc = 0x1A490Cu;
        goto label_1a490c;
    }
    ctx->pc = 0x1A4904u;
    {
        const bool branch_taken_0x1a4904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4904) {
            ctx->pc = 0x1A4918u;
            return;
        }
    }
    ctx->pc = 0x1A490Cu;
label_1a490c:
    // 0x1a490c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4910:
    // 0x1a4910: 0xc0692d8  jal         func_1A4B60
label_1a4914:
    if (ctx->pc == 0x1A4914u) {
        ctx->pc = 0x1A4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4910u;
        // 0x1a4914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4918u;
        goto label_fallthrough_0x1a4910;
    }
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4910u;
    // 0x1a4914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4910u, 0x1A4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1a4910:
    ctx->pc = 0x1A4918u;
}
