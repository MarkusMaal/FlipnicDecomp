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

// Function: FUN_00118a00
// Address: 0x118a00 - 0x118a88
void FUN_00118a00_0x118a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118a00_0x118a00");
#endif

    switch (ctx->pc) {
        case 0x118a20u: goto label_118a20;
        case 0x118a4cu: goto label_118a4c;
        case 0x118a70u: goto label_118a70;
        default: break;
    }

    ctx->pc = 0x118a00u;

    // 0x118a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118a10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a18: 0xc045c98  jal         func_117260
    ctx->pc = 0x118A18u;
    SET_GPR_U32(ctx, 31, 0x118A20u);
    ctx->pc = 0x118A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A18u;
    // 0x118a1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x118A18u, 0x118A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A20u;
label_118a20:
    // 0x118a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a24: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118a28: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118a2c: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x118a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x118a30: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x118a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x118a34: 0x244286b0  addiu       $v0, $v0, -0x7950
    ctx->pc = 0x118a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936240));
    // 0x118a38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118a3c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118a40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118a44: 0xc0546a0  jal         func_151A80
    ctx->pc = 0x118A44u;
    SET_GPR_U32(ctx, 31, 0x118A4Cu);
    ctx->pc = 0x118A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A44u;
    // 0x118a48: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A80u, 0x118A44u, 0x118A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A4Cu;
label_118a4c:
    // 0x118a4c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118a50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118a54: 0x246386b0  addiu       $v1, $v1, -0x7950
    ctx->pc = 0x118a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936240));
    // 0x118a58: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118a5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118a60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x118a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118a64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118a68: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118A68u;
    SET_GPR_U32(ctx, 31, 0x118A70u);
    ctx->pc = 0x118A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A68u;
    // 0x118a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118A68u, 0x118A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A70u;
label_118a70:
    // 0x118a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118a80: 0x3e00008  jr          $ra
    ctx->pc = 0x118A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A80u;
        // 0x118a84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A88u;
}
