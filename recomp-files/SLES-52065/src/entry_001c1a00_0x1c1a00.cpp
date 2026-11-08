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

// Function: entry_001c1a00
// Address: 0x1c1a00 - 0x1c1a58
void entry_001c1a00_0x1c1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a00_0x1c1a00");
#endif

    switch (ctx->pc) {
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a54u: goto label_1c1a54;
        default: break;
    }

    ctx->pc = 0x1c1a00u;

    // 0x1c1a00: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c1a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c1a0c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c1a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c1a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a14: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1a18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a1c: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c1a20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1a20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a24: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c1a28: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c1a2c: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A34u);
    ctx->pc = 0x1C1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A2Cu;
    // 0x1c1a30: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C1A2Cu, 0x1C1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A34u;
label_1c1a34:
    // 0x1c1a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a38: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C1A38u;
    SET_GPR_U32(ctx, 31, 0x1C1A40u);
    ctx->pc = 0x1C1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A38u;
    // 0x1c1a3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C1A38u, 0x1C1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A40u;
label_1c1a40:
    // 0x1c1a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A40u;
    {
        const bool branch_taken_0x1c1a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A40u;
        // 0x1c1a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a40) {
            ctx->pc = 0x1C1A58u;
            return;
        }
    }
    ctx->pc = 0x1C1A48u;
    // 0x1c1a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a4c: 0xc0707b4  jal         func_1C1ED0
    ctx->pc = 0x1C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A54u);
    ctx->pc = 0x1C1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A4Cu;
    // 0x1c1a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1ED0u, 0x1C1A4Cu, 0x1C1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1a58u;
}
