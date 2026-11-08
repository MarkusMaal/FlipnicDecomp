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

// Function: FUN_0018a890
// Address: 0x18a890 - 0x18a910
void FUN_0018a890_0x18a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a890_0x18a890");
#endif

    switch (ctx->pc) {
        case 0x18a8b8u: goto label_18a8b8;
        case 0x18a8c0u: goto label_18a8c0;
        case 0x18a8ccu: goto label_18a8cc;
        case 0x18a8f4u: goto label_18a8f4;
        default: break;
    }

    ctx->pc = 0x18a890u;

    // 0x18a890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18a898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a89c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a8a8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x18A8A8u;
    {
        const bool branch_taken_0x18a8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8A8u;
        // 0x18a8ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8a8) {
            ctx->pc = 0x18A8F4u;
            goto label_18a8f4;
        }
    }
    ctx->pc = 0x18A8B0u;
    // 0x18a8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18a8b8:
    // 0x18a8b8: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18A8B8u;
    SET_GPR_U32(ctx, 31, 0x18A8C0u);
    ctx->pc = 0x18A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8B8u;
    // 0x18a8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B3C0u, 0x18A8B8u, 0x18A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8C0u;
label_18a8c0:
    // 0x18a8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8c4: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x18A8C4u;
    SET_GPR_U32(ctx, 31, 0x18A8CCu);
    ctx->pc = 0x18A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8C4u;
    // 0x18a8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x18A8C4u, 0x18A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8CCu;
label_18a8cc:
    // 0x18a8cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a8d0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x18a8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a8d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A8D4u;
    {
        const bool branch_taken_0x18a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8D4u;
        // 0x18a8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8d4) {
            ctx->pc = 0x18A8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a8b8;
        }
    }
    ctx->pc = 0x18A8DCu;
    // 0x18a8dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x18a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x18a8e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18a8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18a8e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A8E4u;
    {
        const bool branch_taken_0x18a8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8E4u;
        // 0x18a8e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8e4) {
            ctx->pc = 0x18A8F8u;
            goto label_18a8f8;
        }
    }
    ctx->pc = 0x18A8ECu;
    // 0x18a8ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18A8ECu;
    SET_GPR_U32(ctx, 31, 0x18A8F4u);
    ctx->pc = 0x18A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8ECu;
    // 0x18a8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18A8ECu, 0x18A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8F4u;
label_18a8f4:
    // 0x18a8f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18a8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18a8f8:
    // 0x18a8f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a8fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a908: 0x3e00008  jr          $ra
    ctx->pc = 0x18A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A908u;
        // 0x18a90c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A910u;
}
