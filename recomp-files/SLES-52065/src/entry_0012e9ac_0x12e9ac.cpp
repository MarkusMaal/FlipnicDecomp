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

// Function: entry_0012e9ac
// Address: 0x12e9ac - 0x12e9e0
void entry_0012e9ac_0x12e9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e9ac_0x12e9ac");
#endif

    switch (ctx->pc) {
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9d8u: goto label_12e9d8;
        default: break;
    }

    ctx->pc = 0x12e9acu;

    // 0x12e9ac: 0x0  nop
    ctx->pc = 0x12e9acu;
    // NOP
    // 0x12e9b0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12E9B0u, 0x12E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12e9b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9bc: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E9BCu;
    {
        const bool branch_taken_0x12e9bc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9BCu;
        // 0x12e9c0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9bc) {
            ctx->pc = 0x12E9E0u;
            return;
        }
    }
    ctx->pc = 0x12E9C4u;
    // 0x12e9c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e9c8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e9cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e9d0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E9D0u;
    SET_GPR_U32(ctx, 31, 0x12E9D8u);
    ctx->pc = 0x12E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D0u;
    // 0x12e9d4: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E9D0u, 0x12E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9D8u;
label_12e9d8:
    // 0x12e9d8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E9D8u;
    SET_GPR_U32(ctx, 31, 0x12E9E0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E9D8u, 0x12E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9E0u;
}
