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

// Function: entry_00107e54
// Address: 0x107e54 - 0x107e98
void entry_00107e54_0x107e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e54_0x107e54");
#endif

    switch (ctx->pc) {
        case 0x107e70u: goto label_107e70;
        case 0x107e80u: goto label_107e80;
        case 0x107e88u: goto label_107e88;
        default: break;
    }

    ctx->pc = 0x107e54u;

    // 0x107e54: 0x0  nop
    ctx->pc = 0x107e54u;
    // NOP
    // 0x107e58: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107e5c: 0x2a210000  slti        $at, $s1, 0x0
    ctx->pc = 0x107e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107e60: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x107E60u;
    {
        const bool branch_taken_0x107e60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E60u;
        // 0x107e64: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e60) {
            ctx->pc = 0x107E98u;
            return;
        }
    }
    ctx->pc = 0x107E68u;
    // 0x107e68: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107E68u;
    SET_GPR_U32(ctx, 31, 0x107E70u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107E68u, 0x107E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E70u;
label_107e70:
    // 0x107e70: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x107e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x107e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e78: 0xc062b9c  jal         func_18AE70
    ctx->pc = 0x107E78u;
    SET_GPR_U32(ctx, 31, 0x107E80u);
    ctx->pc = 0x107E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E78u;
    // 0x107e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE70u, 0x107E78u, 0x107E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E80u;
label_107e80:
    // 0x107e80: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107E80u;
    SET_GPR_U32(ctx, 31, 0x107E88u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107E80u, 0x107E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E88u;
label_107e88:
    // 0x107e88: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x107e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x107e8c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x107e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x107e90: 0xc062ba0  jal         func_18AE80
    ctx->pc = 0x107E90u;
    SET_GPR_U32(ctx, 31, 0x107E98u);
    ctx->pc = 0x107E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E90u;
    // 0x107e94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE80u, 0x107E90u, 0x107E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E98u;
}
