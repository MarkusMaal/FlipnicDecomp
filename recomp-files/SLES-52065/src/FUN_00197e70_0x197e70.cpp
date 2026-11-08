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

// Function: FUN_00197e70
// Address: 0x197e70 - 0x197ed0
void FUN_00197e70_0x197e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00197e70_0x197e70");
#endif

    switch (ctx->pc) {
        case 0x197ea0u: goto label_197ea0;
        case 0x197eb8u: goto label_197eb8;
        default: break;
    }

    ctx->pc = 0x197e70u;

    // 0x197e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e84: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x197E84u;
    {
        const bool branch_taken_0x197e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E84u;
        // 0x197e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e84) {
            ctx->pc = 0x197EB8u;
            goto label_197eb8;
        }
    }
    ctx->pc = 0x197E8Cu;
    // 0x197e8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x197e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e94: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x197e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x197e98: 0xc064324  jal         func_190C90
    ctx->pc = 0x197E98u;
    SET_GPR_U32(ctx, 31, 0x197EA0u);
    ctx->pc = 0x197E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E98u;
    // 0x197e9c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x197E98u, 0x197EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EA0u;
label_197ea0:
    // 0x197ea0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x197ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x197ea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197ea8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197EA8u;
    {
        const bool branch_taken_0x197ea8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x197EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EA8u;
        // 0x197eac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ea8) {
            ctx->pc = 0x197EBCu;
            goto label_197ebc;
        }
    }
    ctx->pc = 0x197EB0u;
    // 0x197eb0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x197EB0u;
    SET_GPR_U32(ctx, 31, 0x197EB8u);
    ctx->pc = 0x197EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EB0u;
    // 0x197eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x197EB0u, 0x197EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EB8u;
label_197eb8:
    // 0x197eb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x197eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197ebc:
    // 0x197ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x197EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EC8u;
        // 0x197ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197ED0u;
}
