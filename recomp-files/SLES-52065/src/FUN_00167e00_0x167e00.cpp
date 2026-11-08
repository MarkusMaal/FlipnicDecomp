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

// Function: FUN_00167e00
// Address: 0x167e00 - 0x167e70
void FUN_00167e00_0x167e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167e00_0x167e00");
#endif

    switch (ctx->pc) {
        case 0x167e5cu: goto label_167e5c;
        default: break;
    }

    ctx->pc = 0x167e00u;

    // 0x167e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e10: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x167E10u;
    {
        const bool branch_taken_0x167e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E10u;
        // 0x167e14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e10) {
            ctx->pc = 0x167E60u;
            goto label_167e60;
        }
    }
    ctx->pc = 0x167E18u;
    // 0x167e18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167e1c: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x167e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
    // 0x167e20: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167E20u;
    {
        const bool branch_taken_0x167e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e20) {
            ctx->pc = 0x167E44u;
            goto label_167e44;
        }
    }
    ctx->pc = 0x167E28u;
    // 0x167e28: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167e2c: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x167e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x167e30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167E30u;
    {
        const bool branch_taken_0x167e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E30u;
        // 0x167e34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e30) {
            ctx->pc = 0x167E44u;
            goto label_167e44;
        }
    }
    ctx->pc = 0x167E38u;
    // 0x167e38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167e3c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x167e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x167e40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x167e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_167e44:
    // 0x167e44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x167e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x167e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167e4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167E4Cu;
    {
        const bool branch_taken_0x167e4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E4Cu;
        // 0x167e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e4c) {
            ctx->pc = 0x167E5Cu;
            goto label_167e5c;
        }
    }
    ctx->pc = 0x167E54u;
    // 0x167e54: 0xc0401a4  jal         func_100690
    ctx->pc = 0x167E54u;
    SET_GPR_U32(ctx, 31, 0x167E5Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x167E54u, 0x167E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E5Cu;
label_167e5c:
    // 0x167e5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e60:
    // 0x167e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167e68: 0x3e00008  jr          $ra
    ctx->pc = 0x167E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E68u;
        // 0x167e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E70u;
}
