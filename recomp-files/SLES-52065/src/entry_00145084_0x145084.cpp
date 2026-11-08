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

// Function: entry_00145084
// Address: 0x145084 - 0x1450dc
void entry_00145084_0x145084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145084_0x145084");
#endif

    switch (ctx->pc) {
        case 0x1450a8u: goto label_1450a8;
        case 0x1450b4u: goto label_1450b4;
        case 0x1450bcu: goto label_1450bc;
        case 0x1450c8u: goto label_1450c8;
        default: break;
    }

    ctx->pc = 0x145084u;

    // 0x145084: 0x8e3001a0  lw          $s0, 0x1A0($s1)
    ctx->pc = 0x145084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x145088: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x145088u;
    {
        const bool branch_taken_0x145088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145088) {
            ctx->pc = 0x1450E8u;
            return;
        }
    }
    ctx->pc = 0x145090u;
    // 0x145090: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x145090u;
    {
        const bool branch_taken_0x145090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145090u;
        // 0x145094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145090) {
            ctx->pc = 0x1450E0u;
            return;
        }
    }
    ctx->pc = 0x145098u;
    // 0x145098: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x145098u;
    {
        const bool branch_taken_0x145098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145098u;
        // 0x14509c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145098) {
            ctx->pc = 0x1450DCu;
            return;
        }
    }
    ctx->pc = 0x1450A0u;
    // 0x1450a0: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x1450A0u;
    SET_GPR_U32(ctx, 31, 0x1450A8u);
    ctx->pc = 0x1451F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451F0u, 0x1450A0u, 0x1450A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450A8u;
label_1450a8:
    // 0x1450a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1450a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450ac: 0xc051474  jal         func_1451D0
    ctx->pc = 0x1450ACu;
    SET_GPR_U32(ctx, 31, 0x1450B4u);
    ctx->pc = 0x1450B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450ACu;
    // 0x1450b0: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x1450ACu, 0x1450B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450B4u;
label_1450b4:
    // 0x1450b4: 0xc05147c  jal         func_1451F0
    ctx->pc = 0x1450B4u;
    SET_GPR_U32(ctx, 31, 0x1450BCu);
    ctx->pc = 0x1450B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450B4u;
    // 0x1450b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451F0u, 0x1450B4u, 0x1450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450BCu;
label_1450bc:
    // 0x1450bc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1450c0: 0xc051478  jal         func_1451E0
    ctx->pc = 0x1450C0u;
    SET_GPR_U32(ctx, 31, 0x1450C8u);
    ctx->pc = 0x1450C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450C0u;
    // 0x1450c4: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451E0u, 0x1450C0u, 0x1450C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450C8u;
label_1450c8:
    // 0x1450c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1450c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1450cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1450ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450d0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1450d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1450d4: 0xc0514b8  jal         func_1452E0
    ctx->pc = 0x1450D4u;
    SET_GPR_U32(ctx, 31, 0x1450DCu);
    ctx->pc = 0x1450D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450D4u;
    // 0x1450d8: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452E0u, 0x1450D4u, 0x1450DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450DCu;
}
