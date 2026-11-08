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

// Function: FUN_001c6740
// Address: 0x1c6740 - 0x1c67a0
void FUN_001c6740_0x1c6740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6740_0x1c6740");
#endif

    switch (ctx->pc) {
        case 0x1c6770u: goto label_1c6770;
        case 0x1c6788u: goto label_1c6788;
        default: break;
    }

    ctx->pc = 0x1c6740u;

    // 0x1c6740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c674c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6754: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6754u;
    {
        const bool branch_taken_0x1c6754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6754u;
        // 0x1c6758: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6754) {
            ctx->pc = 0x1C6788u;
            goto label_1c6788;
        }
    }
    ctx->pc = 0x1C675Cu;
    // 0x1c675c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c6760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6764: 0x2442bc20  addiu       $v0, $v0, -0x43E0
    ctx->pc = 0x1c6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x1c6768: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C6768u;
    SET_GPR_U32(ctx, 31, 0x1C6770u);
    ctx->pc = 0x1C676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6768u;
    // 0x1c676c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C6768u, 0x1C6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6770u;
label_1c6770:
    // 0x1c6770: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c6770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c6774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c6774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c6778: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6778u;
    {
        const bool branch_taken_0x1c6778 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6778u;
        // 0x1c677c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6778) {
            ctx->pc = 0x1C678Cu;
            goto label_1c678c;
        }
    }
    ctx->pc = 0x1C6780u;
    // 0x1c6780: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C6780u;
    SET_GPR_U32(ctx, 31, 0x1C6788u);
    ctx->pc = 0x1C6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6780u;
    // 0x1c6784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C6780u, 0x1C6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6788u;
label_1c6788:
    // 0x1c6788: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c6788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c678c:
    // 0x1c678c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6798: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6798u;
        // 0x1c679c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C67A0u;
}
