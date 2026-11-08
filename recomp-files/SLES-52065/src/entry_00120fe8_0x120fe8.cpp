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

// Function: entry_00120fe8
// Address: 0x120fe8 - 0x121010
void entry_00120fe8_0x120fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120fe8_0x120fe8");
#endif

    switch (ctx->pc) {
        case 0x120ff4u: goto label_120ff4;
        default: break;
    }

    ctx->pc = 0x120fe8u;

    // 0x120fe8: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x120fec: 0xc04619c  jal         func_118670
    ctx->pc = 0x120FECu;
    SET_GPR_U32(ctx, 31, 0x120FF4u);
    ctx->pc = 0x120FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FECu;
    // 0x120ff0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x120FECu, 0x120FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FF4u;
label_120ff4:
    // 0x120ff4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x120FF4u;
    {
        const bool branch_taken_0x120ff4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FF4u;
        // 0x120ff8: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ff4) {
            ctx->pc = 0x121014u;
            return;
        }
    }
    ctx->pc = 0x120FFCu;
    // 0x120ffc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x120FFCu;
    {
        const bool branch_taken_0x120ffc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ffc) {
            ctx->pc = 0x121010u;
            return;
        }
    }
    ctx->pc = 0x121004u;
    // 0x121004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121008: 0xc048414  jal         func_121050
    ctx->pc = 0x121008u;
    SET_GPR_U32(ctx, 31, 0x121010u);
    ctx->pc = 0x12100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121008u;
    // 0x12100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x121008u, 0x121010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121010u;
}
