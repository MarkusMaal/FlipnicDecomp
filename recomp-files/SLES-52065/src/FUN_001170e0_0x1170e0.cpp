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

// Function: FUN_001170e0
// Address: 0x1170e0 - 0x117158
void FUN_001170e0_0x1170e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001170e0_0x1170e0");
#endif

    ctx->pc = 0x1170e0u;

    // 0x1170e0: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1170e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1170e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1170e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1170e8: 0x2c6100a0  sltiu       $at, $v1, 0xA0
    ctx->pc = 0x1170e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1170ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1170ECu;
    {
        const bool branch_taken_0x1170ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170ECu;
        // 0x1170f0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170ec) {
            ctx->pc = 0x1170FCu;
            goto label_1170fc;
        }
    }
    ctx->pc = 0x1170F4u;
    // 0x1170f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1170F4u;
    {
        const bool branch_taken_0x1170f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170F4u;
        // 0x1170f8: 0x24020071  addiu       $v0, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170f4) {
            ctx->pc = 0x117100u;
            goto label_117100;
        }
    }
    ctx->pc = 0x1170FCu;
label_1170fc:
    // 0x1170fc: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x1170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_117100:
    // 0x117100: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x117100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117104: 0x2c810080  sltiu       $at, $a0, 0x80
    ctx->pc = 0x117104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x117108: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x117108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11710c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11710Cu;
    {
        const bool branch_taken_0x11710c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x117110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11710Cu;
        // 0x117110: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11710c) {
            ctx->pc = 0x117118u;
            goto label_117118;
        }
    }
    ctx->pc = 0x117114u;
    // 0x117114: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x117114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_117118:
    // 0x117118: 0x2c82009e  sltiu       $v0, $a0, 0x9E
    ctx->pc = 0x117118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)158) ? 1 : 0);
    // 0x11711c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11711Cu;
    {
        const bool branch_taken_0x11711c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11711c) {
            ctx->pc = 0x117130u;
            goto label_117130;
        }
    }
    ctx->pc = 0x117124u;
    // 0x117124: 0x2484ff83  addiu       $a0, $a0, -0x7D
    ctx->pc = 0x117124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967171));
    // 0x117128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117128u;
    {
        const bool branch_taken_0x117128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117128u;
        // 0x11712c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117128) {
            ctx->pc = 0x117134u;
            goto label_117134;
        }
    }
    ctx->pc = 0x117130u;
label_117130:
    // 0x117130: 0x2484ffe1  addiu       $a0, $a0, -0x1F
    ctx->pc = 0x117130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
label_117134:
    // 0x117134: 0x2463ffdf  addiu       $v1, $v1, -0x21
    ctx->pc = 0x117134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967263));
    // 0x117138: 0x2484ffdf  addiu       $a0, $a0, -0x21
    ctx->pc = 0x117138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
    // 0x11713c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11713cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x117140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117144: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x117144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x117148: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x117148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11714c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x117150: 0x3e00008  jr          $ra
    ctx->pc = 0x117150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117150u;
        // 0x117154: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117158u;
}
