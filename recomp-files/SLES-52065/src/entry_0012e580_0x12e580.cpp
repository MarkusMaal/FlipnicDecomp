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

// Function: entry_0012e580
// Address: 0x12e580 - 0x12e5b8
void entry_0012e580_0x12e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e580_0x12e580");
#endif

    switch (ctx->pc) {
        case 0x12e590u: goto label_12e590;
        case 0x12e5b0u: goto label_12e5b0;
        default: break;
    }

    ctx->pc = 0x12e580u;

    // 0x12e580: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12E580u;
    {
        const bool branch_taken_0x12e580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E580u;
        // 0x12e584: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e580) {
            ctx->pc = 0x12E628u;
            return;
        }
    }
    ctx->pc = 0x12E588u;
    // 0x12e588: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12E588u;
    SET_GPR_U32(ctx, 31, 0x12E590u);
    ctx->pc = 0x12E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E588u;
    // 0x12e58c: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12E588u, 0x12E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E590u;
label_12e590:
    // 0x12e590: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e590u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e594: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E594u;
        // 0x12e598: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E5B8u;
            return;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e5a0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e5a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e5a8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E5A8u;
    SET_GPR_U32(ctx, 31, 0x12E5B0u);
    ctx->pc = 0x12E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5A8u;
    // 0x12e5ac: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E5A8u, 0x12E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B0u;
label_12e5b0:
    // 0x12e5b0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E5B0u;
    SET_GPR_U32(ctx, 31, 0x12E5B8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E5B0u, 0x12E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B8u;
}
