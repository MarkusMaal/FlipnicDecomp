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

// Function: entry_0014ebb0
// Address: 0x14ebb0 - 0x14ebe8
void entry_0014ebb0_0x14ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebb0_0x14ebb0");
#endif

    switch (ctx->pc) {
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebe0u: goto label_14ebe0;
        default: break;
    }

    ctx->pc = 0x14ebb0u;

    // 0x14ebb0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14EBB0u;
    {
        const bool branch_taken_0x14ebb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB0u;
        // 0x14ebb4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebb0) {
            ctx->pc = 0x14EC20u;
            return;
        }
    }
    ctx->pc = 0x14EBB8u;
    // 0x14ebb8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EBB8u;
    SET_GPR_U32(ctx, 31, 0x14EBC0u);
    ctx->pc = 0x14EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBB8u;
    // 0x14ebbc: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EBB8u, 0x14EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBC0u;
label_14ebc0:
    // 0x14ebc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14ebc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebc4: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EBC4u;
    {
        const bool branch_taken_0x14ebc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC4u;
        // 0x14ebc8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebc4) {
            ctx->pc = 0x14EBE8u;
            return;
        }
    }
    ctx->pc = 0x14EBCCu;
    // 0x14ebcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ebd0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14ebd4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ebd8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EBD8u;
    SET_GPR_U32(ctx, 31, 0x14EBE0u);
    ctx->pc = 0x14EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBD8u;
    // 0x14ebdc: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EBD8u, 0x14EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBE0u;
label_14ebe0:
    // 0x14ebe0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EBE0u;
    SET_GPR_U32(ctx, 31, 0x14EBE8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EBE0u, 0x14EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBE8u;
}
