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

// Function: FUN_001e6ef0
// Address: 0x1e6ef0 - 0x1e6fc4
void FUN_001e6ef0_0x1e6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6ef0_0x1e6ef0");
#endif

    switch (ctx->pc) {
        case 0x1e6f38u: goto label_1e6f38;
        case 0x1e6f5cu: goto label_1e6f5c;
        case 0x1e6f80u: goto label_1e6f80;
        case 0x1e6facu: goto label_1e6fac;
        default: break;
    }

    ctx->pc = 0x1e6ef0u;

    // 0x1e6ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f04: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E6F04u;
    {
        const bool branch_taken_0x1e6f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F04u;
        // 0x1e6f08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f04) {
            ctx->pc = 0x1E6FACu;
            goto label_1e6fac;
        }
    }
    ctx->pc = 0x1E6F0Cu;
    // 0x1e6f0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6f10: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e6f14: 0x2442c2d0  addiu       $v0, $v0, -0x3D30
    ctx->pc = 0x1e6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951632));
    // 0x1e6f18: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F18u;
    {
        const bool branch_taken_0x1e6f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F18u;
        // 0x1e6f1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f18) {
            ctx->pc = 0x1E6F38u;
            goto label_1e6f38;
        }
    }
    ctx->pc = 0x1E6F20u;
    // 0x1e6f20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F20u;
    {
        const bool branch_taken_0x1e6f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f20) {
            ctx->pc = 0x1E6F38u;
            goto label_1e6f38;
        }
    }
    ctx->pc = 0x1E6F28u;
    // 0x1e6f28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F28u;
    {
        const bool branch_taken_0x1e6f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F28u;
        // 0x1e6f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f28) {
            ctx->pc = 0x1E6F38u;
            goto label_1e6f38;
        }
    }
    ctx->pc = 0x1E6F30u;
    // 0x1e6f30: 0xc079d0c  jal         func_1E7430
    ctx->pc = 0x1E6F30u;
    SET_GPR_U32(ctx, 31, 0x1E6F38u);
    ctx->pc = 0x1E7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7430u, 0x1E6F30u, 0x1E6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F38u;
label_1e6f38:
    // 0x1e6f38: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1e6f3c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F3Cu;
    {
        const bool branch_taken_0x1e6f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f3c) {
            ctx->pc = 0x1E6F5Cu;
            goto label_1e6f5c;
        }
    }
    ctx->pc = 0x1E6F44u;
    // 0x1e6f44: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F44u;
    {
        const bool branch_taken_0x1e6f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f44) {
            ctx->pc = 0x1E6F5Cu;
            goto label_1e6f5c;
        }
    }
    ctx->pc = 0x1E6F4Cu;
    // 0x1e6f4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F4Cu;
    {
        const bool branch_taken_0x1e6f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F4Cu;
        // 0x1e6f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f4c) {
            ctx->pc = 0x1E6F5Cu;
            goto label_1e6f5c;
        }
    }
    ctx->pc = 0x1E6F54u;
    // 0x1e6f54: 0xc079d0c  jal         func_1E7430
    ctx->pc = 0x1E6F54u;
    SET_GPR_U32(ctx, 31, 0x1E6F5Cu);
    ctx->pc = 0x1E7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7430u, 0x1E6F54u, 0x1E6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F5Cu;
label_1e6f5c:
    // 0x1e6f5c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1e6f60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6F60u;
    {
        const bool branch_taken_0x1e6f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f60) {
            ctx->pc = 0x1E6F80u;
            goto label_1e6f80;
        }
    }
    ctx->pc = 0x1E6F68u;
    // 0x1e6f68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F68u;
    {
        const bool branch_taken_0x1e6f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f68) {
            ctx->pc = 0x1E6F80u;
            goto label_1e6f80;
        }
    }
    ctx->pc = 0x1E6F70u;
    // 0x1e6f70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6F70u;
    {
        const bool branch_taken_0x1e6f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F70u;
        // 0x1e6f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f70) {
            ctx->pc = 0x1E6F80u;
            goto label_1e6f80;
        }
    }
    ctx->pc = 0x1E6F78u;
    // 0x1e6f78: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E6F78u;
    SET_GPR_U32(ctx, 31, 0x1E6F80u);
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E6F78u, 0x1E6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F80u;
label_1e6f80:
    // 0x1e6f80: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6F80u;
    {
        const bool branch_taken_0x1e6f80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F80u;
        // 0x1e6f84: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f80) {
            ctx->pc = 0x1E6F98u;
            goto label_1e6f98;
        }
    }
    ctx->pc = 0x1E6F88u;
    // 0x1e6f88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e6f8c: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e6f90: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e6f94: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e6f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e6f98:
    // 0x1e6f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e6f9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6F9Cu;
    {
        const bool branch_taken_0x1e6f9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F9Cu;
        // 0x1e6fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f9c) {
            ctx->pc = 0x1E6FB0u;
            goto label_1e6fb0;
        }
    }
    ctx->pc = 0x1E6FA4u;
    // 0x1e6fa4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E6FA4u;
    SET_GPR_U32(ctx, 31, 0x1E6FACu);
    ctx->pc = 0x1E6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FA4u;
    // 0x1e6fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E6FA4u, 0x1E6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FACu;
label_1e6fac:
    // 0x1e6fac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e6facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fb0:
    // 0x1e6fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FBCu;
        // 0x1e6fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6FC4u;
}
