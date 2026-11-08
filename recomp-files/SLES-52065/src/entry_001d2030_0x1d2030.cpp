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

// Function: entry_001d2030
// Address: 0x1d2030 - 0x1d2080
void entry_001d2030_0x1d2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2030_0x1d2030");
#endif

    switch (ctx->pc) {
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2050u: goto label_1d2050;
        default: break;
    }

    ctx->pc = 0x1d2030u;

label_1d2030:
    // 0x1d2030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d2034:
    // 0x1d2034: 0x8c25fea0  lw          $a1, -0x160($at)
    ctx->pc = 0x1d2034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966944)));
label_1d2038:
    // 0x1d2038: 0xc074b7c  jal         func_1D2DF0
label_1d203c:
    if (ctx->pc == 0x1D203Cu) {
        ctx->pc = 0x1D203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2038u;
        // 0x1d203c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2040u;
        goto label_1d2040;
    }
    ctx->pc = 0x1D2038u;
    SET_GPR_U32(ctx, 31, 0x1D2040u);
    ctx->pc = 0x1D203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2038u;
    // 0x1d203c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D2038u, 0x1D2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2040u;
label_1d2040:
    // 0x1d2040: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_1d2044:
    if (ctx->pc == 0x1D2044u) {
        ctx->pc = 0x1D2048u;
        goto label_1d2048;
    }
    ctx->pc = 0x1D2040u;
    {
        const bool branch_taken_0x1d2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2040) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2048u;
label_1d2048:
    // 0x1d2048: 0xc047a3c  jal         func_11E8F0
label_1d204c:
    if (ctx->pc == 0x1D204Cu) {
        ctx->pc = 0x1D2050u;
        goto label_1d2050;
    }
    ctx->pc = 0x1D2048u;
    SET_GPR_U32(ctx, 31, 0x1D2050u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1D2048u, 0x1D2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2050u;
label_1d2050:
    // 0x1d2050: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d2054:
    // 0x1d2054: 0x8c25fea0  lw          $a1, -0x160($at)
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966944)));
label_1d2058:
    // 0x1d2058: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x1d2058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d205c:
    // 0x1d205c: 0x102000a9  beqz        $at, . + 4 + (0xA9 << 2)
label_1d2060:
    if (ctx->pc == 0x1D2060u) {
        ctx->pc = 0x1D2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D205Cu;
        // 0x1d2060: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2064u;
        goto label_1d2064;
    }
    ctx->pc = 0x1D205Cu;
    {
        const bool branch_taken_0x1d205c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D205Cu;
        // 0x1d2060: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d205c) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D2064u;
label_1d2064:
    // 0x1d2064: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d2064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1d2068:
    // 0x1d2068: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d206c:
    // 0x1d206c: 0x24843530  addiu       $a0, $a0, 0x3530
    ctx->pc = 0x1d206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
label_1d2070:
    // 0x1d2070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d2074:
    // 0x1d2074: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2078:
    // 0x1d2078: 0x600008  jr          $v1
label_1d207c:
    if (ctx->pc == 0x1D207Cu) {
        ctx->pc = 0x1D2080u;
        goto label_fallthrough_0x1d2078;
    }
    ctx->pc = 0x1D2078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d2078:
    ctx->pc = 0x1D2080u;
}
