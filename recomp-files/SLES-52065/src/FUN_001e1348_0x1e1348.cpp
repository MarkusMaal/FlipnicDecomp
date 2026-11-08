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

// Function: FUN_001e1348
// Address: 0x1e1348 - 0x1e1408
void FUN_001e1348_0x1e1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1348_0x1e1348");
#endif

    switch (ctx->pc) {
        case 0x1e135cu: goto label_1e135c;
        default: break;
    }

    ctx->pc = 0x1e1348u;

    // 0x1e1348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e134c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e1354: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E1354u;
    SET_GPR_U32(ctx, 31, 0x1E135Cu);
    ctx->pc = 0x1E1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1354u;
    // 0x1e1358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E1354u, 0x1E135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E135Cu;
label_1e135c:
    // 0x1e135c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e1360: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e1364: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e1368: 0x24a5b340  addiu       $a1, $a1, -0x4CC0
    ctx->pc = 0x1e1368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947648));
    // 0x1e136c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e136cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1370: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e1374: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e1374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e1378: 0x24a9000c  addiu       $t1, $a1, 0xC
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1e137c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1380: 0x24a80004  addiu       $t0, $a1, 0x4
    ctx->pc = 0x1e1380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e1384: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1e1384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e1388: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1e1388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e138c: 0xc96821  addu        $t5, $a2, $t1
    ctx->pc = 0x1e138cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1e1390: 0x857821  addu        $t7, $a0, $a1
    ctx->pc = 0x1e1390u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e1394: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x1e1394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e1398: 0x877021  addu        $t6, $a0, $a3
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e139c: 0x685821  addu        $t3, $v1, $t0
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1e13a0: 0x676021  addu        $t4, $v1, $a3
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e13a4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1e13a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1e13ac: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e13b0: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x1e13b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1e13b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E13B4u;
    {
        const bool branch_taken_0x1e13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13B4u;
        // 0x1e13b8: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13b4) {
            ctx->pc = 0x1E13C8u;
            goto label_1e13c8;
        }
    }
    ctx->pc = 0x1E13BCu;
    // 0x1e13bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E13BCu;
    {
        const bool branch_taken_0x1e13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13BCu;
        // 0x1e13c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e13bc) {
            ctx->pc = 0x1E13F8u;
            goto label_1e13f8;
        }
    }
    ctx->pc = 0x1E13C4u;
    // 0x1e13c4: 0x0  nop
    ctx->pc = 0x1e13c4u;
    // NOP
label_1e13c8:
    // 0x1e13c8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1e13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1e13cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e13ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13d0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1e13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1e13d4: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x1e13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x1e13d8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1e13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1e13dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e13e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e13e4: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x1e13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x1e13e8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1e13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1e13ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1e13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e13f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1e13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1e13f4: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x1e13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
label_1e13f8:
    // 0x1e13f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e13f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e13fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e13fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1400: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1400u;
        // 0x1e1404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1408u;
}
