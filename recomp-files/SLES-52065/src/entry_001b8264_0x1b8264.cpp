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

// Function: entry_001b8264
// Address: 0x1b8264 - 0x1b82a8
void entry_001b8264_0x1b8264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8264_0x1b8264");
#endif

    switch (ctx->pc) {
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b82a0u: goto label_1b82a0;
        default: break;
    }

    ctx->pc = 0x1b8264u;

    // 0x1b8264: 0x0  nop
    ctx->pc = 0x1b8264u;
    // NOP
    // 0x1b8268: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1B8268u;
    SET_GPR_U32(ctx, 31, 0x1B8270u);
    ctx->pc = 0x1B826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8268u;
    // 0x1b826c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1B8268u, 0x1B8270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8270u;
label_1b8270:
    // 0x1b8270: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8274: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B8274u;
    {
        const bool branch_taken_0x1b8274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8274) {
            ctx->pc = 0x1B823Cu;
            return;
        }
    }
    ctx->pc = 0x1B827Cu;
    // 0x1b827c: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1B827Cu;
    SET_GPR_U32(ctx, 31, 0x1B8284u);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1B827Cu, 0x1B8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8284u;
label_1b8284:
    // 0x1b8284: 0x26340014  addiu       $s4, $s1, 0x14
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b8288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b8288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b828c: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B828Cu;
    SET_GPR_U32(ctx, 31, 0x1B8294u);
    ctx->pc = 0x1B8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B828Cu;
    // 0x1b8290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B828Cu, 0x1B8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8294u;
label_1b8294:
    // 0x1b8294: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1b8294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8298: 0xc06e07c  jal         func_1B81F0
    ctx->pc = 0x1B8298u;
    SET_GPR_U32(ctx, 31, 0x1B82A0u);
    ctx->pc = 0x1B829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8298u;
    // 0x1b829c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81F0u, 0x1B8298u, 0x1B82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82A0u;
label_1b82a0:
    // 0x1b82a0: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B82A0u;
    {
        const bool branch_taken_0x1b82a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b82a0) {
            ctx->pc = 0x1B82CCu;
            return;
        }
    }
    ctx->pc = 0x1B82A8u;
}
