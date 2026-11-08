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

// Function: entry_001adbd8
// Address: 0x1adbd8 - 0x1adc00
void entry_001adbd8_0x1adbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adbd8_0x1adbd8");
#endif

    switch (ctx->pc) {
        case 0x1adbe8u: goto label_1adbe8;
        default: break;
    }

    ctx->pc = 0x1adbd8u;

    // 0x1adbd8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1adbdc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1adbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1adbe0: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1ADBE0u;
    SET_GPR_U32(ctx, 31, 0x1ADBE8u);
    ctx->pc = 0x1ADBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBE0u;
    // 0x1adbe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1ADBE0u, 0x1ADBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBE8u;
label_1adbe8:
    // 0x1adbe8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1adbec: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1adbf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADBF0u;
    {
        const bool branch_taken_0x1adbf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBF0u;
        // 0x1adbf4: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbf0) {
            ctx->pc = 0x1ADC00u;
            return;
        }
    }
    ctx->pc = 0x1ADBF8u;
    // 0x1adbf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADBF8u;
    {
        const bool branch_taken_0x1adbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBF8u;
        // 0x1adbfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbf8) {
            ctx->pc = 0x1ADC18u;
            return;
        }
    }
    ctx->pc = 0x1ADC00u;
}
