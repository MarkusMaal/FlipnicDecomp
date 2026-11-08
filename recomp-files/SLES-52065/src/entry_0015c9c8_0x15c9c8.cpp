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

// Function: entry_0015c9c8
// Address: 0x15c9c8 - 0x15ca00
void entry_0015c9c8_0x15c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c9c8_0x15c9c8");
#endif

    switch (ctx->pc) {
        case 0x15c9d4u: goto label_15c9d4;
        default: break;
    }

    ctx->pc = 0x15c9c8u;

label_15c9c8:
    // 0x15c9c8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x15c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x15c9cc: 0xc055ac0  jal         func_156B00
    ctx->pc = 0x15C9CCu;
    SET_GPR_U32(ctx, 31, 0x15C9D4u);
    ctx->pc = 0x15C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C9CCu;
    // 0x15c9d0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B00u, 0x15C9CCu, 0x15C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9D4u;
label_15c9d4:
    // 0x15c9d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15c9d8: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x15c9d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c9dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C9DCu;
    {
        const bool branch_taken_0x15c9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9DCu;
        // 0x15c9e0: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9dc) {
            ctx->pc = 0x15C9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C9E4u;
    // 0x15c9e4: 0x92a3002e  lbu         $v1, 0x2E($s5)
    ctx->pc = 0x15c9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x15c9e8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15C9E8u;
    {
        const bool branch_taken_0x15c9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c9e8) {
            ctx->pc = 0x15CA3Cu;
            return;
        }
    }
    ctx->pc = 0x15C9F0u;
    // 0x15c9f0: 0x8ea33dd8  lw          $v1, 0x3DD8($s5)
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15832)));
    // 0x15c9f4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c9f8: 0x6000010  bltz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C9F8u;
    {
        const bool branch_taken_0x15c9f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x15C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F8u;
        // 0x15c9fc: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f8) {
            ctx->pc = 0x15CA3Cu;
            return;
        }
    }
    ctx->pc = 0x15CA00u;
}
