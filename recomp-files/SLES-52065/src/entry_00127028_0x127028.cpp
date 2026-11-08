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

// Function: entry_00127028
// Address: 0x127028 - 0x127058
void entry_00127028_0x127028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127028_0x127028");
#endif

    ctx->pc = 0x127028u;

label_127028:
    // 0x127028: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_12702c:
    // 0x12702c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_127030:
    // 0x127030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127034:
    // 0x127034: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x127034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_127038:
    // 0x127038: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_12703c:
    if (ctx->pc == 0x12703Cu) {
        ctx->pc = 0x12703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127038u;
        // 0x12703c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127040u;
        goto label_127040;
    }
    ctx->pc = 0x127038u;
    {
        const bool branch_taken_0x127038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127038u;
        // 0x12703c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127038) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127040u;
label_127040:
    // 0x127040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_127044:
    // 0x127044: 0x2463eb40  addiu       $v1, $v1, -0x14C0
    ctx->pc = 0x127044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961984));
label_127048:
    // 0x127048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12704c:
    // 0x12704c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_127050:
    // 0x127050: 0x400008  jr          $v0
label_127054:
    if (ctx->pc == 0x127054u) {
        ctx->pc = 0x127058u;
        goto label_fallthrough_0x127050;
    }
    ctx->pc = 0x127050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x127050:
    ctx->pc = 0x127058u;
}
