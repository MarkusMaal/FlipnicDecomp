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

// Function: FUN_0016d8f0
// Address: 0x16d8f0 - 0x16d960
void FUN_0016d8f0_0x16d8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d8f0_0x16d8f0");
#endif

    switch (ctx->pc) {
        case 0x16d930u: goto label_16d930;
        case 0x16d948u: goto label_16d948;
        default: break;
    }

    ctx->pc = 0x16d8f0u;

    // 0x16d8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d8f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d904: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D904u;
    {
        const bool branch_taken_0x16d904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D904u;
        // 0x16d908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d904) {
            ctx->pc = 0x16D948u;
            goto label_16d948;
        }
    }
    ctx->pc = 0x16D90Cu;
    // 0x16d90c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16d910: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x16d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
    // 0x16d914: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D914u;
    {
        const bool branch_taken_0x16d914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D914u;
        // 0x16d918: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d914) {
            ctx->pc = 0x16D930u;
            goto label_16d930;
        }
    }
    ctx->pc = 0x16D91Cu;
    // 0x16d91c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16d920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d924: 0x2442a910  addiu       $v0, $v0, -0x56F0
    ctx->pc = 0x16d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945040));
    // 0x16d928: 0xc041750  jal         func_105D40
    ctx->pc = 0x16D928u;
    SET_GPR_U32(ctx, 31, 0x16D930u);
    ctx->pc = 0x16D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D928u;
    // 0x16d92c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x16D928u, 0x16D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D930u;
label_16d930:
    // 0x16d930: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16d934: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16d934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16d938: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D938u;
    {
        const bool branch_taken_0x16d938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D938u;
        // 0x16d93c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d938) {
            ctx->pc = 0x16D94Cu;
            goto label_16d94c;
        }
    }
    ctx->pc = 0x16D940u;
    // 0x16d940: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16D940u;
    SET_GPR_U32(ctx, 31, 0x16D948u);
    ctx->pc = 0x16D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D940u;
    // 0x16d944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16D940u, 0x16D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D948u;
label_16d948:
    // 0x16d948: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16d948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d94c:
    // 0x16d94c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d958: 0x3e00008  jr          $ra
    ctx->pc = 0x16D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D958u;
        // 0x16d95c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D960u;
}
