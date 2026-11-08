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

// Function: FUN_00133fa0
// Address: 0x133fa0 - 0x13402c
void FUN_00133fa0_0x133fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133fa0_0x133fa0");
#endif

    switch (ctx->pc) {
        case 0x133fccu: goto label_133fcc;
        case 0x133fe4u: goto label_133fe4;
        case 0x133ffcu: goto label_133ffc;
        case 0x134014u: goto label_134014;
        default: break;
    }

    ctx->pc = 0x133fa0u;

    // 0x133fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133fa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133fac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133fb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fb4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x133FB4u;
    {
        const bool branch_taken_0x133fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FB4u;
        // 0x133fb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fb4) {
            ctx->pc = 0x134014u;
            goto label_134014;
        }
    }
    ctx->pc = 0x133FBCu;
    // 0x133fbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x133fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x133fc0: 0x24428de8  addiu       $v0, $v0, -0x7218
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938088));
    // 0x133fc4: 0xc04d0d8  jal         func_134360
    ctx->pc = 0x133FC4u;
    SET_GPR_U32(ctx, 31, 0x133FCCu);
    ctx->pc = 0x133FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FC4u;
    // 0x133fc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134360u, 0x133FC4u, 0x133FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FCCu;
label_133fcc:
    // 0x133fcc: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x133fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x133fd0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x133fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x133fd4: 0x24a55f10  addiu       $a1, $a1, 0x5F10
    ctx->pc = 0x133fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24336));
    // 0x133fd8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x133fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133fdc: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x133FDCu;
    SET_GPR_U32(ctx, 31, 0x133FE4u);
    ctx->pc = 0x133FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FDCu;
    // 0x133fe0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x133FDCu, 0x133FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FE4u;
label_133fe4:
    // 0x133fe4: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x133fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x133fe8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x133fec: 0x24a55f10  addiu       $a1, $a1, 0x5F10
    ctx->pc = 0x133fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24336));
    // 0x133ff0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x133ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133ff4: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x133FF4u;
    SET_GPR_U32(ctx, 31, 0x133FFCu);
    ctx->pc = 0x133FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FF4u;
    // 0x133ff8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x133FF4u, 0x133FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FFCu;
label_133ffc:
    // 0x133ffc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x134000: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x134000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x134004: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134004u;
    {
        const bool branch_taken_0x134004 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x134008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134004u;
        // 0x134008: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134004) {
            ctx->pc = 0x134018u;
            goto label_134018;
        }
    }
    ctx->pc = 0x13400Cu;
    // 0x13400c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13400Cu;
    SET_GPR_U32(ctx, 31, 0x134014u);
    ctx->pc = 0x134010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13400Cu;
    // 0x134010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13400Cu, 0x134014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134014u;
label_134014:
    // 0x134014: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x134014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134018:
    // 0x134018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13401c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13401cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134024: 0x3e00008  jr          $ra
    ctx->pc = 0x134024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134024u;
        // 0x134028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13402Cu;
}
