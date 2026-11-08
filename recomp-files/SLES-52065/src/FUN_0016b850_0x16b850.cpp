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

// Function: FUN_0016b850
// Address: 0x16b850 - 0x16b8d0
void FUN_0016b850_0x16b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b850_0x16b850");
#endif

    switch (ctx->pc) {
        case 0x16b894u: goto label_16b894;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8b8u: goto label_16b8b8;
        default: break;
    }

    ctx->pc = 0x16b850u;

    // 0x16b850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b864: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B864u;
    {
        const bool branch_taken_0x16b864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B864u;
        // 0x16b868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b864) {
            ctx->pc = 0x16B8B8u;
            goto label_16b8b8;
        }
    }
    ctx->pc = 0x16B86Cu;
    // 0x16b86c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b870: 0x2442a5b0  addiu       $v0, $v0, -0x5A50
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944176));
    // 0x16b874: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16B874u;
    {
        const bool branch_taken_0x16b874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B874u;
        // 0x16b878: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b874) {
            ctx->pc = 0x16B8A0u;
            goto label_16b8a0;
        }
    }
    ctx->pc = 0x16B87Cu;
    // 0x16b87c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b880: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b884: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x16b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x16b888: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b88c: 0xc0417f0  jal         func_105FC0
    ctx->pc = 0x16B88Cu;
    SET_GPR_U32(ctx, 31, 0x16B894u);
    ctx->pc = 0x16B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B88Cu;
    // 0x16b890: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC0u, 0x16B88Cu, 0x16B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B894u;
label_16b894:
    // 0x16b894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b898: 0xc041808  jal         func_106020
    ctx->pc = 0x16B898u;
    SET_GPR_U32(ctx, 31, 0x16B8A0u);
    ctx->pc = 0x16B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B898u;
    // 0x16b89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106020u, 0x16B898u, 0x16B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16b8a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16b8a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16b8a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B8A8u;
    {
        const bool branch_taken_0x16b8a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8A8u;
        // 0x16b8ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8a8) {
            ctx->pc = 0x16B8BCu;
            goto label_16b8bc;
        }
    }
    ctx->pc = 0x16B8B0u;
    // 0x16b8b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16B8B0u;
    SET_GPR_U32(ctx, 31, 0x16B8B8u);
    ctx->pc = 0x16B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B8B0u;
    // 0x16b8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16B8B0u, 0x16B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B8B8u;
label_16b8b8:
    // 0x16b8b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16b8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b8bc:
    // 0x16b8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b8c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B8C8u;
        // 0x16b8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B8D0u;
}
