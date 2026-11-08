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

// Function: entry_001ed0f8
// Address: 0x1ed0f8 - 0x1ed12c
void entry_001ed0f8_0x1ed0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed0f8_0x1ed0f8");
#endif

    ctx->pc = 0x1ed0f8u;

label_1ed0f8:
    // 0x1ed0f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed0fc:
    // 0x1ed0fc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1ed0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1ed100:
    // 0x1ed100: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ed100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ed104:
    // 0x1ed104: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1ed104u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1ed108:
    // 0x1ed108: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x1ed108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_1ed10c:
    // 0x1ed10c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_1ed110:
    if (ctx->pc == 0x1ED110u) {
        ctx->pc = 0x1ED110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED10Cu;
        // 0x1ed110: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED114u;
        goto label_1ed114;
    }
    ctx->pc = 0x1ED10Cu;
    {
        const bool branch_taken_0x1ed10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED10Cu;
        // 0x1ed110: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed10c) {
            ctx->pc = 0x1ED630u;
            return;
        }
    }
    ctx->pc = 0x1ED114u;
label_1ed114:
    // 0x1ed114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ed118:
    // 0x1ed118: 0x244242a0  addiu       $v0, $v0, 0x42A0
    ctx->pc = 0x1ed118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17056));
label_1ed11c:
    // 0x1ed11c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ed120:
    // 0x1ed120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ed124:
    // 0x1ed124: 0x800008  jr          $a0
label_1ed128:
    if (ctx->pc == 0x1ED128u) {
        ctx->pc = 0x1ED12Cu;
        goto label_fallthrough_0x1ed124;
    }
    ctx->pc = 0x1ED124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED124u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ed124:
    ctx->pc = 0x1ED12Cu;
}
