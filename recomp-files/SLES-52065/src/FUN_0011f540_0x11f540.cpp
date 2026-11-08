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

// Function: FUN_0011f540
// Address: 0x11f540 - 0x11f650
void FUN_0011f540_0x11f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f540_0x11f540");
#endif

    switch (ctx->pc) {
        case 0x11f580u: goto label_11f580;
        case 0x11f604u: goto label_11f604;
        default: break;
    }

    ctx->pc = 0x11f540u;

    // 0x11f540: 0x8c832028  lw          $v1, 0x2028($a0)
    ctx->pc = 0x11f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8232)));
    // 0x11f544: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f548: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x11f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f54c: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x11f54cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f550: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x11F550u;
    {
        const bool branch_taken_0x11f550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f550) {
            ctx->pc = 0x11F5DCu;
            goto label_11f5dc;
        }
    }
    ctx->pc = 0x11F558u;
    // 0x11f558: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f55c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11f564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11f568: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x11f568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f56c: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x11f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x11f570: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11f574: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11F578u;
    {
        const bool branch_taken_0x11f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F578u;
        // 0x11f57c: 0x2507200c  addiu       $a3, $t0, 0x200C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f578) {
            ctx->pc = 0x11F598u;
            goto label_11f598;
        }
    }
    ctx->pc = 0x11F580u;
label_11f580:
    // 0x11f580: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f584: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11f588: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11f588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11f58c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f594: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x11f594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_11f598:
    // 0x11f598: 0x8d06200c  lw          $a2, 0x200C($t0)
    ctx->pc = 0x11f598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8204)));
    // 0x11f59c: 0x8d022014  lw          $v0, 0x2014($t0)
    ctx->pc = 0x11f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8212)));
    // 0x11f5a0: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x11f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x11f5a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11F5A8u;
    {
        const bool branch_taken_0x11f5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5A8u;
        // 0x11f5ac: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5a8) {
            ctx->pc = 0x11F580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f580;
        }
    }
    ctx->pc = 0x11F5B0u;
    // 0x11f5b0: 0xad00200c  sw          $zero, 0x200C($t0)
    ctx->pc = 0x11f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8204), GPR_U32(ctx, 0));
    // 0x11f5b4: 0xad002014  sw          $zero, 0x2014($t0)
    ctx->pc = 0x11f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8212), GPR_U32(ctx, 0));
    // 0x11f5b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f5bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11f5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11f5c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x11f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x11f5cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f5d0: 0xac822028  sw          $v0, 0x2028($a0)
    ctx->pc = 0x11f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8232), GPR_U32(ctx, 2));
    // 0x11f5d4: 0x8c822028  lw          $v0, 0x2028($a0)
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8232)));
    // 0x11f5d8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x11f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_11f5dc:
    // 0x11f5dc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x11f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f5e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f5e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11f5e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11f5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11f5ec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f5f0: 0x31300  sll         $v0, $v1, 12
    ctx->pc = 0x11f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x11f5f4: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x11f5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11f5f8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11f5fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F5FCu;
    {
        const bool branch_taken_0x11f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5FCu;
        // 0x11f600: 0x2507200c  addiu       $a3, $t0, 0x200C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5fc) {
            ctx->pc = 0x11F614u;
            goto label_11f614;
        }
    }
    ctx->pc = 0x11F604u;
label_11f604:
    // 0x11f604: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x11f604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x11f608: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f60c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f610: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x11f610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_11f614:
    // 0x11f614: 0x0  nop
    ctx->pc = 0x11f614u;
    // NOP
    // 0x11f618: 0x8d05200c  lw          $a1, 0x200C($t0)
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8204)));
    // 0x11f61c: 0x8d022014  lw          $v0, 0x2014($t0)
    ctx->pc = 0x11f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8212)));
    // 0x11f620: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x11f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x11f624: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F628u;
    {
        const bool branch_taken_0x11f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F628u;
        // 0x11f62c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f628) {
            ctx->pc = 0x11F648u;
            goto label_11f648;
        }
    }
    ctx->pc = 0x11F630u;
    // 0x11f630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f634: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x11f634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11f638: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11f63c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11f63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f640: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11F640u;
    {
        const bool branch_taken_0x11f640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f640) {
            ctx->pc = 0x11F604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f604;
        }
    }
    ctx->pc = 0x11F648u;
label_11f648:
    // 0x11f648: 0x3e00008  jr          $ra
    ctx->pc = 0x11F648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F648u;
        // 0x11f64c: 0x8c822028  lw          $v0, 0x2028($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F650u;
}
