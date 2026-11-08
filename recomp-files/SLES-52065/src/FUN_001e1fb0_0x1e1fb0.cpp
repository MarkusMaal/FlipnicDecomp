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

// Function: FUN_001e1fb0
// Address: 0x1e1fb0 - 0x1e2028
void FUN_001e1fb0_0x1e1fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1fb0_0x1e1fb0");
#endif

    switch (ctx->pc) {
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e2010u: goto label_1e2010;
        default: break;
    }

    ctx->pc = 0x1e1fb0u;

    // 0x1e1fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fc4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E1FC4u;
    {
        const bool branch_taken_0x1e1fc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FC4u;
        // 0x1e1fc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fc4) {
            ctx->pc = 0x1E2010u;
            goto label_1e2010;
        }
    }
    ctx->pc = 0x1E1FCCu;
    // 0x1e1fcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1fd0: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x1e1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x1e1fd4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1FD4u;
    {
        const bool branch_taken_0x1e1fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD4u;
        // 0x1e1fd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fd4) {
            ctx->pc = 0x1E1FF8u;
            goto label_1e1ff8;
        }
    }
    ctx->pc = 0x1E1FDCu;
    // 0x1e1fdc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1fe0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1e1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1e1fe4: 0x2442c120  addiu       $v0, $v0, -0x3EE0
    ctx->pc = 0x1e1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951200));
    // 0x1e1fe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1FE8u;
    {
        const bool branch_taken_0x1e1fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FE8u;
        // 0x1e1fec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fe8) {
            ctx->pc = 0x1E1FF8u;
            goto label_1e1ff8;
        }
    }
    ctx->pc = 0x1E1FF0u;
    // 0x1e1ff0: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E1FF0u;
    SET_GPR_U32(ctx, 31, 0x1E1FF8u);
    ctx->pc = 0x1E1FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1FF0u;
    // 0x1e1ff4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E1FF0u, 0x1E1FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1FF8u;
label_1e1ff8:
    // 0x1e1ff8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e1ffc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1ffcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2000: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2000u;
    {
        const bool branch_taken_0x1e2000 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2000u;
        // 0x1e2004: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2000) {
            ctx->pc = 0x1E2014u;
            goto label_1e2014;
        }
    }
    ctx->pc = 0x1E2008u;
    // 0x1e2008: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E2008u;
    SET_GPR_U32(ctx, 31, 0x1E2010u);
    ctx->pc = 0x1E200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2008u;
    // 0x1e200c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2008u, 0x1E2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2010u;
label_1e2010:
    // 0x1e2010: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2014:
    // 0x1e2014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e201c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e201cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2020: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2020u;
        // 0x1e2024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2028u;
}
