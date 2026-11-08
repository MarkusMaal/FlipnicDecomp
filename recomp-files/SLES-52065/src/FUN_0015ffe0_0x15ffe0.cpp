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

// Function: FUN_0015ffe0
// Address: 0x15ffe0 - 0x160058
void FUN_0015ffe0_0x15ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ffe0_0x15ffe0");
#endif

    switch (ctx->pc) {
        case 0x15ffecu: goto label_15ffec;
        default: break;
    }

    ctx->pc = 0x15ffe0u;

    // 0x15ffe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ffe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ffe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15ffec:
    // 0x15ffec: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x15ffecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fff0: 0x91030234  lbu         $v1, 0x234($t0)
    ctx->pc = 0x15fff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x15fff4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FFF4u;
    {
        const bool branch_taken_0x15fff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fff4) {
            ctx->pc = 0x160020u;
            goto label_160020;
        }
    }
    ctx->pc = 0x15FFFCu;
    // 0x15fffc: 0x85030228  lh          $v1, 0x228($t0)
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x160000: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x160000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x160004: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x160004u;
    {
        const bool branch_taken_0x160004 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x160008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160004u;
        // 0x160008: 0x25090228  addiu       $t1, $t0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160004) {
            ctx->pc = 0x160020u;
            goto label_160020;
        }
    }
    ctx->pc = 0x16000Cu;
    // 0x16000c: 0xa5250000  sh          $a1, 0x0($t1)
    ctx->pc = 0x16000cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x160010: 0xa505022a  sh          $a1, 0x22A($t0)
    ctx->pc = 0x160010u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 554), (uint16_t)GPR_U32(ctx, 5));
    // 0x160014: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x160014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x160018: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16001c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x16001cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_160020:
    // 0x160020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x160024: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x160024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160028: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x160028u;
    {
        const bool branch_taken_0x160028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160028u;
        // 0x16002c: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160028) {
            ctx->pc = 0x15FFECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ffec;
        }
    }
    ctx->pc = 0x160030u;
    // 0x160030: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x160034: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160034u;
    {
        const bool branch_taken_0x160034 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x160034) {
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x16003Cu;
    // 0x16003c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x16003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x160040: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x160040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x160044: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x160044u;
    {
        const bool branch_taken_0x160044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160044u;
        // 0x160048: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160044) {
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x16004Cu;
    // 0x16004c: 0xa083002c  sb          $v1, 0x2C($a0)
    ctx->pc = 0x16004cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
label_160050:
    // 0x160050: 0x3e00008  jr          $ra
    ctx->pc = 0x160050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160058u;
}
