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

// Function: entry_001c4970
// Address: 0x1c4970 - 0x1c49c0
void entry_001c4970_0x1c4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4970_0x1c4970");
#endif

    switch (ctx->pc) {
        case 0x1c49b0u: goto label_1c49b0;
        default: break;
    }

    ctx->pc = 0x1c4970u;

    // 0x1c4970: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c4974: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1c4978: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c497c: 0x24040077  addiu       $a0, $zero, 0x77
    ctx->pc = 0x1c497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x1c4980: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c4980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c4984: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1c4984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1c4988: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c498c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1c498cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x1c4990: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1c4990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1c4994: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1c4994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c4998: 0xae440044  sw          $a0, 0x44($s2)
    ctx->pc = 0x1c4998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 4));
    // 0x1c499c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c49a0: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x1c49a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x1c49a4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1c49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c49a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C49A8u;
    SET_GPR_U32(ctx, 31, 0x1C49B0u);
    ctx->pc = 0x1C49ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49A8u;
    // 0x1c49ac: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C49A8u, 0x1C49B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49B0u;
label_1c49b0:
    // 0x1c49b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C49B0u;
    {
        const bool branch_taken_0x1c49b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49B0u;
        // 0x1c49b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49b0) {
            ctx->pc = 0x1C49C0u;
            return;
        }
    }
    ctx->pc = 0x1C49B8u;
    // 0x1c49b8: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1C49B8u;
    SET_GPR_U32(ctx, 31, 0x1C49C0u);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1C49B8u, 0x1C49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49C0u;
}
