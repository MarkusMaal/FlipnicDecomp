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

// Function: FUN_00132980
// Address: 0x132980 - 0x132b90
void FUN_00132980_0x132980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132980_0x132980");
#endif

    switch (ctx->pc) {
        case 0x1329b8u: goto label_1329b8;
        case 0x1329c4u: goto label_1329c4;
        case 0x1329dcu: goto label_1329dc;
        case 0x1329e4u: goto label_1329e4;
        case 0x1329ecu: goto label_1329ec;
        case 0x132a00u: goto label_132a00;
        case 0x132a18u: goto label_132a18;
        case 0x132a34u: goto label_132a34;
        case 0x132a48u: goto label_132a48;
        case 0x132a54u: goto label_132a54;
        case 0x132a70u: goto label_132a70;
        case 0x132a8cu: goto label_132a8c;
        case 0x132aa0u: goto label_132aa0;
        case 0x132aacu: goto label_132aac;
        case 0x132ac8u: goto label_132ac8;
        case 0x132ad0u: goto label_132ad0;
        case 0x132adcu: goto label_132adc;
        case 0x132ae8u: goto label_132ae8;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b28u: goto label_132b28;
        case 0x132b3cu: goto label_132b3c;
        case 0x132b58u: goto label_132b58;
        case 0x132b70u: goto label_132b70;
        default: break;
    }

    ctx->pc = 0x132980u;

    // 0x132980: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x132984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13298c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132990: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x132990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x132998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13299c: 0x12600074  beqz        $s3, . + 4 + (0x74 << 2)
    ctx->pc = 0x13299Cu;
    {
        const bool branch_taken_0x13299c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13299Cu;
        // 0x1329a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13299c) {
            ctx->pc = 0x132B70u;
            goto label_132b70;
        }
    }
    ctx->pc = 0x1329A4u;
    // 0x1329a4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1329a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1329a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1329a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329ac: 0x24428cb8  addiu       $v0, $v0, -0x7348
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937784));
    // 0x1329b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1329b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1329b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1329b8:
    // 0x1329b8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1329b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1329bc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329BCu;
    SET_GPR_U32(ctx, 31, 0x1329C4u);
    ctx->pc = 0x1329C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329BCu;
    // 0x1329c0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329BCu, 0x1329C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329C4u;
label_1329c4:
    // 0x1329c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1329c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1329c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1329cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1329CCu;
    {
        const bool branch_taken_0x1329cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329CCu;
        // 0x1329d0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329cc) {
            ctx->pc = 0x1329B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1329b8;
        }
    }
    ctx->pc = 0x1329D4u;
    // 0x1329d4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329D4u;
    SET_GPR_U32(ctx, 31, 0x1329DCu);
    ctx->pc = 0x1329D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329D4u;
    // 0x1329d8: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329D4u, 0x1329DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329DCu;
label_1329dc:
    // 0x1329dc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329DCu;
    SET_GPR_U32(ctx, 31, 0x1329E4u);
    ctx->pc = 0x1329E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329DCu;
    // 0x1329e0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329DCu, 0x1329E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329E4u;
label_1329e4:
    // 0x1329e4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1329E4u;
    SET_GPR_U32(ctx, 31, 0x1329ECu);
    ctx->pc = 0x1329E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329E4u;
    // 0x1329e8: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1329E4u, 0x1329ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329ECu;
label_1329ec:
    // 0x1329ec: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x1329ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x1329f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329F8u;
    // 0x1329f8: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x1329F8u;
    SET_GPR_U32(ctx, 31, 0x132A00u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x1329F8u, 0x132A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A00u;
label_132a00:
    // 0x132a00: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132a04: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132A04u;
    {
        const bool branch_taken_0x132a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A04u;
        // 0x132a08: 0xafb30064  sw          $s3, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a04) {
            ctx->pc = 0x132A3Cu;
            goto label_132a3c;
        }
    }
    ctx->pc = 0x132A0Cu;
    // 0x132a0c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a10: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132A10u;
    SET_GPR_U32(ctx, 31, 0x132A18u);
    ctx->pc = 0x132A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A10u;
    // 0x132a14: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132A10u, 0x132A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A18u;
label_132a18:
    // 0x132a18: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a1c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132a20: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132a24: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132a28: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132a2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132A2Cu;
    SET_GPR_U32(ctx, 31, 0x132A34u);
    ctx->pc = 0x132A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A2Cu;
    // 0x132a30: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132A2Cu, 0x132A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A34u;
label_132a34:
    // 0x132a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a38: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_132a3c:
    // 0x132a3c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a40: 0xc04c554  jal         func_131550
    ctx->pc = 0x132A40u;
    SET_GPR_U32(ctx, 31, 0x132A48u);
    ctx->pc = 0x132A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A40u;
    // 0x132a44: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x132A40u, 0x132A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A48u;
label_132a48:
    // 0x132a48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132a4c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x132A4Cu;
    SET_GPR_U32(ctx, 31, 0x132A54u);
    ctx->pc = 0x132A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A4Cu;
    // 0x132a50: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x132A4Cu, 0x132A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A54u;
label_132a54:
    // 0x132a54: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x132a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x132a58: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132a5c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132A5Cu;
    {
        const bool branch_taken_0x132a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A5Cu;
        // 0x132a60: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a5c) {
            ctx->pc = 0x132A94u;
            goto label_132a94;
        }
    }
    ctx->pc = 0x132A64u;
    // 0x132a64: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a68: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132A68u;
    SET_GPR_U32(ctx, 31, 0x132A70u);
    ctx->pc = 0x132A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A68u;
    // 0x132a6c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132A68u, 0x132A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A70u;
label_132a70:
    // 0x132a70: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a74: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132a78: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132a7c: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132a80: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132a84: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132A84u;
    SET_GPR_U32(ctx, 31, 0x132A8Cu);
    ctx->pc = 0x132A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A84u;
    // 0x132a88: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132A84u, 0x132A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A8Cu;
label_132a8c:
    // 0x132a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a90: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_132a94:
    // 0x132a94: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a98: 0xc04c554  jal         func_131550
    ctx->pc = 0x132A98u;
    SET_GPR_U32(ctx, 31, 0x132AA0u);
    ctx->pc = 0x132A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A98u;
    // 0x132a9c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x132A98u, 0x132AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AA0u;
label_132aa0:
    // 0x132aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132aa4: 0xc04c550  jal         func_131540
    ctx->pc = 0x132AA4u;
    SET_GPR_U32(ctx, 31, 0x132AACu);
    ctx->pc = 0x132AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AA4u;
    // 0x132aa8: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x132AA4u, 0x132AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AACu;
label_132aac:
    // 0x132aac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x132ab0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x132ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132ab4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132ab8: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x132ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132abc: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x132abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x132ac0: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x132AC0u;
    SET_GPR_U32(ctx, 31, 0x132AC8u);
    ctx->pc = 0x132AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AC0u;
    // 0x132ac4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BF0u, 0x132AC0u, 0x132AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AC8u;
label_132ac8:
    // 0x132ac8: 0xc04cae4  jal         func_132B90
    ctx->pc = 0x132AC8u;
    SET_GPR_U32(ctx, 31, 0x132AD0u);
    ctx->pc = 0x132ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AC8u;
    // 0x132acc: 0x8fb00060  lw          $s0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B90u, 0x132AC8u, 0x132AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AD0u;
label_132ad0:
    // 0x132ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ad4: 0xc04c7b8  jal         func_131EE0
    ctx->pc = 0x132AD4u;
    SET_GPR_U32(ctx, 31, 0x132ADCu);
    ctx->pc = 0x132AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AD4u;
    // 0x132ad8: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EE0u, 0x132AD4u, 0x132ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ADCu;
label_132adc:
    // 0x132adc: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x132adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x132ae0: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132AE0u;
    SET_GPR_U32(ctx, 31, 0x132AE8u);
    ctx->pc = 0x132AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AE0u;
    // 0x132ae4: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132AE0u, 0x132AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AE8u;
label_132ae8:
    // 0x132ae8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x132ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x132aec: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x132AECu;
    {
        const bool branch_taken_0x132aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x132AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AECu;
        // 0x132af0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aec) {
            ctx->pc = 0x132B5Cu;
            goto label_132b5c;
        }
    }
    ctx->pc = 0x132AF4u;
    // 0x132af4: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132af8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132AF8u;
    {
        const bool branch_taken_0x132af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AF8u;
        // 0x132afc: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132af8) {
            ctx->pc = 0x132B30u;
            goto label_132b30;
        }
    }
    ctx->pc = 0x132B00u;
    // 0x132b00: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132b04: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132B04u;
    SET_GPR_U32(ctx, 31, 0x132B0Cu);
    ctx->pc = 0x132B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B04u;
    // 0x132b08: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132B04u, 0x132B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B0Cu;
label_132b0c:
    // 0x132b0c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132b10: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132b14: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132b18: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132b1c: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132b20: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132B20u;
    SET_GPR_U32(ctx, 31, 0x132B28u);
    ctx->pc = 0x132B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B20u;
    // 0x132b24: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132B20u, 0x132B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B28u;
label_132b28:
    // 0x132b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b2c: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
label_132b30:
    // 0x132b30: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x132b34: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132B34u;
    SET_GPR_U32(ctx, 31, 0x132B3Cu);
    ctx->pc = 0x132B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B34u;
    // 0x132b38: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132B34u, 0x132B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B3Cu;
label_132b3c:
    // 0x132b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x132b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x132b40: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x132b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x132b44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x132b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x132b48: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x132b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x132b4c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x132b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x132b50: 0xc04c91c  jal         func_132470
    ctx->pc = 0x132B50u;
    SET_GPR_U32(ctx, 31, 0x132B58u);
    ctx->pc = 0x132B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B50u;
    // 0x132b54: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x132B50u, 0x132B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B58u;
label_132b58:
    // 0x132b58: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x132b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_132b5c:
    // 0x132b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x132b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x132b60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132B60u;
    {
        const bool branch_taken_0x132b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x132B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B60u;
        // 0x132b64: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b60) {
            ctx->pc = 0x132B74u;
            goto label_132b74;
        }
    }
    ctx->pc = 0x132B68u;
    // 0x132b68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x132B68u;
    SET_GPR_U32(ctx, 31, 0x132B70u);
    ctx->pc = 0x132B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B68u;
    // 0x132b6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x132B68u, 0x132B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B70u;
label_132b70:
    // 0x132b70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x132b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132b74:
    // 0x132b74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132b78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132b78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132b7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132b88: 0x3e00008  jr          $ra
    ctx->pc = 0x132B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B88u;
        // 0x132b8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B90u;
}
