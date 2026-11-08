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

// Function: caseD_9
// Address: 0x194a60 - 0x194a88
void caseD_9_0x194a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x194a60");
#endif

    switch (ctx->pc) {
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        default: break;
    }

    ctx->pc = 0x194a60u;

label_194a60:
    // 0x194a60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x194a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_194a64:
    // 0x194a64: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x194a64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_194a68:
    // 0x194a68: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
label_194a6c:
    if (ctx->pc == 0x194A6Cu) {
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A70u;
        goto label_194a70;
    }
    ctx->pc = 0x194A68u;
    {
        const bool branch_taken_0x194a68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A68u;
        // 0x194a6c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a68) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194A70u;
label_194a70:
    // 0x194a70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194a74:
    // 0x194a74: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_194a78:
    // 0x194a78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194a7c:
    // 0x194a7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_194a80:
    // 0x194a80: 0x600008  jr          $v1
label_194a84:
    if (ctx->pc == 0x194A84u) {
        ctx->pc = 0x194A88u;
        goto label_fallthrough_0x194a80;
    }
    ctx->pc = 0x194A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x194a80:
    ctx->pc = 0x194A88u;
}
