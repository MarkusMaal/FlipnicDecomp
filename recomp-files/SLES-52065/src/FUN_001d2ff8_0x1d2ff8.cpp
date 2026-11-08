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

// Function: FUN_001d2ff8
// Address: 0x1d2ff8 - 0x1d30b0
void FUN_001d2ff8_0x1d2ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2ff8_0x1d2ff8");
#endif

    switch (ctx->pc) {
        case 0x1d3014u: goto label_1d3014;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3098u: goto label_1d3098;
        default: break;
    }

    ctx->pc = 0x1d2ff8u;

    // 0x1d2ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d300c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D300Cu;
    SET_GPR_U32(ctx, 31, 0x1D3014u);
    ctx->pc = 0x1D3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D300Cu;
    // 0x1d3010: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D300Cu, 0x1D3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3014u;
label_1d3014:
    // 0x1d3014: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1d3014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1d3018: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d3018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d301c: 0x24e303c0  addiu       $v1, $a3, 0x3C0
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x1d3020: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3703C0u));
    // 0x1d3024: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3024u;
    {
        const bool branch_taken_0x1d3024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3024u;
        // 0x1d3028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3024) {
            ctx->pc = 0x1D3048u;
            goto label_1d3048;
        }
    }
    ctx->pc = 0x1D302Cu;
    // 0x1d302c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d3030: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d3030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d3034: 0x24422f18  addiu       $v0, $v0, 0x2F18
    ctx->pc = 0x1d3034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12056));
    // 0x1d3038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d303c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D303Cu;
    {
        const bool branch_taken_0x1d303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D303Cu;
        // 0x1d3040: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d303c) {
            ctx->pc = 0x1D3088u;
            goto label_1d3088;
        }
    }
    ctx->pc = 0x1D3044u;
    // 0x1d3044: 0x0  nop
    ctx->pc = 0x1d3044u;
    // NOP
label_1d3048:
    // 0x1d3048: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d3048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d304c:
    // 0x1d304c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1d304cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d3050: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D3050u;
    {
        const bool branch_taken_0x1d3050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3050u;
        // 0x1d3054: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3050) {
            ctx->pc = 0x1D3088u;
            goto label_1d3088;
        }
    }
    ctx->pc = 0x1D3058u;
    // 0x1d3058: 0x24e603c0  addiu       $a2, $a3, 0x3C0
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x1d305c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1d305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d3060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3064: 0x0  nop
    ctx->pc = 0x1d3064u;
    // NOP
    // 0x1d3068: 0x5450fff8  bnel        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3068u;
    {
        const bool branch_taken_0x1d3068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d3068) {
            ctx->pc = 0x1D306Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3068u;
            // 0x1d306c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D304Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d304c;
        }
    }
    ctx->pc = 0x1D3070u;
    // 0x1d3070: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d3074: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d3078: 0x24422f18  addiu       $v0, $v0, 0x2F18
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12056));
    // 0x1d307c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d307cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d3080: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3088:
    // 0x1d3088: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3088u;
    {
        const bool branch_taken_0x1d3088 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3088u;
        // 0x1d308c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3088) {
            ctx->pc = 0x1D309Cu;
            goto label_1d309c;
        }
    }
    ctx->pc = 0x1D3090u;
    // 0x1d3090: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3090u;
    SET_GPR_U32(ctx, 31, 0x1D3098u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3090u, 0x1D3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3098u;
label_1d3098:
    // 0x1d3098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d3098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d309c:
    // 0x1d309c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d309cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d30a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d30a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d30a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d30a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d30a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D30A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30A8u;
        // 0x1d30ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D30A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D30B0u;
}
