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

// Function: entry_001363dc
// Address: 0x1363dc - 0x136410
void entry_001363dc_0x1363dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363dc_0x1363dc");
#endif

    switch (ctx->pc) {
        case 0x1363e8u: goto label_1363e8;
        case 0x136408u: goto label_136408;
        default: break;
    }

    ctx->pc = 0x1363dcu;

    // 0x1363dc: 0x0  nop
    ctx->pc = 0x1363dcu;
    // NOP
    // 0x1363e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1363E0u;
    SET_GPR_U32(ctx, 31, 0x1363E8u);
    ctx->pc = 0x1363E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363E0u;
    // 0x1363e4: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1363E0u, 0x1363E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363E8u;
label_1363e8:
    // 0x1363e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1363e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363ec: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1363ECu;
    {
        const bool branch_taken_0x1363ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363ECu;
        // 0x1363f0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363ec) {
            ctx->pc = 0x136410u;
            return;
        }
    }
    ctx->pc = 0x1363F4u;
    // 0x1363f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1363f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1363f8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1363fc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x136400: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x136400u;
    SET_GPR_U32(ctx, 31, 0x136408u);
    ctx->pc = 0x136404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136400u;
    // 0x136404: 0x24a5ef00  addiu       $a1, $a1, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x136400u, 0x136408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136408u;
label_136408:
    // 0x136408: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x136408u;
    SET_GPR_U32(ctx, 31, 0x136410u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x136408u, 0x136410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136410u;
}
