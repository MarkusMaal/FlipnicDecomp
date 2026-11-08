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

// Function: FUN_0014f0e0
// Address: 0x14f0e0 - 0x14f144
void FUN_0014f0e0_0x14f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f0e0_0x14f0e0");
#endif

    switch (ctx->pc) {
        case 0x14f110u: goto label_14f110;
        case 0x14f11cu: goto label_14f11c;
        default: break;
    }

    ctx->pc = 0x14f0e0u;

    // 0x14f0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f0e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14f0e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14f0ec: 0x24427220  addiu       $v0, $v0, 0x7220
    ctx->pc = 0x14f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29216));
    // 0x14f0f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f0f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f0f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14f0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f100: 0x48980  sll         $s1, $a0, 6
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14f104: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x14f104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14f108: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14F108u;
    SET_GPR_U32(ctx, 31, 0x14F110u);
    ctx->pc = 0x14F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F108u;
    // 0x14f10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14F108u, 0x14F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F110u;
label_14f110:
    // 0x14f110: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14f114: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14F114u;
    SET_GPR_U32(ctx, 31, 0x14F11Cu);
    ctx->pc = 0x14F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F114u;
    // 0x14f118: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14F114u, 0x14F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F11Cu;
label_14f11c:
    // 0x14f11c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14f120: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x14f124: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14f128: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14f128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14f12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14f12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f13c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F13Cu;
        // 0x14f140: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F144u;
}
