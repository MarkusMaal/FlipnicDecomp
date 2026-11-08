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

// Function: entry_001bda48
// Address: 0x1bda48 - 0x1bda7c
void entry_001bda48_0x1bda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bda48_0x1bda48");
#endif

    switch (ctx->pc) {
        case 0x1bda54u: goto label_1bda54;
        case 0x1bda74u: goto label_1bda74;
        default: break;
    }

    ctx->pc = 0x1bda48u;

    // 0x1bda48: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bda4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA54u);
    ctx->pc = 0x1BDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA4Cu;
    // 0x1bda50: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BDA4Cu, 0x1BDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA54u;
label_1bda54:
    // 0x1bda54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bda54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda58: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDA58u;
    {
        const bool branch_taken_0x1bda58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA58u;
        // 0x1bda5c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda58) {
            ctx->pc = 0x1BDA7Cu;
            return;
        }
    }
    ctx->pc = 0x1BDA60u;
    // 0x1bda60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bda64: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bda68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bda6c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BDA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA74u);
    ctx->pc = 0x1BDA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA6Cu;
    // 0x1bda70: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BDA6Cu, 0x1BDA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA74u;
label_1bda74:
    // 0x1bda74: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BDA74u;
    SET_GPR_U32(ctx, 31, 0x1BDA7Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BDA74u, 0x1BDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA7Cu;
}
