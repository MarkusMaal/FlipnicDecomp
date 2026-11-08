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

// Function: entry_00138950
// Address: 0x138950 - 0x13897c
void entry_00138950_0x138950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138950_0x138950");
#endif

    ctx->pc = 0x138950u;

label_138950:
    // 0x138950: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_138954:
    // 0x138954: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x138954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_138958:
    // 0x138958: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x138958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_13895c:
    // 0x13895c: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
label_138960:
    if (ctx->pc == 0x138960u) {
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138964u;
        goto label_138964;
    }
    ctx->pc = 0x13895Cu;
    {
        const bool branch_taken_0x13895c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13895Cu;
        // 0x138960: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13895c) {
            ctx->pc = 0x138A74u;
            return;
        }
    }
    ctx->pc = 0x138964u;
label_138964:
    // 0x138964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_138968:
    // 0x138968: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
label_13896c:
    // 0x13896c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138970:
    // 0x138970: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_138974:
    // 0x138974: 0x400008  jr          $v0
label_138978:
    if (ctx->pc == 0x138978u) {
        ctx->pc = 0x13897Cu;
        goto label_fallthrough_0x138974;
    }
    ctx->pc = 0x138974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138974u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x138974:
    ctx->pc = 0x13897Cu;
}
