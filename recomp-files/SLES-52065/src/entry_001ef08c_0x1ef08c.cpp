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

// Function: entry_001ef08c
// Address: 0x1ef08c - 0x1ef0b8
void entry_001ef08c_0x1ef08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef08c_0x1ef08c");
#endif

    ctx->pc = 0x1ef08cu;

label_1ef08c:
    // 0x1ef08c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ef090:
    // 0x1ef090: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ef094:
    // 0x1ef094: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1ef094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1ef098:
    // 0x1ef098: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
label_1ef09c:
    if (ctx->pc == 0x1EF09Cu) {
        ctx->pc = 0x1EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF098u;
        // 0x1ef09c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0A0u;
        goto label_1ef0a0;
    }
    ctx->pc = 0x1EF098u;
    {
        const bool branch_taken_0x1ef098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF098u;
        // 0x1ef09c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef098) {
            ctx->pc = 0x1EF310u;
            return;
        }
    }
    ctx->pc = 0x1EF0A0u;
label_1ef0a0:
    // 0x1ef0a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ef0a4:
    // 0x1ef0a4: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x1ef0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
label_1ef0a8:
    // 0x1ef0a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef0ac:
    // 0x1ef0ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef0b0:
    // 0x1ef0b0: 0x800008  jr          $a0
label_1ef0b4:
    if (ctx->pc == 0x1EF0B4u) {
        ctx->pc = 0x1EF0B8u;
        goto label_fallthrough_0x1ef0b0;
    }
    ctx->pc = 0x1EF0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ef0b0:
    ctx->pc = 0x1EF0B8u;
}
