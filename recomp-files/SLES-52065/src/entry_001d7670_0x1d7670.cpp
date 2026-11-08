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

// Function: entry_001d7670
// Address: 0x1d7670 - 0x1d76d8
void entry_001d7670_0x1d7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7670_0x1d7670");
#endif

    switch (ctx->pc) {
        case 0x1d7680u: goto label_1d7680;
        case 0x1d768cu: goto label_1d768c;
        case 0x1d7698u: goto label_1d7698;
        case 0x1d76c4u: goto label_1d76c4;
        default: break;
    }

    ctx->pc = 0x1d7670u;

    // 0x1d7670: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d7670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7674: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7674u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d7678: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D7678u;
    SET_GPR_U32(ctx, 31, 0x1D7680u);
    ctx->pc = 0x1D767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7678u;
    // 0x1d767c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D7678u, 0x1D7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7680u;
label_1d7680:
    // 0x1d7680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7684: 0xc077424  jal         func_1DD090
    ctx->pc = 0x1D7684u;
    SET_GPR_U32(ctx, 31, 0x1D768Cu);
    ctx->pc = 0x1D7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7684u;
    // 0x1d7688: 0x8ea50014  lw          $a1, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD090u, 0x1D7684u, 0x1D768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D768Cu;
label_1d768c:
    // 0x1d768c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7690: 0xc077432  jal         func_1DD0C8
    ctx->pc = 0x1D7690u;
    SET_GPR_U32(ctx, 31, 0x1D7698u);
    ctx->pc = 0x1D7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7690u;
    // 0x1d7694: 0x8ea50020  lw          $a1, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0C8u, 0x1D7690u, 0x1D7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7698u;
label_1d7698:
    // 0x1d7698: 0x96c50004  lhu         $a1, 0x4($s6)
    ctx->pc = 0x1d7698u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1d769c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d76a0: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370550u));
    // 0x1d76a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d76a8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d76ac: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d76b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d76b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d76b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d76b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d76bc: 0xc07739a  jal         func_1DCE68
    ctx->pc = 0x1D76BCu;
    SET_GPR_U32(ctx, 31, 0x1D76C4u);
    ctx->pc = 0x1D76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76BCu;
    // 0x1d76c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1D76BCu, 0x1D76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76C4u;
label_1d76c4:
    // 0x1d76c4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D76C4u;
    {
        const bool branch_taken_0x1d76c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76C4u;
        // 0x1d76c8: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76c4) {
            ctx->pc = 0x1D76D8u;
            return;
        }
    }
    ctx->pc = 0x1D76CCu;
    // 0x1d76cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d76d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D76D0u;
    {
        const bool branch_taken_0x1d76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76D0u;
        // 0x1d76d4: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76d0) {
            ctx->pc = 0x1D76E4u;
            return;
        }
    }
    ctx->pc = 0x1D76D8u;
}
