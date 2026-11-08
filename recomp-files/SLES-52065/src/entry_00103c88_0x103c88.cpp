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

// Function: entry_00103c88
// Address: 0x103c88 - 0x103cd0
void entry_00103c88_0x103c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103c88_0x103c88");
#endif

    switch (ctx->pc) {
        case 0x103c90u: goto label_103c90;
        case 0x103ca0u: goto label_103ca0;
        case 0x103cc0u: goto label_103cc0;
        default: break;
    }

    ctx->pc = 0x103c88u;

    // 0x103c88: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103C88u;
    SET_GPR_U32(ctx, 31, 0x103C90u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103C88u, 0x103C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C90u;
label_103c90:
    // 0x103c90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103C90u;
    {
        const bool branch_taken_0x103c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C90u;
        // 0x103c94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c90) {
            ctx->pc = 0x103CD0u;
            return;
        }
    }
    ctx->pc = 0x103C98u;
    // 0x103c98: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103C98u;
    SET_GPR_U32(ctx, 31, 0x103CA0u);
    ctx->pc = 0x103C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C98u;
    // 0x103c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103C98u, 0x103CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CA0u;
label_103ca0:
    // 0x103ca0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ca4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ca8: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103cac: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103cb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103cb4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103cb8: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103CB8u;
    SET_GPR_U32(ctx, 31, 0x103CC0u);
    ctx->pc = 0x103CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CB8u;
    // 0x103cbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103CB8u, 0x103CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CC0u;
label_103cc0:
    // 0x103cc0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103cc4: 0x2442a5b0  addiu       $v0, $v0, -0x5A50
    ctx->pc = 0x103cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944176));
    // 0x103cc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ccc: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x103cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    ctx->pc = 0x103cd0u;
}
