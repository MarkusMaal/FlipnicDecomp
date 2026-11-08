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

// Function: entry_00145774
// Address: 0x145774 - 0x1457ac
void entry_00145774_0x145774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145774_0x145774");
#endif

    switch (ctx->pc) {
        case 0x145784u: goto label_145784;
        case 0x1457a4u: goto label_1457a4;
        default: break;
    }

    ctx->pc = 0x145774u;

    // 0x145774: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x145778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14577c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x145780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14577Cu;
    // 0x145780: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14577Cu, 0x145784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145784u;
label_145784:
    // 0x145784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145788: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145788u;
    {
        const bool branch_taken_0x145788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145788u;
        // 0x14578c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145788) {
            ctx->pc = 0x1457ACu;
            return;
        }
    }
    ctx->pc = 0x145790u;
    // 0x145790: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x145790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x145794: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x145794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x145798: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x145798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14579c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14579Cu;
    SET_GPR_U32(ctx, 31, 0x1457A4u);
    ctx->pc = 0x1457A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14579Cu;
    // 0x1457a0: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14579Cu, 0x1457A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A4u;
label_1457a4:
    // 0x1457a4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1457A4u;
    SET_GPR_U32(ctx, 31, 0x1457ACu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1457A4u, 0x1457ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457ACu;
}
