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

// Function: FUN_00145520
// Address: 0x145520 - 0x1456c4
void FUN_00145520_0x145520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145520_0x145520");
#endif

    switch (ctx->pc) {
        case 0x145564u: goto label_145564;
        case 0x14556cu: goto label_14556c;
        case 0x145580u: goto label_145580;
        case 0x145590u: goto label_145590;
        case 0x1455c0u: goto label_1455c0;
        case 0x145660u: goto label_145660;
        case 0x145678u: goto label_145678;
        case 0x145680u: goto label_145680;
        default: break;
    }

    ctx->pc = 0x145520u;

    // 0x145520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145524: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x145528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14552c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14552cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x145530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14553c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x14553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x145540: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x145540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x145544: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x145548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145544u;
        // 0x145548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145544) {
            ctx->pc = 0x14556Cu;
            goto label_14556c;
        }
    }
    ctx->pc = 0x14554Cu;
    // 0x14554c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145550: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145554: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x145558: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14555c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14555Cu;
    SET_GPR_U32(ctx, 31, 0x145564u);
    ctx->pc = 0x145560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14555Cu;
    // 0x145560: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14555Cu, 0x145564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145564u;
label_145564:
    // 0x145564: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x145564u;
    SET_GPR_U32(ctx, 31, 0x14556Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x145564u, 0x14556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14556Cu;
label_14556c:
    // 0x14556c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145570: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x145570u;
    {
        const bool branch_taken_0x145570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145570u;
        // 0x145574: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145570) {
            ctx->pc = 0x145590u;
            goto label_145590;
        }
    }
    ctx->pc = 0x145578u;
    // 0x145578: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x145578u;
    SET_GPR_U32(ctx, 31, 0x145580u);
    ctx->pc = 0x14557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145578u;
    // 0x14557c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x145578u, 0x145580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145580u;
label_145580:
    // 0x145580: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x145584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x145584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145588: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x145588u;
    SET_GPR_U32(ctx, 31, 0x145590u);
    ctx->pc = 0x14558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145588u;
    // 0x14558c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x145588u, 0x145590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145590u;
label_145590:
    // 0x145590: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145594: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x145594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145598: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x145598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14559c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1455a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1455a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1455a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1455a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1455a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1455ac: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1455ACu;
    {
        const bool branch_taken_0x1455ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455ACu;
        // 0x1455b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455ac) {
            ctx->pc = 0x1455C0u;
            goto label_1455c0;
        }
    }
    ctx->pc = 0x1455B4u;
    // 0x1455b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1455b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455b8: 0xc051660  jal         func_145980
    ctx->pc = 0x1455B8u;
    SET_GPR_U32(ctx, 31, 0x1455C0u);
    ctx->pc = 0x1455BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455B8u;
    // 0x1455bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x1455B8u, 0x1455C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455C0u;
label_1455c0:
    // 0x1455c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1455c4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1455c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1455c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1455cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1455d0: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1455d4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1455D4u;
    {
        const bool branch_taken_0x1455d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455d4) {
            ctx->pc = 0x145604u;
            goto label_145604;
        }
    }
    ctx->pc = 0x1455DCu;
    // 0x1455dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1455e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1455e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1455e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1455ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1455f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1455f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1455f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1455fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1455FCu;
    {
        const bool branch_taken_0x1455fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455FCu;
        // 0x145600: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455fc) {
            ctx->pc = 0x145650u;
            goto label_145650;
        }
    }
    ctx->pc = 0x145604u;
label_145604:
    // 0x145604: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x145604u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x145608: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14560c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x14560cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x145610: 0x3012  mflo        $a2
    ctx->pc = 0x145610u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x145614: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x145614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x145618: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x145618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14561c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14561Cu;
    {
        const bool branch_taken_0x14561c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14561c) {
            ctx->pc = 0x145628u;
            goto label_145628;
        }
    }
    ctx->pc = 0x145624u;
    // 0x145624: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x145624u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_145628:
    // 0x145628: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x145628u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x14562c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145630: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x145630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x145634: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x145634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x145638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14563c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145640: 0x2010  mfhi        $a0
    ctx->pc = 0x145640u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x145644: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x145644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x145648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x145648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14564c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x14564cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_145650:
    // 0x145650: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x145654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145658: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145658u;
    {
        const bool branch_taken_0x145658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145658u;
        // 0x14565c: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145658) {
            ctx->pc = 0x145690u;
            goto label_145690;
        }
    }
    ctx->pc = 0x145660u;
label_145660:
    // 0x145660: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x145664: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x145664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14566c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145670: 0xc0401a4  jal         func_100690
    ctx->pc = 0x145670u;
    SET_GPR_U32(ctx, 31, 0x145678u);
    ctx->pc = 0x145674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145670u;
    // 0x145674: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x145670u, 0x145678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145678u;
label_145678:
    // 0x145678: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x145678u;
    SET_GPR_U32(ctx, 31, 0x145680u);
    ctx->pc = 0x14567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145678u;
    // 0x14567c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x145678u, 0x145680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145680u;
label_145680:
    // 0x145680: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x145680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145684: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x145684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145688: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14568c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x14568cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_145690:
    // 0x145690: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145694: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x145698: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14569c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1456a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1456a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1456a4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1456a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1456a8: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1456A8u;
    {
        const bool branch_taken_0x1456a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456a8) {
            ctx->pc = 0x145660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145660;
        }
    }
    ctx->pc = 0x1456B0u;
    // 0x1456b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1456b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1456b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1456b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1456b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1456b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1456bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1456BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1456C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456BCu;
        // 0x1456c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1456C4u;
}
