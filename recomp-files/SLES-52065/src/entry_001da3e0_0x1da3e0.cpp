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

// Function: entry_001da3e0
// Address: 0x1da3e0 - 0x1da428
void entry_001da3e0_0x1da3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da3e0_0x1da3e0");
#endif

    switch (ctx->pc) {
        case 0x1da41cu: goto label_1da41c;
        default: break;
    }

    ctx->pc = 0x1da3e0u;

label_1da3e0:
    // 0x1da3e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da3e4: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1da3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1da3e8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1da3ec: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1da3ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da3f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1da3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da3f8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1da3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1da3fc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1da400: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1da404: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DA404u;
    {
        const bool branch_taken_0x1da404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA404u;
        // 0x1da408: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da404) {
            ctx->pc = 0x1DA3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da3e0;
        }
    }
    ctx->pc = 0x1DA40Cu;
    // 0x1da40c: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA40Cu;
    {
        const bool branch_taken_0x1da40c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da40c) {
            ctx->pc = 0x1DA410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA40Cu;
            // 0x1da410: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA428u;
            return;
        }
    }
    ctx->pc = 0x1DA414u;
    // 0x1da414: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA414u;
    SET_GPR_U32(ctx, 31, 0x1DA41Cu);
    ctx->pc = 0x1DA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA414u;
    // 0x1da418: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA414u, 0x1DA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA41Cu;
label_1da41c:
    // 0x1da41c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA41Cu;
    {
        const bool branch_taken_0x1da41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da41c) {
            ctx->pc = 0x1DA440u;
            return;
        }
    }
    ctx->pc = 0x1DA424u;
    // 0x1da424: 0x0  nop
    ctx->pc = 0x1da424u;
    // NOP
    ctx->pc = 0x1da428u;
}
