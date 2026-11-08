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

// Function: entry_0012e550
// Address: 0x12e550 - 0x12e580
void entry_0012e550_0x12e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e550_0x12e550");
#endif

    switch (ctx->pc) {
        case 0x12e578u: goto label_12e578;
        default: break;
    }

    ctx->pc = 0x12e550u;

    // 0x12e550: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x12e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12e554: 0x3c010800  lui         $at, 0x800
    ctx->pc = 0x12e554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2048 << 16));
    // 0x12e558: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x12e558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12e55c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E55Cu;
    {
        const bool branch_taken_0x12e55c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E55Cu;
        // 0x12e560: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e55c) {
            ctx->pc = 0x12E580u;
            return;
        }
    }
    ctx->pc = 0x12E564u;
    // 0x12e564: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e568: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e56c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e570: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E570u;
    SET_GPR_U32(ctx, 31, 0x12E578u);
    ctx->pc = 0x12E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E570u;
    // 0x12e574: 0x24a5ecd0  addiu       $a1, $a1, -0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E570u, 0x12E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E578u;
label_12e578:
    // 0x12e578: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E578u;
    SET_GPR_U32(ctx, 31, 0x12E580u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E578u, 0x12E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E580u;
}
