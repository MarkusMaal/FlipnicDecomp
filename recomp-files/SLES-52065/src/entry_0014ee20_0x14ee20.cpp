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

// Function: entry_0014ee20
// Address: 0x14ee20 - 0x14ee58
void entry_0014ee20_0x14ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee20_0x14ee20");
#endif

    switch (ctx->pc) {
        case 0x14ee30u: goto label_14ee30;
        case 0x14ee50u: goto label_14ee50;
        default: break;
    }

    ctx->pc = 0x14ee20u;

    // 0x14ee20: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x14ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ee24: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x14ee28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EE28u;
    SET_GPR_U32(ctx, 31, 0x14EE30u);
    ctx->pc = 0x14EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE28u;
    // 0x14ee2c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EE28u, 0x14EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE30u;
label_14ee30:
    // 0x14ee30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14ee30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee34: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EE34u;
    {
        const bool branch_taken_0x14ee34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE34u;
        // 0x14ee38: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee34) {
            ctx->pc = 0x14EE58u;
            return;
        }
    }
    ctx->pc = 0x14EE3Cu;
    // 0x14ee3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ee3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ee40: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14ee44: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ee48: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EE48u;
    SET_GPR_U32(ctx, 31, 0x14EE50u);
    ctx->pc = 0x14EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE48u;
    // 0x14ee4c: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EE48u, 0x14EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE50u;
label_14ee50:
    // 0x14ee50: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EE50u;
    SET_GPR_U32(ctx, 31, 0x14EE58u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EE50u, 0x14EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE58u;
}
