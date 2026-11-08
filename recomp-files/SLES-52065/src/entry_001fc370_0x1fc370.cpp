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

// Function: entry_001fc370
// Address: 0x1fc370 - 0x1fc3e0
void entry_001fc370_0x1fc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc370_0x1fc370");
#endif

    switch (ctx->pc) {
        case 0x1fc380u: goto label_1fc380;
        default: break;
    }

    ctx->pc = 0x1fc370u;

    // 0x1fc370: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fc370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc374: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc378: 0xc0801fa  jal         func_2007E8
    ctx->pc = 0x1FC378u;
    SET_GPR_U32(ctx, 31, 0x1FC380u);
    ctx->pc = 0x1FC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC378u;
    // 0x1fc37c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007E8u, 0x1FC378u, 0x1FC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC380u;
label_1fc380:
    // 0x1fc380: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1fc384: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x1fc384u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1fc388: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC388u;
    {
        const bool branch_taken_0x1fc388 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC388u;
        // 0x1fc38c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc388) {
            ctx->pc = 0x1FC3E0u;
            return;
        }
    }
    ctx->pc = 0x1FC390u;
    // 0x1fc390: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1fc390u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc394: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1fc398: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1fc398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc39c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fc3a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fc3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fc3a4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc3a8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1fc3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1fc3ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc3b0: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x1fc3b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1fc3b4: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1fc3b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x1fc3b8: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x1fc3bc: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x1fc3bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc3c0: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x1fc3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x1fc3c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1fc3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1fc3c8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x1fc3c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1fc3cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fc3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc3d0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1fc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1fc3d4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x1fc3d4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1fc3d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC3D8u;
    {
        const bool branch_taken_0x1fc3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3D8u;
        // 0x1fc3dc: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3d8) {
            ctx->pc = 0x1FC478u;
            return;
        }
    }
    ctx->pc = 0x1FC3E0u;
}
