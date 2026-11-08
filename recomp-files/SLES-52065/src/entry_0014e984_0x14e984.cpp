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

// Function: entry_0014e984
// Address: 0x14e984 - 0x14e9c0
void entry_0014e984_0x14e984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e984_0x14e984");
#endif

    switch (ctx->pc) {
        case 0x14e998u: goto label_14e998;
        case 0x14e9b8u: goto label_14e9b8;
        default: break;
    }

    ctx->pc = 0x14e984u;

    // 0x14e984: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e988: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E988u;
    {
        const bool branch_taken_0x14e988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E988u;
        // 0x14e98c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e988) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E990u;
    // 0x14e990: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14E990u;
    SET_GPR_U32(ctx, 31, 0x14E998u);
    ctx->pc = 0x14E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E990u;
    // 0x14e994: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14E990u, 0x14E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E998u;
label_14e998:
    // 0x14e998: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14e998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e99c: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E99Cu;
    {
        const bool branch_taken_0x14e99c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E99Cu;
        // 0x14e9a0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e99c) {
            ctx->pc = 0x14E9C0u;
            return;
        }
    }
    ctx->pc = 0x14E9A4u;
    // 0x14e9a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e9a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14e9ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e9b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E9B0u;
    SET_GPR_U32(ctx, 31, 0x14E9B8u);
    ctx->pc = 0x14E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9B0u;
    // 0x14e9b4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E9B0u, 0x14E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9B8u;
label_14e9b8:
    // 0x14e9b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E9B8u;
    SET_GPR_U32(ctx, 31, 0x14E9C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E9B8u, 0x14E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C0u;
}
