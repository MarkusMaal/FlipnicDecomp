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

// Function: FUN_00105930
// Address: 0x105930 - 0x1059b0
void FUN_00105930_0x105930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105930_0x105930");
#endif

    switch (ctx->pc) {
        case 0x10599cu: goto label_10599c;
        default: break;
    }

    ctx->pc = 0x105930u;

    // 0x105930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10593c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10593cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105940: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105940u;
    {
        const bool branch_taken_0x105940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105940u;
        // 0x105944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105940) {
            ctx->pc = 0x1059A0u;
            goto label_1059a0;
        }
    }
    ctx->pc = 0x105948u;
    // 0x105948: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10594c: 0x2442a910  addiu       $v0, $v0, -0x56F0
    ctx->pc = 0x10594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945040));
    // 0x105950: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105950u;
    {
        const bool branch_taken_0x105950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105950u;
        // 0x105954: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105950) {
            ctx->pc = 0x105984u;
            goto label_105984;
        }
    }
    ctx->pc = 0x105958u;
    // 0x105958: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10595c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105960: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105960u;
    {
        const bool branch_taken_0x105960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105960u;
        // 0x105964: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105960) {
            ctx->pc = 0x105984u;
            goto label_105984;
        }
    }
    ctx->pc = 0x105968u;
    // 0x105968: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10596c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105970: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105970u;
        // 0x105974: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105970) {
            ctx->pc = 0x105984u;
            goto label_105984;
        }
    }
    ctx->pc = 0x105978u;
    // 0x105978: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10597c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105980: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105984:
    // 0x105984: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10598c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10598Cu;
    {
        const bool branch_taken_0x10598c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10598Cu;
        // 0x105990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10598c) {
            ctx->pc = 0x10599Cu;
            goto label_10599c;
        }
    }
    ctx->pc = 0x105994u;
    // 0x105994: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105994u;
    SET_GPR_U32(ctx, 31, 0x10599Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105994u, 0x10599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10599Cu;
label_10599c:
    // 0x10599c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10599cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1059a0:
    // 0x1059a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1059a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1059a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1059a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1059A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1059ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1059A8u;
        // 0x1059ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1059A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1059B0u;
}
