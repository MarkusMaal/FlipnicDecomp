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

// Function: entry_0010b4f4
// Address: 0x10b4f4 - 0x10b594
void entry_0010b4f4_0x10b4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b4f4_0x10b4f4");
#endif

    switch (ctx->pc) {
        case 0x10b520u: goto label_10b520;
        case 0x10b534u: goto label_10b534;
        case 0x10b548u: goto label_10b548;
        case 0x10b55cu: goto label_10b55c;
        case 0x10b57cu: goto label_10b57c;
        case 0x10b58cu: goto label_10b58c;
        default: break;
    }

    ctx->pc = 0x10b4f4u;

label_10b4f4:
    // 0x10b4f4: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
label_10b4f8:
    if (ctx->pc == 0x10B4F8u) {
        ctx->pc = 0x10B4FCu;
        goto label_10b4fc;
    }
    ctx->pc = 0x10B4F4u;
    {
        const bool branch_taken_0x10b4f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b4f4) {
            ctx->pc = 0x10B614u;
            return;
        }
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x8603024e  lh          $v1, 0x24E($s0)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10b500:
    // 0x10b500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b504:
    // 0x10b504: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_10b508:
    if (ctx->pc == 0x10B508u) {
        ctx->pc = 0x10B50Cu;
        goto label_10b50c;
    }
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B594u;
            return;
        }
    }
    ctx->pc = 0x10B50Cu;
label_10b50c:
    // 0x10b50c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b510:
    // 0x10b510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b514:
    // 0x10b514: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b518:
    // 0x10b518: 0x320f809  jalr        $t9
label_10b51c:
    if (ctx->pc == 0x10B51Cu) {
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B518u;
        // 0x10b51c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B520u;
        goto label_10b520;
    }
    ctx->pc = 0x10B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B520u);
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B518u;
        // 0x10b51c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B518u, 0x10B520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0x8e022324  lw          $v0, 0x2324($s0)
    ctx->pc = 0x10b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8996)));
label_10b524:
    // 0x10b524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b528:
    // 0x10b528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10b52c:
    // 0x10b52c: 0xc042118  jal         func_108460
label_10b530:
    if (ctx->pc == 0x10B530u) {
        ctx->pc = 0x10B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B52Cu;
        // 0x10b530: 0xae022320  sw          $v0, 0x2320($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B534u;
        goto label_10b534;
    }
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B52Cu;
    // 0x10b530: 0xae022320  sw          $v0, 0x2320($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8992), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10B52Cu, 0x10B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10b538:
    // 0x10b538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b53c:
    // 0x10b53c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b540:
    // 0x10b540: 0xc0425a4  jal         func_109690
label_10b544:
    if (ctx->pc == 0x10B544u) {
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B540u;
        // 0x10b544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B548u;
        goto label_10b548;
    }
    ctx->pc = 0x10B540u;
    SET_GPR_U32(ctx, 31, 0x10B548u);
    ctx->pc = 0x10B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B540u;
    // 0x10b544: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10B540u, 0x10B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B548u;
label_10b548:
    // 0x10b548: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b54c:
    // 0x10b54c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10b54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10b550:
    // 0x10b550: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x10b550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_10b554:
    // 0x10b554: 0x320f809  jalr        $t9
label_10b558:
    if (ctx->pc == 0x10B558u) {
        ctx->pc = 0x10B55Cu;
        goto label_10b55c;
    }
    ctx->pc = 0x10B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B55Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B554u, 0x10B55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B55Cu;
label_10b55c:
    // 0x10b55c: 0xc6012324  lwc1        $f1, 0x2324($s0)
    ctx->pc = 0x10b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10b560:
    // 0x10b560: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10b564:
    // 0x10b564: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10b568:
    // 0x10b568: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10b568u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10b56c:
    // 0x10b56c: 0x0  nop
    ctx->pc = 0x10b56cu;
    // NOP
label_10b570:
    // 0x10b570: 0x0  nop
    ctx->pc = 0x10b570u;
    // NOP
label_10b574:
    // 0x10b574: 0xc04c72c  jal         func_131CB0
label_10b578:
    if (ctx->pc == 0x10B578u) {
        ctx->pc = 0x10B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B574u;
        // 0x10b578: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B57Cu;
        goto label_10b57c;
    }
    ctx->pc = 0x10B574u;
    SET_GPR_U32(ctx, 31, 0x10B57Cu);
    ctx->pc = 0x10B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B574u;
    // 0x10b578: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x10B574u, 0x10B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B57Cu;
label_10b57c:
    // 0x10b57c: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
label_10b580:
    // 0x10b580: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x10b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_10b584:
    // 0x10b584: 0xc042930  jal         func_10A4C0
label_10b588:
    if (ctx->pc == 0x10B588u) {
        ctx->pc = 0x10B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B584u;
        // 0x10b588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B58Cu;
        goto label_10b58c;
    }
    ctx->pc = 0x10B584u;
    SET_GPR_U32(ctx, 31, 0x10B58Cu);
    ctx->pc = 0x10B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B584u;
    // 0x10b588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4C0u, 0x10B584u, 0x10B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B58Cu;
label_10b58c:
    // 0x10b58c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_10b590:
    if (ctx->pc == 0x10B590u) {
        ctx->pc = 0x10B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B58Cu;
        // 0x10b590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B594u;
        goto label_fallthrough_0x10b58c;
    }
    ctx->pc = 0x10B58Cu;
    {
        const bool branch_taken_0x10b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B58Cu;
        // 0x10b590: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b58c) {
            ctx->pc = 0x10B818u;
            return;
        }
    }
label_fallthrough_0x10b58c:
    ctx->pc = 0x10B594u;
}
