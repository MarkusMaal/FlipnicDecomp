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

// Function: entry_001c1b0c
// Address: 0x1c1b0c - 0x1c1b44
void entry_001c1b0c_0x1c1b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b0c_0x1c1b0c");
#endif

    switch (ctx->pc) {
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b3cu: goto label_1c1b3c;
        default: break;
    }

    ctx->pc = 0x1c1b0cu;

    // 0x1c1b0c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1B0Cu;
    {
        const bool branch_taken_0x1c1b0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B0Cu;
        // 0x1c1b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b0c) {
            ctx->pc = 0x1C1B44u;
            return;
        }
    }
    ctx->pc = 0x1C1B14u;
    // 0x1c1b14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1b18: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1B18u;
    SET_GPR_U32(ctx, 31, 0x1C1B20u);
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B18u;
    // 0x1c1b1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1B18u, 0x1C1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1b28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c1b2c: 0x244217e0  addiu       $v0, $v0, 0x17E0
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6112));
    // 0x1c1b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1b34: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C1B34u;
    SET_GPR_U32(ctx, 31, 0x1C1B3Cu);
    ctx->pc = 0x1C1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B34u;
    // 0x1c1b38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C1B34u, 0x1C1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B3Cu;
label_1c1b3c:
    // 0x1c1b3c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1B3Cu;
    {
        const bool branch_taken_0x1c1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b3c) {
            ctx->pc = 0x1C1BA4u;
            return;
        }
    }
    ctx->pc = 0x1C1B44u;
}
