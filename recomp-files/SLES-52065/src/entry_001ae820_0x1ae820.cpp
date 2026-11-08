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

// Function: entry_001ae820
// Address: 0x1ae820 - 0x1ae86c
void entry_001ae820_0x1ae820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae820_0x1ae820");
#endif

    switch (ctx->pc) {
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae864u: goto label_1ae864;
        default: break;
    }

    ctx->pc = 0x1ae820u;

    // 0x1ae820: 0xc058018  jal         func_160060
    ctx->pc = 0x1AE820u;
    SET_GPR_U32(ctx, 31, 0x1AE828u);
    ctx->pc = 0x1AE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE820u;
    // 0x1ae824: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1AE820u, 0x1AE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x1ae82c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae830: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae838: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae83c: 0xc06bc30  jal         func_1AF0C0
    ctx->pc = 0x1AE83Cu;
    SET_GPR_U32(ctx, 31, 0x1AE844u);
    ctx->pc = 0x1AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE83Cu;
    // 0x1ae840: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF0C0u, 0x1AE83Cu, 0x1AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE844u;
label_1ae844:
    // 0x1ae844: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ae848: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1ae84c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AE84Cu;
    SET_GPR_U32(ctx, 31, 0x1AE854u);
    ctx->pc = 0x1AE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE84Cu;
    // 0x1ae850: 0xae8206b4  sw          $v0, 0x6B4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AE84Cu, 0x1AE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE854u;
label_1ae854:
    // 0x1ae854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae858: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1ae85c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AE85Cu;
    SET_GPR_U32(ctx, 31, 0x1AE864u);
    ctx->pc = 0x1AE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE85Cu;
    // 0x1ae860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AE85Cu, 0x1AE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE864u;
label_1ae864:
    // 0x1ae864: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE864u;
    SET_GPR_U32(ctx, 31, 0x1AE86Cu);
    ctx->pc = 0x1AE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE864u;
    // 0x1ae868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE864u, 0x1AE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE86Cu;
}
