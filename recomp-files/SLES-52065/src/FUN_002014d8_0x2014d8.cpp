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

// Function: FUN_002014d8
// Address: 0x2014d8 - 0x201590
void FUN_002014d8_0x2014d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002014d8_0x2014d8");
#endif

    switch (ctx->pc) {
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        default: break;
    }

    ctx->pc = 0x2014d8u;

label_2014d8:
    // 0x2014d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2014dc:
    // 0x2014dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2014dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2014e0:
    // 0x2014e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2014e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2014e4:
    // 0x2014e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2014e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2014e8:
    // 0x2014e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2014e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2014ec:
    // 0x2014ec: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2014ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2014f0:
    // 0x2014f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2014f4:
    if (ctx->pc == 0x2014F4u) {
        ctx->pc = 0x2014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014F0u;
        // 0x2014f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014F8u;
        goto label_2014f8;
    }
    ctx->pc = 0x2014F0u;
    {
        const bool branch_taken_0x2014f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014F0u;
        // 0x2014f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014f0) {
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x2014F8u;
label_2014f8:
    // 0x2014f8: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2014fc:
    // 0x2014fc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_201500:
    if (ctx->pc == 0x201500u) {
        ctx->pc = 0x201500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014FCu;
        // 0x201500: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201504u;
        goto label_201504;
    }
    ctx->pc = 0x2014FCu;
    {
        const bool branch_taken_0x2014fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x201500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014FCu;
        // 0x201500: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014fc) {
            ctx->pc = 0x201520u;
            goto label_201520;
        }
    }
    ctx->pc = 0x201504u;
label_201504:
    // 0x201504: 0xc0804ba  jal         func_2012E8
label_201508:
    if (ctx->pc == 0x201508u) {
        ctx->pc = 0x201508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201504u;
        // 0x201508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20150Cu;
        goto label_20150c;
    }
    ctx->pc = 0x201504u;
    SET_GPR_U32(ctx, 31, 0x20150Cu);
    ctx->pc = 0x201508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201504u;
    // 0x201508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x201504u, 0x20150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20150Cu;
label_20150c:
    // 0x20150c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_201510:
    if (ctx->pc == 0x201510u) {
        ctx->pc = 0x201510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20150Cu;
        // 0x201510: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201514u;
        goto label_201514;
    }
    ctx->pc = 0x20150Cu;
    {
        const bool branch_taken_0x20150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20150c) {
            ctx->pc = 0x201510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20150Cu;
            // 0x201510: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20151Cu;
            goto label_20151c;
        }
    }
    ctx->pc = 0x201514u;
label_201514:
    // 0x201514: 0x10000019  b           . + 4 + (0x19 << 2)
label_201518:
    if (ctx->pc == 0x201518u) {
        ctx->pc = 0x201518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201514u;
        // 0x201518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20151Cu;
        goto label_20151c;
    }
    ctx->pc = 0x201514u;
    {
        const bool branch_taken_0x201514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201514u;
        // 0x201518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201514) {
            ctx->pc = 0x20157Cu;
            goto label_20157c;
        }
    }
    ctx->pc = 0x20151Cu;
label_20151c:
    // 0x20151c: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_201520:
    // 0x201520: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_201524:
    // 0x201524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201528:
    // 0x201528: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_20152c:
    if (ctx->pc == 0x20152Cu) {
        ctx->pc = 0x20152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201528u;
        // 0x20152c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201530u;
        goto label_201530;
    }
    ctx->pc = 0x201528u;
    {
        const bool branch_taken_0x201528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201528u;
        // 0x20152c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201528) {
            ctx->pc = 0x20157Cu;
            goto label_20157c;
        }
    }
    ctx->pc = 0x201530u;
label_201530:
    // 0x201530: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_201534:
    if (ctx->pc == 0x201534u) {
        ctx->pc = 0x201538u;
        goto label_201538;
    }
    ctx->pc = 0x201530u;
    {
        const bool branch_taken_0x201530 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x201530) {
            ctx->pc = 0x20154Cu;
            goto label_20154c;
        }
    }
    ctx->pc = 0x201538u;
label_201538:
    // 0x201538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20153c:
    // 0x20153c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_201540:
    if (ctx->pc == 0x201540u) {
        ctx->pc = 0x201540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20153Cu;
        // 0x201540: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201544u;
        goto label_201544;
    }
    ctx->pc = 0x20153Cu;
    {
        const bool branch_taken_0x20153c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20153Cu;
        // 0x201540: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20153c) {
            ctx->pc = 0x20155Cu;
            goto label_20155c;
        }
    }
    ctx->pc = 0x201544u;
label_201544:
    // 0x201544: 0x10000009  b           . + 4 + (0x9 << 2)
label_201548:
    if (ctx->pc == 0x201548u) {
        ctx->pc = 0x201548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201544u;
        // 0x201548: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20154Cu;
        goto label_20154c;
    }
    ctx->pc = 0x201544u;
    {
        const bool branch_taken_0x201544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201544u;
        // 0x201548: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201544) {
            ctx->pc = 0x20156Cu;
            goto label_20156c;
        }
    }
    ctx->pc = 0x20154Cu;
label_20154c:
    // 0x20154c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_201550:
    if (ctx->pc == 0x201550u) {
        ctx->pc = 0x201550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20154Cu;
        // 0x201550: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201554u;
        goto label_201554;
    }
    ctx->pc = 0x20154Cu;
    {
        const bool branch_taken_0x20154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20154Cu;
        // 0x201550: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20154c) {
            ctx->pc = 0x201564u;
            goto label_201564;
        }
    }
    ctx->pc = 0x201554u;
label_201554:
    // 0x201554: 0x10000005  b           . + 4 + (0x5 << 2)
label_201558:
    if (ctx->pc == 0x201558u) {
        ctx->pc = 0x201558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201554u;
        // 0x201558: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20155Cu;
        goto label_20155c;
    }
    ctx->pc = 0x201554u;
    {
        const bool branch_taken_0x201554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201554u;
        // 0x201558: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201554) {
            ctx->pc = 0x20156Cu;
            goto label_20156c;
        }
    }
    ctx->pc = 0x20155Cu;
label_20155c:
    // 0x20155c: 0x10000007  b           . + 4 + (0x7 << 2)
label_201560:
    if (ctx->pc == 0x201560u) {
        ctx->pc = 0x201560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20155Cu;
        // 0x201560: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201564u;
        goto label_201564;
    }
    ctx->pc = 0x20155Cu;
    {
        const bool branch_taken_0x20155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20155Cu;
        // 0x201560: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20155c) {
            ctx->pc = 0x20157Cu;
            goto label_20157c;
        }
    }
    ctx->pc = 0x201564u;
label_201564:
    // 0x201564: 0x10000005  b           . + 4 + (0x5 << 2)
label_201568:
    if (ctx->pc == 0x201568u) {
        ctx->pc = 0x201568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201564u;
        // 0x201568: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20156Cu;
        goto label_20156c;
    }
    ctx->pc = 0x201564u;
    {
        const bool branch_taken_0x201564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201564u;
        // 0x201568: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201564) {
            ctx->pc = 0x20157Cu;
            goto label_20157c;
        }
    }
    ctx->pc = 0x20156Cu;
label_20156c:
    // 0x20156c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201570:
    // 0x201570: 0x60f809  jalr        $v1
label_201574:
    if (ctx->pc == 0x201574u) {
        ctx->pc = 0x201574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201570u;
        // 0x201574: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201578u;
        goto label_201578;
    }
    ctx->pc = 0x201570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201578u);
        ctx->pc = 0x201574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201570u;
        // 0x201574: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201570u, 0x201578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201578u;
label_201578:
    // 0x201578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20157c:
    // 0x20157c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_201580:
    // 0x201580: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x201580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201584:
    // 0x201584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201588:
    // 0x201588: 0x3e00008  jr          $ra
label_20158c:
    if (ctx->pc == 0x20158Cu) {
        ctx->pc = 0x20158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201588u;
        // 0x20158c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201590u;
        goto label_fallthrough_0x201588;
    }
    ctx->pc = 0x201588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201588u;
        // 0x20158c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201588:
    ctx->pc = 0x201590u;
}
