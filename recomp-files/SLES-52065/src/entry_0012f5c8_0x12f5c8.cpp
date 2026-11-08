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

// Function: entry_0012f5c8
// Address: 0x12f5c8 - 0x12f5f0
void entry_0012f5c8_0x12f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5c8_0x12f5c8");
#endif

    switch (ctx->pc) {
        case 0x12f5d8u: goto label_12f5d8;
        default: break;
    }

    ctx->pc = 0x12f5c8u;

label_12f5c8:
    // 0x12f5c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12f5cc:
    // 0x12f5cc: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_12f5d0:
    // 0x12f5d0: 0x320f809  jalr        $t9
label_12f5d4:
    if (ctx->pc == 0x12F5D4u) {
        ctx->pc = 0x12F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5D0u;
        // 0x12f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5D8u;
        goto label_12f5d8;
    }
    ctx->pc = 0x12F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12F5D8u);
        ctx->pc = 0x12F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5D0u;
        // 0x12f5d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F5D0u, 0x12F5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12F5D8u;
label_12f5d8:
    // 0x12f5d8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x12f5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_12f5dc:
    // 0x12f5dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12f5dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e0:
    // 0x12f5e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12f5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f5e4:
    // 0x12f5e4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_12f5e8:
    if (ctx->pc == 0x12F5E8u) {
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12F5ECu;
        goto label_12f5ec;
    }
    ctx->pc = 0x12F5E4u;
    {
        const bool branch_taken_0x12f5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E4u;
        // 0x12f5e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5e4) {
            ctx->pc = 0x12F644u;
            return;
        }
    }
    ctx->pc = 0x12F5ECu;
label_12f5ec:
    // 0x12f5ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12f5f0u;
}
