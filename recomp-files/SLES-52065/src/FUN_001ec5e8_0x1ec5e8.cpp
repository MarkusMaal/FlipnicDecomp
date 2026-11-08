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

// Function: FUN_001ec5e8
// Address: 0x1ec5e8 - 0x1ec680
void FUN_001ec5e8_0x1ec5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec5e8_0x1ec5e8");
#endif

    switch (ctx->pc) {
        case 0x1ec5fcu: goto label_1ec5fc;
        case 0x1ec610u: goto label_1ec610;
        case 0x1ec66cu: goto label_1ec66c;
        default: break;
    }

    ctx->pc = 0x1ec5e8u;

    // 0x1ec5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec5ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec5f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec5f4: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x1ec5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x1ec5f8: 0xc  syscall     0
    ctx->pc = 0x1ec5f8u;
    ctx->pc = 0x1EC5FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ec5fc:
    // 0x1ec5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec600: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC600u;
    {
        const bool branch_taken_0x1ec600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC600u;
        // 0x1ec604: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec600) {
            ctx->pc = 0x1EC618u;
            goto label_1ec618;
        }
    }
    ctx->pc = 0x1EC608u;
    // 0x1ec608: 0xc07ad68  jal         func_1EB5A0
    ctx->pc = 0x1EC608u;
    SET_GPR_U32(ctx, 31, 0x1EC610u);
    ctx->pc = 0x1EB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5A0u, 0x1EC608u, 0x1EC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC610u;
label_1ec610:
    // 0x1ec610: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EC610u;
    {
        const bool branch_taken_0x1ec610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC610u;
        // 0x1ec614: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec610) {
            ctx->pc = 0x1EC674u;
            goto label_1ec674;
        }
    }
    ctx->pc = 0x1EC618u;
label_1ec618:
    // 0x1ec618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC618u;
    {
        const bool branch_taken_0x1ec618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC618u;
        // 0x1ec61c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec618) {
            ctx->pc = 0x1EC62Cu;
            goto label_1ec62c;
        }
    }
    ctx->pc = 0x1EC620u;
    // 0x1ec620: 0x8c43a3b8  lw          $v1, -0x5C48($v0)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943672)));
    // 0x1ec624: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC624u;
    {
        const bool branch_taken_0x1ec624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC624u;
        // 0x1ec628: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec624) {
            ctx->pc = 0x1EC634u;
            goto label_1ec634;
        }
    }
    ctx->pc = 0x1EC62Cu;
label_1ec62c:
    // 0x1ec62c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC62Cu;
    {
        const bool branch_taken_0x1ec62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC62Cu;
        // 0x1ec630: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec62c) {
            ctx->pc = 0x1EC670u;
            goto label_1ec670;
        }
    }
    ctx->pc = 0x1EC634u;
label_1ec634:
    // 0x1ec634: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ec634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ec638: 0x2463be58  addiu       $v1, $v1, -0x41A8
    ctx->pc = 0x1ec638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950488));
    // 0x1ec63c: 0x8ca4be50  lw          $a0, -0x41B0($a1)
    ctx->pc = 0x1ec63cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38BE50u));
    // 0x1ec640: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ec640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ec644: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec648: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1ec648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1ec64c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1ec64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec654: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec658: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ec658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ec65c: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1ec65cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ec660: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ec660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec664: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EC664u;
    SET_GPR_U32(ctx, 31, 0x1EC66Cu);
    ctx->pc = 0x1EC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC664u;
    // 0x1ec668: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EC664u, 0x1EC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC66Cu;
label_1ec66c:
    // 0x1ec66c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec670:
    // 0x1ec670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec674:
    // 0x1ec674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec678: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC678u;
        // 0x1ec67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC680u;
}
