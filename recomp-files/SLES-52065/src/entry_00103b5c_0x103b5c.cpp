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

// Function: entry_00103b5c
// Address: 0x103b5c - 0x103ba0
void entry_00103b5c_0x103b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103b5c_0x103b5c");
#endif

    switch (ctx->pc) {
        case 0x103b64u: goto label_103b64;
        case 0x103b74u: goto label_103b74;
        case 0x103b94u: goto label_103b94;
        default: break;
    }

    ctx->pc = 0x103b5cu;

    // 0x103b5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103B5Cu;
    SET_GPR_U32(ctx, 31, 0x103B64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103B5Cu, 0x103B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B64u;
label_103b64:
    // 0x103b64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x103B64u;
    {
        const bool branch_taken_0x103b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B64u;
        // 0x103b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b64) {
            ctx->pc = 0x103BA0u;
            return;
        }
    }
    ctx->pc = 0x103B6Cu;
    // 0x103b6c: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103B6Cu;
    SET_GPR_U32(ctx, 31, 0x103B74u);
    ctx->pc = 0x103B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B6Cu;
    // 0x103b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103B6Cu, 0x103B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B74u;
label_103b74:
    // 0x103b74: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b7c: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103b80: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103b84: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b88: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103b8c: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103B8Cu;
    SET_GPR_U32(ctx, 31, 0x103B94u);
    ctx->pc = 0x103B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B8Cu;
    // 0x103b90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103B8Cu, 0x103B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B94u;
label_103b94:
    // 0x103b94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b98: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x103b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x103b9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103ba0u;
}
