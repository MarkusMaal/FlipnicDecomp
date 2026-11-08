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

// Function: FUN_0012c890
// Address: 0x12c890 - 0x12c97c
void FUN_0012c890_0x12c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c890_0x12c890");
#endif

    switch (ctx->pc) {
        case 0x12c8c8u: goto label_12c8c8;
        case 0x12c8d0u: goto label_12c8d0;
        case 0x12c8d8u: goto label_12c8d8;
        case 0x12c8e4u: goto label_12c8e4;
        case 0x12c8f8u: goto label_12c8f8;
        case 0x12c944u: goto label_12c944;
        case 0x12c95cu: goto label_12c95c;
        case 0x12c964u: goto label_12c964;
        default: break;
    }

    ctx->pc = 0x12c890u;

    // 0x12c890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12c894: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12c898: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c89c: 0x24638b90  addiu       $v1, $v1, -0x7470
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937488));
    // 0x12c8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c8a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12c8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8ac: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x12c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x12c8b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12c8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8b4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c8b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12c8bc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c8c0: 0xc04b38c  jal         func_12CE30
    ctx->pc = 0x12C8C0u;
    SET_GPR_U32(ctx, 31, 0x12C8C8u);
    ctx->pc = 0x12C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8C0u;
    // 0x12c8c4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE30u, 0x12C8C0u, 0x12C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8C8u;
label_12c8c8:
    // 0x12c8c8: 0xc04b680  jal         func_12DA00
    ctx->pc = 0x12C8C8u;
    SET_GPR_U32(ctx, 31, 0x12C8D0u);
    ctx->pc = 0x12DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DA00u, 0x12C8C8u, 0x12C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8D0u;
label_12c8d0:
    // 0x12c8d0: 0xc0485a4  jal         func_121690
    ctx->pc = 0x12C8D0u;
    SET_GPR_U32(ctx, 31, 0x12C8D8u);
    ctx->pc = 0x12C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8D0u;
    // 0x12c8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x12C8D0u, 0x12C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8D8u;
label_12c8d8:
    // 0x12c8d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x12c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12c8dc: 0xc040128  jal         func_1004A0
    ctx->pc = 0x12C8DCu;
    SET_GPR_U32(ctx, 31, 0x12C8E4u);
    ctx->pc = 0x12C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8DCu;
    // 0x12c8e0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x12C8DCu, 0x12C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8E4u;
label_12c8e4:
    // 0x12c8e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c8e8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x12c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12c8ec: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x12c8f0: 0xc040128  jal         func_1004A0
    ctx->pc = 0x12C8F0u;
    SET_GPR_U32(ctx, 31, 0x12C8F8u);
    ctx->pc = 0x12C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C8F0u;
    // 0x12c8f4: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x12C8F0u, 0x12C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C8F8u;
label_12c8f8:
    // 0x12c8f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c8fc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x12c900: 0x2484ec70  addiu       $a0, $a0, -0x1390
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962288));
    // 0x12c904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c90c: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x12c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    // 0x12c910: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c914: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x12c914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x12c918: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c91c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x12c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x12c920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12c928: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x12c92c: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x12c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x12c930: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c934: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x12c934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x12c938: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c93c: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x12C93Cu;
    SET_GPR_U32(ctx, 31, 0x12C944u);
    ctx->pc = 0x12C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C93Cu;
    // 0x12c940: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x12C93Cu, 0x12C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C944u;
label_12c944:
    // 0x12c944: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c948: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x12c948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x12c94c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c950: 0xaf828494  sw          $v0, -0x7B6C($gp)
    ctx->pc = 0x12c950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935700), GPR_U32(ctx, 2));
    // 0x12c954: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x12C954u;
    SET_GPR_U32(ctx, 31, 0x12C95Cu);
    ctx->pc = 0x12C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C954u;
    // 0x12c958: 0xa0400010  sb          $zero, 0x10($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x12C954u, 0x12C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C95Cu;
label_12c95c:
    // 0x12c95c: 0xc0485a4  jal         func_121690
    ctx->pc = 0x12C95Cu;
    SET_GPR_U32(ctx, 31, 0x12C964u);
    ctx->pc = 0x12C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C95Cu;
    // 0x12c960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x12C95Cu, 0x12C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C964u;
label_12c964:
    // 0x12c964: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c974: 0x3e00008  jr          $ra
    ctx->pc = 0x12C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C974u;
        // 0x12c978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C97Cu;
}
