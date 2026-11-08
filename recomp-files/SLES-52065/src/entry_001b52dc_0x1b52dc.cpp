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

// Function: entry_001b52dc
// Address: 0x1b52dc - 0x1b5338
void entry_001b52dc_0x1b52dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b52dc_0x1b52dc");
#endif

    switch (ctx->pc) {
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5330u: goto label_1b5330;
        default: break;
    }

    ctx->pc = 0x1b52dcu;

    // 0x1b52dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52e0: 0x9022f248  lbu         $v0, -0xDB8($at)
    ctx->pc = 0x1b52e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F248u));
    // 0x1b52e4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B52E4u;
    {
        const bool branch_taken_0x1b52e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52e4) {
            ctx->pc = 0x1B5364u;
            return;
        }
    }
    ctx->pc = 0x1B52ECu;
    // 0x1b52ec: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B52ECu;
    SET_GPR_U32(ctx, 31, 0x1B52F4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B52ECu, 0x1B52F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52F4u;
label_1b52f4:
    // 0x1b52f4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b52f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B52F8u;
    SET_GPR_U32(ctx, 31, 0x1B5300u);
    ctx->pc = 0x1B52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52F8u;
    // 0x1b52fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B52F8u, 0x1B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5300u;
label_1b5300:
    // 0x1b5300: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B5300u;
    SET_GPR_U32(ctx, 31, 0x1B5308u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B5300u, 0x1B5308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5308u;
label_1b5308:
    // 0x1b5308: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b530c: 0xc080664  jal         func_201990
    ctx->pc = 0x1B530Cu;
    SET_GPR_U32(ctx, 31, 0x1B5314u);
    ctx->pc = 0x1B5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B530Cu;
    // 0x1b5310: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B530Cu, 0x1B5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5314u;
label_1b5314:
    // 0x1b5314: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5318: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b531c: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B531Cu;
    SET_GPR_U32(ctx, 31, 0x1B5324u);
    ctx->pc = 0x1B5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B531Cu;
    // 0x1b5320: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B531Cu, 0x1B5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5324u;
label_1b5324:
    // 0x1b5324: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5328: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5328u;
    SET_GPR_U32(ctx, 31, 0x1B5330u);
    ctx->pc = 0x1B532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5328u;
    // 0x1b532c: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5328u, 0x1B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5330u;
label_1b5330:
    // 0x1b5330: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5330u;
    {
        const bool branch_taken_0x1b5330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5330) {
            ctx->pc = 0x1B5354u;
            return;
        }
    }
    ctx->pc = 0x1B5338u;
}
