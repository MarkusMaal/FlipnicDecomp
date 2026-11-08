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

// Function: entry_00205918
// Address: 0x205918 - 0x205944
void entry_00205918_0x205918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205918_0x205918");
#endif

    ctx->pc = 0x205918u;

label_205918:
    // 0x205918: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x205918u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20591c:
    // 0x20591c: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x20591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_205920:
    // 0x205920: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x205920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_205924:
    // 0x205924: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_205928:
    if (ctx->pc == 0x205928u) {
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20592Cu;
        goto label_20592c;
    }
    ctx->pc = 0x205924u;
    {
        const bool branch_taken_0x205924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205924) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x20592Cu;
label_20592c:
    // 0x20592c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205930:
    // 0x205930: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
label_205934:
    // 0x205934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205938:
    // 0x205938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20593c:
    // 0x20593c: 0x800008  jr          $a0
label_205940:
    if (ctx->pc == 0x205940u) {
        ctx->pc = 0x205944u;
        goto label_fallthrough_0x20593c;
    }
    ctx->pc = 0x20593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20593Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x20593c:
    ctx->pc = 0x205944u;
}
