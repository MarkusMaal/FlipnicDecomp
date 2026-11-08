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

// Function: FUN_001d2370
// Address: 0x1d2370 - 0x1d2740
void FUN_001d2370_0x1d2370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2370_0x1d2370");
#endif

    switch (ctx->pc) {
        case 0x1d2398u: goto label_1d2398;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d272cu: goto label_1d272c;
        default: break;
    }

    ctx->pc = 0x1d2370u;

    // 0x1d2370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d2374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d2378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d237c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2380: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2380u;
    {
        const bool branch_taken_0x1d2380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2380u;
        // 0x1d2384: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2380) {
            ctx->pc = 0x1D23A8u;
            goto label_1d23a8;
        }
    }
    ctx->pc = 0x1D2388u;
    // 0x1d2388: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d238c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d238cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2390: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2390u;
    SET_GPR_U32(ctx, 31, 0x1D2398u);
    ctx->pc = 0x1D2394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2390u;
    // 0x1d2394: 0x2484feb0  addiu       $a0, $a0, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2390u, 0x1D2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2398u;
label_1d2398:
    // 0x1d2398: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d239c: 0xac20fef0  sw          $zero, -0x110($at)
    ctx->pc = 0x1d239cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FEF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FEF0u, _value); } while (0);
    // 0x1d23a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d23a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d23a4: 0xac20fef8  sw          $zero, -0x108($at)
    ctx->pc = 0x1d23a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FEF8u, _value); } while (0);
label_1d23a8:
    // 0x1d23a8: 0x922301e0  lbu         $v1, 0x1E0($s1)
    ctx->pc = 0x1d23a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1d23ac: 0x146000df  bnez        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x1D23ACu;
    {
        const bool branch_taken_0x1d23ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d23ac) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D23B4u;
    // 0x1d23b4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1D23B4u;
    SET_GPR_U32(ctx, 31, 0x1D23BCu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1D23B4u, 0x1D23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23BCu;
label_1d23bc:
    // 0x1d23bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d23c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d23c4: 0x8c25fef0  lw          $a1, -0x110($at)
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d23c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d23cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d23d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d23d4: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1d23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1d23d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d23dc: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D23DCu;
    {
        const bool branch_taken_0x1d23dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23DCu;
        // 0x1d23e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23dc) {
            ctx->pc = 0x1D2478u;
            goto label_1d2478;
        }
    }
    ctx->pc = 0x1D23E4u;
    // 0x1d23e4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d23e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d23ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d23f0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1d23f4: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D23F4u;
    {
        const bool branch_taken_0x1d23f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d23f4) {
            ctx->pc = 0x1D2478u;
            goto label_1d2478;
        }
    }
    ctx->pc = 0x1D23FCu;
    // 0x1d23fc: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2424u;
            goto label_1d2424;
        }
    }
    ctx->pc = 0x1D2404u;
    // 0x1d2404: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d2408: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2408u;
    {
        const bool branch_taken_0x1d2408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2408) {
            ctx->pc = 0x1D2424u;
            goto label_1d2424;
        }
    }
    ctx->pc = 0x1D2410u;
    // 0x1d2410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2414: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2414u;
    {
        const bool branch_taken_0x1d2414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2414) {
            ctx->pc = 0x1D2424u;
            goto label_1d2424;
        }
    }
    ctx->pc = 0x1D241Cu;
    // 0x1d241c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D241Cu;
    {
        const bool branch_taken_0x1d241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D241Cu;
        // 0x1d2420: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d241c) {
            ctx->pc = 0x1D247Cu;
            goto label_1d247c;
        }
    }
    ctx->pc = 0x1D2424u;
label_1d2424:
    // 0x1d2424: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2428: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d242c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2430: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2438: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d243c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d2440: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1d2444: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2448: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d244c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d2450: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1d2450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1d2454: 0x8c24fef8  lw          $a0, -0x108($at)
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967032)));
    // 0x1d2458: 0x148300b4  bne         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1D2458u;
    {
        const bool branch_taken_0x1d2458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2458) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D2460u;
    // 0x1d2460: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2464: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2468: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D2468u;
    SET_GPR_U32(ctx, 31, 0x1D2470u);
    ctx->pc = 0x1D246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2468u;
    // 0x1d246c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D2468u, 0x1D2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2470u;
label_1d2470:
    // 0x1d2470: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1D2470u;
    {
        const bool branch_taken_0x1d2470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2470u;
        // 0x1d2474: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2470) {
            ctx->pc = 0x1D2730u;
            goto label_1d2730;
        }
    }
    ctx->pc = 0x1D2478u;
label_1d2478:
    // 0x1d2478: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d2478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d247c:
    // 0x1d247c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2480: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2484: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2488: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d248c: 0x8c25fef0  lw          $a1, -0x110($at)
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967024)));
    // 0x1d2490: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2494: 0x102000a5  beqz        $at, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D2494u;
    {
        const bool branch_taken_0x1d2494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2494) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D249Cu;
    // 0x1d249c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d24a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d24a4: 0x24843560  addiu       $a0, $a0, 0x3560
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
    // 0x1d24a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d24ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d24b0: 0x600008  jr          $v1
    ctx->pc = 0x1D24B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D24B8u: goto label_1d24b8;
            case 0x1D24F8u: goto label_1d24f8;
            case 0x1D2508u: goto label_1d2508;
            case 0x1D253Cu: goto label_1d253c;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F8u: goto label_1d25f8;
            case 0x1D2628u: goto label_1d2628;
            case 0x1D2684u: goto label_1d2684;
            case 0x1D26C8u: goto label_1d26c8;
            case 0x1D26F8u: goto label_1d26f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D24B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D24B8u;
label_1d24b8:
    // 0x1d24b8: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D24B8u;
    SET_GPR_U32(ctx, 31, 0x1D24C0u);
    ctx->pc = 0x1D24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24B8u;
    // 0x1d24bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D24B8u, 0x1D24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24C0u;
label_1d24c0:
    // 0x1d24c0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D24C0u;
    {
        const bool branch_taken_0x1d24c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24c0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D24C8u;
    // 0x1d24c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24d0: 0x8c22fef0  lw          $v0, -0x110($at)
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d24d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d24d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d24dc: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d24e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24e4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1D24E4u;
    SET_GPR_U32(ctx, 31, 0x1D24ECu);
    ctx->pc = 0x1D24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24E4u;
    // 0x1d24e8: 0xac22fef0  sw          $v0, -0x110($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1D24E4u, 0x1D24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24ECu;
label_1d24ec:
    // 0x1d24ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24f0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1D24F0u;
    {
        const bool branch_taken_0x1d24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24F0u;
        // 0x1d24f4: 0xac22ff00  sw          $v0, -0x100($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24f0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D24F8u;
label_1d24f8:
    // 0x1d24f8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d24fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2500: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1D2500u;
    {
        const bool branch_taken_0x1d2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2500u;
        // 0x1d2504: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2500) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D2508u;
label_1d2508:
    // 0x1d2508: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1D2508u;
    SET_GPR_U32(ctx, 31, 0x1D2510u);
    ctx->pc = 0x1D250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2508u;
    // 0x1d250c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1D2508u, 0x1D2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D2510u;
    {
        const bool branch_taken_0x1d2510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2510) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D2518u;
    // 0x1d2518: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d251c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2520: 0x8c24fef0  lw          $a0, -0x110($at)
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2524: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2528: 0xac23fef8  sw          $v1, -0x108($at)
    ctx->pc = 0x1d2528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FEF8u, _value); } while (0);
    // 0x1d252c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2530: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2534: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D2534u;
    {
        const bool branch_taken_0x1d2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2534u;
        // 0x1d2538: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2534) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D253Cu;
label_1d253c:
    // 0x1d253c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d253cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2540: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2544: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2544u;
    SET_GPR_U32(ctx, 31, 0x1D254Cu);
    ctx->pc = 0x1D2548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2544u;
    // 0x1d2548: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2544u, 0x1D254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D254Cu;
label_1d254c:
    // 0x1d254c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d254cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2550: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2554: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2554u;
    SET_GPR_U32(ctx, 31, 0x1D255Cu);
    ctx->pc = 0x1D2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2554u;
    // 0x1d2558: 0x24a53518  addiu       $a1, $a1, 0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2554u, 0x1D255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D255Cu;
label_1d255c:
    // 0x1d255c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2560: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2564: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2564u;
    SET_GPR_U32(ctx, 31, 0x1D256Cu);
    ctx->pc = 0x1D2568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2564u;
    // 0x1d2568: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2564u, 0x1D256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D256Cu;
label_1d256c:
    // 0x1d256c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2574: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2578: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2578u;
    SET_GPR_U32(ctx, 31, 0x1D2580u);
    ctx->pc = 0x1D257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2578u;
    // 0x1d257c: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2578u, 0x1D2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2580u;
label_1d2580:
    // 0x1d2580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2588: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2588u;
    SET_GPR_U32(ctx, 31, 0x1D2590u);
    ctx->pc = 0x1D258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2588u;
    // 0x1d258c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2588u, 0x1D2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2590u;
label_1d2590:
    // 0x1d2590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2594: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d259c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25a0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D25A0u;
    {
        const bool branch_taken_0x1d25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A0u;
        // 0x1d25a4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D25A8u;
label_1d25a8:
    // 0x1d25a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d25ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25b0: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d25b4: 0xc047988  jal         func_11E620
    ctx->pc = 0x1D25B4u;
    SET_GPR_U32(ctx, 31, 0x1D25BCu);
    ctx->pc = 0x1D25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25B4u;
    // 0x1d25b8: 0x8c259a70  lw          $a1, -0x6590($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1D25B4u, 0x1D25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25BCu;
label_1d25bc:
    // 0x1d25bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25c4: 0x8c25ff00  lw          $a1, -0x100($at)
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FF00u));
    // 0x1d25c8: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D25C8u;
    SET_GPR_U32(ctx, 31, 0x1D25D0u);
    ctx->pc = 0x1D25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25C8u;
    // 0x1d25cc: 0x240635e0  addiu       $a2, $zero, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D25C8u, 0x1D25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25D0u;
label_1d25d0:
    // 0x1d25d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d25d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25d8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D25D8u;
    SET_GPR_U32(ctx, 31, 0x1D25E0u);
    ctx->pc = 0x1D25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25D8u;
    // 0x1d25dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D25D8u, 0x1D25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25E0u;
label_1d25e0:
    // 0x1d25e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25e4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d25e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d25ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25f0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D25F0u;
    {
        const bool branch_taken_0x1d25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25F0u;
        // 0x1d25f4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25f0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D25F8u;
label_1d25f8:
    // 0x1d25f8: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D25F8u;
    SET_GPR_U32(ctx, 31, 0x1D2600u);
    ctx->pc = 0x1D25FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25F8u;
    // 0x1d25fc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D25F8u, 0x1D2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2600u;
label_1d2600:
    // 0x1d2600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2608: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2608u;
    SET_GPR_U32(ctx, 31, 0x1D2610u);
    ctx->pc = 0x1D260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2608u;
    // 0x1d260c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2608u, 0x1D2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2610u;
label_1d2610:
    // 0x1d2610: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2614: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d2614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d261c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2620: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D2620u;
    {
        const bool branch_taken_0x1d2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2620u;
        // 0x1d2624: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2620) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D2628u;
label_1d2628:
    // 0x1d2628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d262c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2630: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2630u;
    SET_GPR_U32(ctx, 31, 0x1D2638u);
    ctx->pc = 0x1D2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2630u;
    // 0x1d2634: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2630u, 0x1D2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2638u;
label_1d2638:
    // 0x1d2638: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d263c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2640: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2640u;
    SET_GPR_U32(ctx, 31, 0x1D2648u);
    ctx->pc = 0x1D2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2640u;
    // 0x1d2644: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2640u, 0x1D2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2648u;
label_1d2648:
    // 0x1d2648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d264c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d264cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2650: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2654: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2654u;
    SET_GPR_U32(ctx, 31, 0x1D265Cu);
    ctx->pc = 0x1D2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2654u;
    // 0x1d2658: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2654u, 0x1D265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D265Cu;
label_1d265c:
    // 0x1d265c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2664: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2664u;
    SET_GPR_U32(ctx, 31, 0x1D266Cu);
    ctx->pc = 0x1D2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2664u;
    // 0x1d2668: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2664u, 0x1D266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D266Cu;
label_1d266c:
    // 0x1d266c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2670: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d267c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D267Cu;
    {
        const bool branch_taken_0x1d267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D267Cu;
        // 0x1d2680: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d267c) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D2684u;
label_1d2684:
    // 0x1d2684: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d2684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d2688: 0xc0749e8  jal         func_1D27A0
    ctx->pc = 0x1D2688u;
    SET_GPR_U32(ctx, 31, 0x1D2690u);
    ctx->pc = 0x1D268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2688u;
    // 0x1d268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27A0u, 0x1D2688u, 0x1D2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2690u;
label_1d2690:
    // 0x1d2690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2698: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2698u;
    SET_GPR_U32(ctx, 31, 0x1D26A0u);
    ctx->pc = 0x1D269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2698u;
    // 0x1d269c: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2698u, 0x1D26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26A0u;
label_1d26a0:
    // 0x1d26a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d26a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26a8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D26A8u;
    SET_GPR_U32(ctx, 31, 0x1D26B0u);
    ctx->pc = 0x1D26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26A8u;
    // 0x1d26ac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D26A8u, 0x1D26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26B0u;
label_1d26b0:
    // 0x1d26b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26b4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d26b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D26C0u;
    {
        const bool branch_taken_0x1d26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26C0u;
        // 0x1d26c4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26c0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D26C8u;
label_1d26c8:
    // 0x1d26c8: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D26C8u;
    SET_GPR_U32(ctx, 31, 0x1D26D0u);
    ctx->pc = 0x1D26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26C8u;
    // 0x1d26cc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D26C8u, 0x1D26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26D0u;
label_1d26d0:
    // 0x1d26d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d26d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26d8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D26D8u;
    SET_GPR_U32(ctx, 31, 0x1D26E0u);
    ctx->pc = 0x1D26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26D8u;
    // 0x1d26dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D26D8u, 0x1D26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26E0u;
label_1d26e0:
    // 0x1d26e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26e4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d26e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D26F0u;
    {
        const bool branch_taken_0x1d26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26F0u;
        // 0x1d26f4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26f0) {
            ctx->pc = 0x1D272Cu;
            goto label_1d272c;
        }
    }
    ctx->pc = 0x1D26F8u;
label_1d26f8:
    // 0x1d26f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d26fc: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2700: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1D2700u;
    SET_GPR_U32(ctx, 31, 0x1D2708u);
    ctx->pc = 0x1D2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2700u;
    // 0x1d2704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1D2700u, 0x1D2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2708u;
label_1d2708:
    // 0x1d2708: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d270c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2710: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2714: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2718: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d2718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d271c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2720: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2724: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d2728: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d272c:
    // 0x1d272c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2730:
    // 0x1d2730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2738: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2738u;
        // 0x1d273c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2740u;
}
