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

// Function: FUN_001ceb60
// Address: 0x1ceb60 - 0x1cebc0
void FUN_001ceb60_0x1ceb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ceb60_0x1ceb60");
#endif

    switch (ctx->pc) {
        case 0x1ceb90u: goto label_1ceb90;
        case 0x1ceba8u: goto label_1ceba8;
        default: break;
    }

    ctx->pc = 0x1ceb60u;

    // 0x1ceb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ceb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ceb64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ceb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ceb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ceb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ceb6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ceb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ceb70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ceb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEB74u;
    {
        const bool branch_taken_0x1ceb74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB74u;
        // 0x1ceb78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb74) {
            ctx->pc = 0x1CEBA8u;
            goto label_1ceba8;
        }
    }
    ctx->pc = 0x1CEB7Cu;
    // 0x1ceb7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ceb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ceb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ceb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb84: 0x2442be90  addiu       $v0, $v0, -0x4170
    ctx->pc = 0x1ceb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x1ceb88: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CEB88u;
    SET_GPR_U32(ctx, 31, 0x1CEB90u);
    ctx->pc = 0x1CEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB88u;
    // 0x1ceb8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CEB88u, 0x1CEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB90u;
label_1ceb90:
    // 0x1ceb90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ceb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ceb94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ceb94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ceb98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEB98u;
    {
        const bool branch_taken_0x1ceb98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB98u;
        // 0x1ceb9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb98) {
            ctx->pc = 0x1CEBACu;
            goto label_1cebac;
        }
    }
    ctx->pc = 0x1CEBA0u;
    // 0x1ceba0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CEBA0u;
    SET_GPR_U32(ctx, 31, 0x1CEBA8u);
    ctx->pc = 0x1CEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBA0u;
    // 0x1ceba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CEBA0u, 0x1CEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBA8u;
label_1ceba8:
    // 0x1ceba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ceba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cebac:
    // 0x1cebac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cebb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cebb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cebb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBB8u;
        // 0x1cebbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEBC0u;
}
