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

// Function: FUN_001319d0
// Address: 0x1319d0 - 0x131a94
void FUN_001319d0_0x1319d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001319d0_0x1319d0");
#endif

    switch (ctx->pc) {
        case 0x131a18u: goto label_131a18;
        case 0x131a28u: goto label_131a28;
        case 0x131a38u: goto label_131a38;
        case 0x131a48u: goto label_131a48;
        case 0x131a58u: goto label_131a58;
        case 0x131a68u: goto label_131a68;
        case 0x131a78u: goto label_131a78;
        default: break;
    }

    ctx->pc = 0x1319d0u;

label_1319d0:
    // 0x1319d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1319d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1319d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1319d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1319d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1319d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1319dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1319dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1319e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1319e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1319e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1319e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1319e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1319ec: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x1319ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1319f0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1319F0u;
    {
        const bool branch_taken_0x1319f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1319F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319F0u;
        // 0x1319f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319f0) {
            ctx->pc = 0x131A60u;
            goto label_131a60;
        }
    }
    ctx->pc = 0x1319F8u;
    // 0x1319f8: 0x8e110064  lw          $s1, 0x64($s0)
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1319fc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1319FCu;
    {
        const bool branch_taken_0x1319fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319FCu;
        // 0x131a00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319fc) {
            ctx->pc = 0x131A40u;
            goto label_131a40;
        }
    }
    ctx->pc = 0x131A04u;
    // 0x131a04: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x131a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x131a08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131A20u;
            goto label_131a20;
        }
    }
    ctx->pc = 0x131A10u;
    // 0x131a10: 0xc04c674  jal         func_1319D0
    ctx->pc = 0x131A10u;
    SET_GPR_U32(ctx, 31, 0x131A18u);
    ctx->pc = 0x1319D0u;
    goto label_1319d0;
    ctx->pc = 0x131A18u;
label_131a18:
    // 0x131a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131A18u;
    {
        const bool branch_taken_0x131a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A18u;
        // 0x131a1c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a18) {
            ctx->pc = 0x131A2Cu;
            goto label_131a2c;
        }
    }
    ctx->pc = 0x131A20u;
label_131a20:
    // 0x131a20: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131A20u;
    SET_GPR_U32(ctx, 31, 0x131A28u);
    ctx->pc = 0x131A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A20u;
    // 0x131a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131A20u, 0x131A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A28u;
label_131a28:
    // 0x131a28: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x131a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_131a2c:
    // 0x131a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a30: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A30u;
    SET_GPR_U32(ctx, 31, 0x131A38u);
    ctx->pc = 0x131A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A30u;
    // 0x131a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A30u, 0x131A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A38u;
label_131a38:
    // 0x131a38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131A38u;
    {
        const bool branch_taken_0x131a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A38u;
        // 0x131a3c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a38) {
            ctx->pc = 0x131A4Cu;
            goto label_131a4c;
        }
    }
    ctx->pc = 0x131A40u;
label_131a40:
    // 0x131a40: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131A40u;
    SET_GPR_U32(ctx, 31, 0x131A48u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131A40u, 0x131A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A48u;
label_131a48:
    // 0x131a48: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x131a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_131a4c:
    // 0x131a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a50: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A50u;
    SET_GPR_U32(ctx, 31, 0x131A58u);
    ctx->pc = 0x131A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A50u;
    // 0x131a54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A50u, 0x131A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A58u;
label_131a58:
    // 0x131a58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A58u;
        // 0x131a5c: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131A6Cu;
            goto label_131a6c;
        }
    }
    ctx->pc = 0x131A60u;
label_131a60:
    // 0x131a60: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131A60u;
    SET_GPR_U32(ctx, 31, 0x131A68u);
    ctx->pc = 0x131A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A60u;
    // 0x131a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131A60u, 0x131A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A68u;
label_131a68:
    // 0x131a68: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_131a6c:
    // 0x131a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a70: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131A70u;
    SET_GPR_U32(ctx, 31, 0x131A78u);
    ctx->pc = 0x131A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A70u;
    // 0x131a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131A70u, 0x131A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A78u;
label_131a78:
    // 0x131a78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x131A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A8Cu;
        // 0x131a90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131A94u;
}
