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

// Function: entry_001e4b64
// Address: 0x1e4b64 - 0x1e4b88
void entry_001e4b64_0x1e4b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4b64_0x1e4b64");
#endif

    switch (ctx->pc) {
        case 0x1e4b70u: goto label_1e4b70;
        default: break;
    }

    ctx->pc = 0x1e4b64u;

    // 0x1e4b64: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e4b68: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E4B68u;
    SET_GPR_U32(ctx, 31, 0x1E4B70u);
    ctx->pc = 0x1E4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B68u;
    // 0x1e4b6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E4B68u, 0x1E4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e4b74: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e4b78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4B78u;
    {
        const bool branch_taken_0x1e4b78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B78u;
        // 0x1e4b7c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b78) {
            ctx->pc = 0x1E4B88u;
            return;
        }
    }
    ctx->pc = 0x1E4B80u;
    // 0x1e4b80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4b84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4b84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e4b88u;
}
