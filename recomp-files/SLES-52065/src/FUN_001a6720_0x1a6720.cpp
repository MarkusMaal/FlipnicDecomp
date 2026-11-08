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

// Function: FUN_001a6720
// Address: 0x1a6720 - 0x1a677c
void FUN_001a6720_0x1a6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6720_0x1a6720");
#endif

    switch (ctx->pc) {
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6764u: goto label_1a6764;
        default: break;
    }

    ctx->pc = 0x1a6720u;

    // 0x1a6720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a672c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6734: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6734u;
    {
        const bool branch_taken_0x1a6734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6734u;
        // 0x1a6738: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6734) {
            ctx->pc = 0x1A6764u;
            goto label_1a6764;
        }
    }
    ctx->pc = 0x1A673Cu;
    // 0x1a673c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a6740: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x1a6740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
    // 0x1a6744: 0xc069a10  jal         func_1A6840
    ctx->pc = 0x1A6744u;
    SET_GPR_U32(ctx, 31, 0x1A674Cu);
    ctx->pc = 0x1A6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6744u;
    // 0x1a6748: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6840u, 0x1A6744u, 0x1A674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A674Cu;
label_1a674c:
    // 0x1a674c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a674cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a6750: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a6750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a6754: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6754u;
    {
        const bool branch_taken_0x1a6754 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6754u;
        // 0x1a6758: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6754) {
            ctx->pc = 0x1A6768u;
            goto label_1a6768;
        }
    }
    ctx->pc = 0x1A675Cu;
    // 0x1a675c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A675Cu;
    SET_GPR_U32(ctx, 31, 0x1A6764u);
    ctx->pc = 0x1A6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A675Cu;
    // 0x1a6760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A675Cu, 0x1A6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6764u;
label_1a6764:
    // 0x1a6764: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a6764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6768:
    // 0x1a6768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a676c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a676cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6774: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6774u;
        // 0x1a6778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A677Cu;
}
