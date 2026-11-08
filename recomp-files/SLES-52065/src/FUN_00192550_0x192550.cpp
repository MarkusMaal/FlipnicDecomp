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

// Function: FUN_00192550
// Address: 0x192550 - 0x192714
void FUN_00192550_0x192550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192550_0x192550");
#endif

    switch (ctx->pc) {
        case 0x192550u: goto label_192550;
        case 0x192554u: goto label_192554;
        case 0x192558u: goto label_192558;
        case 0x19255cu: goto label_19255c;
        case 0x192560u: goto label_192560;
        case 0x192564u: goto label_192564;
        case 0x192568u: goto label_192568;
        case 0x19256cu: goto label_19256c;
        case 0x192570u: goto label_192570;
        case 0x192574u: goto label_192574;
        case 0x192578u: goto label_192578;
        case 0x19257cu: goto label_19257c;
        case 0x192580u: goto label_192580;
        case 0x192584u: goto label_192584;
        case 0x192588u: goto label_192588;
        case 0x19258cu: goto label_19258c;
        case 0x192590u: goto label_192590;
        case 0x192594u: goto label_192594;
        case 0x192598u: goto label_192598;
        case 0x19259cu: goto label_19259c;
        case 0x1925a0u: goto label_1925a0;
        case 0x1925a4u: goto label_1925a4;
        case 0x1925a8u: goto label_1925a8;
        case 0x1925acu: goto label_1925ac;
        case 0x1925b0u: goto label_1925b0;
        case 0x1925b4u: goto label_1925b4;
        case 0x1925b8u: goto label_1925b8;
        case 0x1925bcu: goto label_1925bc;
        case 0x1925c0u: goto label_1925c0;
        case 0x1925c4u: goto label_1925c4;
        case 0x1925c8u: goto label_1925c8;
        case 0x1925ccu: goto label_1925cc;
        case 0x1925d0u: goto label_1925d0;
        case 0x1925d4u: goto label_1925d4;
        case 0x1925d8u: goto label_1925d8;
        case 0x1925dcu: goto label_1925dc;
        case 0x1925e0u: goto label_1925e0;
        case 0x1925e4u: goto label_1925e4;
        case 0x1925e8u: goto label_1925e8;
        case 0x1925ecu: goto label_1925ec;
        case 0x1925f0u: goto label_1925f0;
        case 0x1925f4u: goto label_1925f4;
        case 0x1925f8u: goto label_1925f8;
        case 0x1925fcu: goto label_1925fc;
        case 0x192600u: goto label_192600;
        case 0x192604u: goto label_192604;
        case 0x192608u: goto label_192608;
        case 0x19260cu: goto label_19260c;
        case 0x192610u: goto label_192610;
        case 0x192614u: goto label_192614;
        case 0x192618u: goto label_192618;
        case 0x19261cu: goto label_19261c;
        case 0x192620u: goto label_192620;
        case 0x192624u: goto label_192624;
        case 0x192628u: goto label_192628;
        case 0x19262cu: goto label_19262c;
        case 0x192630u: goto label_192630;
        case 0x192634u: goto label_192634;
        case 0x192638u: goto label_192638;
        case 0x19263cu: goto label_19263c;
        case 0x192640u: goto label_192640;
        case 0x192644u: goto label_192644;
        case 0x192648u: goto label_192648;
        case 0x19264cu: goto label_19264c;
        case 0x192650u: goto label_192650;
        case 0x192654u: goto label_192654;
        case 0x192658u: goto label_192658;
        case 0x19265cu: goto label_19265c;
        case 0x192660u: goto label_192660;
        case 0x192664u: goto label_192664;
        case 0x192668u: goto label_192668;
        case 0x19266cu: goto label_19266c;
        case 0x192670u: goto label_192670;
        case 0x192674u: goto label_192674;
        case 0x192678u: goto label_192678;
        case 0x19267cu: goto label_19267c;
        case 0x192680u: goto label_192680;
        case 0x192684u: goto label_192684;
        case 0x192688u: goto label_192688;
        case 0x19268cu: goto label_19268c;
        case 0x192690u: goto label_192690;
        case 0x192694u: goto label_192694;
        case 0x192698u: goto label_192698;
        case 0x19269cu: goto label_19269c;
        case 0x1926a0u: goto label_1926a0;
        case 0x1926a4u: goto label_1926a4;
        case 0x1926a8u: goto label_1926a8;
        case 0x1926acu: goto label_1926ac;
        case 0x1926b0u: goto label_1926b0;
        case 0x1926b4u: goto label_1926b4;
        case 0x1926b8u: goto label_1926b8;
        case 0x1926bcu: goto label_1926bc;
        case 0x1926c0u: goto label_1926c0;
        case 0x1926c4u: goto label_1926c4;
        case 0x1926c8u: goto label_1926c8;
        case 0x1926ccu: goto label_1926cc;
        case 0x1926d0u: goto label_1926d0;
        case 0x1926d4u: goto label_1926d4;
        case 0x1926d8u: goto label_1926d8;
        case 0x1926dcu: goto label_1926dc;
        case 0x1926e0u: goto label_1926e0;
        case 0x1926e4u: goto label_1926e4;
        case 0x1926e8u: goto label_1926e8;
        case 0x1926ecu: goto label_1926ec;
        case 0x1926f0u: goto label_1926f0;
        case 0x1926f4u: goto label_1926f4;
        case 0x1926f8u: goto label_1926f8;
        case 0x1926fcu: goto label_1926fc;
        case 0x192700u: goto label_192700;
        case 0x192704u: goto label_192704;
        case 0x192708u: goto label_192708;
        case 0x19270cu: goto label_19270c;
        case 0x192710u: goto label_192710;
        default: break;
    }

    ctx->pc = 0x192550u;

label_192550:
    // 0x192550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_192554:
    // 0x192554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_192558:
    // 0x192558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19255c:
    // 0x19255c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192560:
    // 0x192560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192564:
    // 0x192564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192568:
    // 0x192568: 0x10000012  b           . + 4 + (0x12 << 2)
label_19256c:
    if (ctx->pc == 0x19256Cu) {
        ctx->pc = 0x19256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192568u;
        // 0x19256c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192570u;
        goto label_192570;
    }
    ctx->pc = 0x192568u;
    {
        const bool branch_taken_0x192568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192568u;
        // 0x19256c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192568) {
            ctx->pc = 0x1925B4u;
            goto label_1925b4;
        }
    }
    ctx->pc = 0x192570u;
label_192570:
    // 0x192570: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_192574:
    // 0x192574: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x192574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_192578:
    // 0x192578: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x192578u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
label_19257c:
    // 0x19257c: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x19257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_192580:
    // 0x192580: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x192580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
label_192584:
    // 0x192584: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x192584u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_192588:
    // 0x192588: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192588u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_19258c:
    // 0x19258c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x19258cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_192590:
    // 0x192590: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_192594:
    if (ctx->pc == 0x192594u) {
        ctx->pc = 0x192594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192590u;
        // 0x192594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192598u;
        goto label_192598;
    }
    ctx->pc = 0x192590u;
    {
        const bool branch_taken_0x192590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192590u;
        // 0x192594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192590) {
            ctx->pc = 0x1925B0u;
            goto label_1925b0;
        }
    }
    ctx->pc = 0x192598u;
label_192598:
    // 0x192598: 0xc0648ec  jal         func_1923B0
label_19259c:
    if (ctx->pc == 0x19259Cu) {
        ctx->pc = 0x1925A0u;
        goto label_1925a0;
    }
    ctx->pc = 0x192598u;
    SET_GPR_U32(ctx, 31, 0x1925A0u);
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x192598u, 0x1925A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925A0u;
label_1925a0:
    // 0x1925a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1925a4:
    if (ctx->pc == 0x1925A4u) {
        ctx->pc = 0x1925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925A0u;
        // 0x1925a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925A8u;
        goto label_1925a8;
    }
    ctx->pc = 0x1925A0u;
    {
        const bool branch_taken_0x1925a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1925A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925A0u;
        // 0x1925a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925a0) {
            ctx->pc = 0x1925B0u;
            goto label_1925b0;
        }
    }
    ctx->pc = 0x1925A8u;
label_1925a8:
    // 0x1925a8: 0xc064954  jal         func_192550
label_1925ac:
    if (ctx->pc == 0x1925ACu) {
        ctx->pc = 0x1925B0u;
        goto label_1925b0;
    }
    ctx->pc = 0x1925A8u;
    SET_GPR_U32(ctx, 31, 0x1925B0u);
    ctx->pc = 0x192550u;
    goto label_192550;
    ctx->pc = 0x1925B0u;
label_1925b0:
    // 0x1925b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1925b4:
    // 0x1925b4: 0x0  nop
    ctx->pc = 0x1925b4u;
    // NOP
label_1925b8:
    // 0x1925b8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1925b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1925bc:
    // 0x1925bc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1925c0:
    if (ctx->pc == 0x1925C0u) {
        ctx->pc = 0x1925C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925BCu;
        // 0x1925c0: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925C4u;
        goto label_1925c4;
    }
    ctx->pc = 0x1925BCu;
    {
        const bool branch_taken_0x1925bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925BCu;
        // 0x1925c0: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925bc) {
            ctx->pc = 0x192570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192570;
        }
    }
    ctx->pc = 0x1925C4u;
label_1925c4:
    // 0x1925c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1925c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1925c8:
    // 0x1925c8: 0x7a220550  lq          $v0, 0x550($s1)
    ctx->pc = 0x1925c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_1925cc:
    // 0x1925cc: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1925ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
label_1925d0:
    // 0x1925d0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1925d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1925d4:
    // 0x1925d4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1925d4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1925d8:
    // 0x1925d8: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x1925d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1925dc:
    // 0x1925dc: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_1925e0:
    if (ctx->pc == 0x1925E0u) {
        ctx->pc = 0x1925E4u;
        goto label_1925e4;
    }
    ctx->pc = 0x1925DCu;
    {
        const bool branch_taken_0x1925dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1925dc) {
            ctx->pc = 0x1926DCu;
            goto label_1926dc;
        }
    }
    ctx->pc = 0x1925E4u;
label_1925e4:
    // 0x1925e4: 0x7a220550  lq          $v0, 0x550($s1)
    ctx->pc = 0x1925e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_1925e8:
    // 0x1925e8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1925e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1925ec:
    // 0x1925ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1925ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1925f0:
    // 0x1925f0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_1925f4:
    // 0x1925f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1925f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1925f8:
    // 0x1925f8: 0x7822d6e0  lq          $v0, -0x2920($at)
    ctx->pc = 0x1925f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956768)));
label_1925fc:
    // 0x1925fc: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x1925fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_192600:
    // 0x192600: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x192600u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_192604:
    // 0x192604: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192604u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_192608:
    // 0x192608: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_19260c:
    // 0x19260c: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_192610:
    // 0x192610: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_192614:
    if (ctx->pc == 0x192614u) {
        ctx->pc = 0x192614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192610u;
        // 0x192614: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192618u;
        goto label_192618;
    }
    ctx->pc = 0x192610u;
    {
        const bool branch_taken_0x192610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x192614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192610u;
        // 0x192614: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192610) {
            ctx->pc = 0x192620u;
            goto label_192620;
        }
    }
    ctx->pc = 0x192618u;
label_192618:
    // 0x192618: 0x10000017  b           . + 4 + (0x17 << 2)
label_19261c:
    if (ctx->pc == 0x19261Cu) {
        ctx->pc = 0x19261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192618u;
        // 0x19261c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192620u;
        goto label_192620;
    }
    ctx->pc = 0x192618u;
    {
        const bool branch_taken_0x192618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192618u;
        // 0x19261c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192618) {
            ctx->pc = 0x192678u;
            goto label_192678;
        }
    }
    ctx->pc = 0x192620u;
label_192620:
    // 0x192620: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x192620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
label_192624:
    // 0x192624: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x192624u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_192628:
    // 0x192628: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192628u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_19262c:
    // 0x19262c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x19262cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_192630:
    // 0x192630: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x192630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_192634:
    // 0x192634: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_192638:
    if (ctx->pc == 0x192638u) {
        ctx->pc = 0x19263Cu;
        goto label_19263c;
    }
    ctx->pc = 0x192634u;
    {
        const bool branch_taken_0x192634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192634) {
            ctx->pc = 0x19265Cu;
            goto label_19265c;
        }
    }
    ctx->pc = 0x19263Cu;
label_19263c:
    // 0x19263c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19263cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_192640:
    // 0x192640: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_192644:
    // 0x192644: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_192648:
    // 0x192648: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192648u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_19264c:
    // 0x19264c: 0xc063f40  jal         func_18FD00
label_192650:
    if (ctx->pc == 0x192650u) {
        ctx->pc = 0x192650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19264Cu;
        // 0x192650: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192654u;
        goto label_192654;
    }
    ctx->pc = 0x19264Cu;
    SET_GPR_U32(ctx, 31, 0x192654u);
    ctx->pc = 0x192650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19264Cu;
    // 0x192650: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19264Cu, 0x192654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x10000008  b           . + 4 + (0x8 << 2)
label_192658:
    if (ctx->pc == 0x192658u) {
        ctx->pc = 0x192658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192654u;
        // 0x192658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19265Cu;
        goto label_19265c;
    }
    ctx->pc = 0x192654u;
    {
        const bool branch_taken_0x192654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192654u;
        // 0x192658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192654) {
            ctx->pc = 0x192678u;
            goto label_192678;
        }
    }
    ctx->pc = 0x19265Cu;
label_19265c:
    // 0x19265c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x19265cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_192660:
    // 0x192660: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_192664:
    // 0x192664: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_192668:
    // 0x192668: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_19266c:
    // 0x19266c: 0xc063f40  jal         func_18FD00
label_192670:
    if (ctx->pc == 0x192670u) {
        ctx->pc = 0x192670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19266Cu;
        // 0x192670: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192674u;
        goto label_192674;
    }
    ctx->pc = 0x19266Cu;
    SET_GPR_U32(ctx, 31, 0x192674u);
    ctx->pc = 0x192670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19266Cu;
    // 0x192670: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19266Cu, 0x192674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192674u;
label_192674:
    // 0x192674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192678:
    // 0x192678: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_19267c:
    if (ctx->pc == 0x19267Cu) {
        ctx->pc = 0x19267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192678u;
        // 0x19267c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192680u;
        goto label_192680;
    }
    ctx->pc = 0x192678u;
    {
        const bool branch_taken_0x192678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192678u;
        // 0x19267c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192678) {
            ctx->pc = 0x1926DCu;
            goto label_1926dc;
        }
    }
    ctx->pc = 0x192680u;
label_192680:
    // 0x192680: 0x10000012  b           . + 4 + (0x12 << 2)
label_192684:
    if (ctx->pc == 0x192684u) {
        ctx->pc = 0x192688u;
        goto label_192688;
    }
    ctx->pc = 0x192680u;
    {
        const bool branch_taken_0x192680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192680) {
            ctx->pc = 0x1926CCu;
            goto label_1926cc;
        }
    }
    ctx->pc = 0x192688u;
label_192688:
    // 0x192688: 0xc063dd0  jal         func_18F740
label_19268c:
    if (ctx->pc == 0x19268Cu) {
        ctx->pc = 0x19268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192688u;
        // 0x19268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192690u;
        goto label_192690;
    }
    ctx->pc = 0x192688u;
    SET_GPR_U32(ctx, 31, 0x192690u);
    ctx->pc = 0x19268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192688u;
    // 0x19268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192688u, 0x192690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192690u;
label_192690:
    // 0x192690: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x192690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_192694:
    // 0x192694: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x192694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_192698:
    // 0x192698: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x192698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19269c:
    // 0x19269c: 0x78820560  lq          $v0, 0x560($a0)
    ctx->pc = 0x19269cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1376)));
label_1926a0:
    // 0x1926a0: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x1926a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1926a4:
    // 0x1926a4: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1926a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_1926a8:
    // 0x1926a8: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1926a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_1926ac:
    // 0x1926ac: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1926acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1926b0:
    // 0x1926b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1926b4:
    if (ctx->pc == 0x1926B4u) {
        ctx->pc = 0x1926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B0u;
        // 0x1926b4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1926B8u;
        goto label_1926b8;
    }
    ctx->pc = 0x1926B0u;
    {
        const bool branch_taken_0x1926b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B0u;
        // 0x1926b4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926b0) {
            ctx->pc = 0x1926C4u;
            goto label_1926c4;
        }
    }
    ctx->pc = 0x1926B8u;
label_1926b8:
    // 0x1926b8: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x1926b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 4294956800)));
label_1926bc:
    // 0x1926bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1926c0:
    if (ctx->pc == 0x1926C0u) {
        ctx->pc = 0x1926C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926BCu;
        // 0x1926c0: 0x7c830560  sq          $v1, 0x560($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1926C4u;
        goto label_1926c4;
    }
    ctx->pc = 0x1926BCu;
    {
        const bool branch_taken_0x1926bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926BCu;
        // 0x1926c0: 0x7c830560  sq          $v1, 0x560($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926bc) {
            ctx->pc = 0x1926DCu;
            goto label_1926dc;
        }
    }
    ctx->pc = 0x1926C4u;
label_1926c4:
    // 0x1926c4: 0x0  nop
    ctx->pc = 0x1926c4u;
    // NOP
label_1926c8:
    // 0x1926c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1926c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1926cc:
    // 0x1926cc: 0x0  nop
    ctx->pc = 0x1926ccu;
    // NOP
label_1926d0:
    // 0x1926d0: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1926d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_1926d4:
    // 0x1926d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1926d8:
    if (ctx->pc == 0x1926D8u) {
        ctx->pc = 0x1926DCu;
        goto label_1926dc;
    }
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x192688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192688;
        }
    }
    ctx->pc = 0x1926DCu;
label_1926dc:
    // 0x1926dc: 0x0  nop
    ctx->pc = 0x1926dcu;
    // NOP
label_1926e0:
    // 0x1926e0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1926e4:
    if (ctx->pc == 0x1926E4u) {
        ctx->pc = 0x1926E8u;
        goto label_1926e8;
    }
    ctx->pc = 0x1926E0u;
    {
        const bool branch_taken_0x1926e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926e0) {
            ctx->pc = 0x1926FCu;
            goto label_1926fc;
        }
    }
    ctx->pc = 0x1926E8u;
label_1926e8:
    // 0x1926e8: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1926e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1926ec:
    // 0x1926ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1926ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1926f0:
    // 0x1926f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1926f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1926f4:
    // 0x1926f4: 0x320f809  jalr        $t9
label_1926f8:
    if (ctx->pc == 0x1926F8u) {
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1926FCu;
        goto label_1926fc;
    }
    ctx->pc = 0x1926F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1926FCu);
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926F4u, 0x1926FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1926FCu;
label_1926fc:
    // 0x1926fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1926fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192700:
    // 0x192700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192704:
    // 0x192704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192708:
    // 0x192708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19270c:
    // 0x19270c: 0x3e00008  jr          $ra
label_192710:
    if (ctx->pc == 0x192710u) {
        ctx->pc = 0x192710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19270Cu;
        // 0x192710: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192714u;
        goto label_fallthrough_0x19270c;
    }
    ctx->pc = 0x19270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19270Cu;
        // 0x192710: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19270c:
    ctx->pc = 0x192714u;
}
