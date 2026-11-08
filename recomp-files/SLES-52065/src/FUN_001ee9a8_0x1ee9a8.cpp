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

// Function: FUN_001ee9a8
// Address: 0x1ee9a8 - 0x1eea3c
void FUN_001ee9a8_0x1ee9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee9a8_0x1ee9a8");
#endif

    switch (ctx->pc) {
        case 0x1ee9c4u: goto label_1ee9c4;
        case 0x1eea08u: goto label_1eea08;
        default: break;
    }

    ctx->pc = 0x1ee9a8u;

    // 0x1ee9a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee9ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ee9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ee9b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee9b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee9bc: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EE9BCu;
    SET_GPR_U32(ctx, 31, 0x1EE9C4u);
    ctx->pc = 0x1EE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9BCu;
    // 0x1ee9c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EE9BCu, 0x1EE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9C4u;
label_1ee9c4:
    // 0x1ee9c4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ee9c8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ee9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ee9cc: 0x2463e180  addiu       $v1, $v1, -0x1E80
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959488));
    // 0x1ee9d0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ee9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ee9d4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38E1A8u));
    // 0x1ee9d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ee9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1ee9dc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1ee9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1ee9e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1ee9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1ee9e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE9E4u;
    {
        const bool branch_taken_0x1ee9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9E4u;
        // 0x1ee9e8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9e4) {
            ctx->pc = 0x1EE9F4u;
            goto label_1ee9f4;
        }
    }
    ctx->pc = 0x1EE9ECu;
    // 0x1ee9ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EE9ECu;
    {
        const bool branch_taken_0x1ee9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ECu;
        // 0x1ee9f0: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ec) {
            ctx->pc = 0x1EEA28u;
            goto label_1eea28;
        }
    }
    ctx->pc = 0x1EE9F4u;
label_1ee9f4:
    // 0x1ee9f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9f8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ee9fc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE9FCu;
    {
        const bool branch_taken_0x1ee9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9fc) {
            ctx->pc = 0x1EEA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE9FCu;
            // 0x1eea00: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEA28u;
            goto label_1eea28;
        }
    }
    ctx->pc = 0x1EEA04u;
    // 0x1eea04: 0x0  nop
    ctx->pc = 0x1eea04u;
    // NOP
label_1eea08:
    // 0x1eea08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1eea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea0c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1eea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1eea10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eea10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eea14: 0x0  nop
    ctx->pc = 0x1eea14u;
    // NOP
    // 0x1eea18: 0x0  nop
    ctx->pc = 0x1eea18u;
    // NOP
    // 0x1eea1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EEA1Cu;
    {
        const bool branch_taken_0x1eea1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eea1c) {
            ctx->pc = 0x1EEA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eea08;
        }
    }
    ctx->pc = 0x1EEA24u;
    // 0x1eea24: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x1eea24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
label_1eea28:
    // 0x1eea28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eea2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eea2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eea30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eea30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea34: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EEA34u;
    ctx->pc = 0x1EEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEA34u;
    // 0x1eea38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EEA3Cu;
}
