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

// Function: entry_00141438
// Address: 0x141438 - 0x14146c
void entry_00141438_0x141438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141438_0x141438");
#endif

    switch (ctx->pc) {
        case 0x141444u: goto label_141444;
        case 0x141464u: goto label_141464;
        default: break;
    }

    ctx->pc = 0x141438u;

    // 0x141438: 0x8fb50084  lw          $s5, 0x84($sp)
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x14143c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14143Cu;
    SET_GPR_U32(ctx, 31, 0x141444u);
    ctx->pc = 0x141440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14143Cu;
    // 0x141440: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14143Cu, 0x141444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141444u;
label_141444:
    // 0x141444: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x141444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141448: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x141448u;
    {
        const bool branch_taken_0x141448 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141448u;
        // 0x14144c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141448) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x141450u;
    // 0x141450: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x141454: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x141454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x141458: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14145c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14145Cu;
    SET_GPR_U32(ctx, 31, 0x141464u);
    ctx->pc = 0x141460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14145Cu;
    // 0x141460: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14145Cu, 0x141464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141464u;
label_141464:
    // 0x141464: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x141464u;
    SET_GPR_U32(ctx, 31, 0x14146Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x141464u, 0x14146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14146Cu;
}
