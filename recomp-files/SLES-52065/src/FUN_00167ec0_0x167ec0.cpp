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

// Function: FUN_00167ec0
// Address: 0x167ec0 - 0x167f40
void FUN_00167ec0_0x167ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167ec0_0x167ec0");
#endif

    switch (ctx->pc) {
        case 0x167f2cu: goto label_167f2c;
        default: break;
    }

    ctx->pc = 0x167ec0u;

    // 0x167ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ed0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x167ED0u;
    {
        const bool branch_taken_0x167ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167ED0u;
        // 0x167ed4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ed0) {
            ctx->pc = 0x167F30u;
            goto label_167f30;
        }
    }
    ctx->pc = 0x167ED8u;
    // 0x167ed8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167edc: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x167edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x167ee0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x167EE0u;
    {
        const bool branch_taken_0x167ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EE0u;
        // 0x167ee4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ee0) {
            ctx->pc = 0x167F14u;
            goto label_167f14;
        }
    }
    ctx->pc = 0x167EE8u;
    // 0x167ee8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167eec: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x167eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x167ef0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167EF0u;
    {
        const bool branch_taken_0x167ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EF0u;
        // 0x167ef4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ef0) {
            ctx->pc = 0x167F14u;
            goto label_167f14;
        }
    }
    ctx->pc = 0x167EF8u;
    // 0x167ef8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167efc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x167efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x167f00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167F00u;
    {
        const bool branch_taken_0x167f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F00u;
        // 0x167f04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f00) {
            ctx->pc = 0x167F14u;
            goto label_167f14;
        }
    }
    ctx->pc = 0x167F08u;
    // 0x167f08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x167f0c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x167f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x167f10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x167f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_167f14:
    // 0x167f14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x167f18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x167f1c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167F1Cu;
    {
        const bool branch_taken_0x167f1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F1Cu;
        // 0x167f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f1c) {
            ctx->pc = 0x167F2Cu;
            goto label_167f2c;
        }
    }
    ctx->pc = 0x167F24u;
    // 0x167f24: 0xc0401a4  jal         func_100690
    ctx->pc = 0x167F24u;
    SET_GPR_U32(ctx, 31, 0x167F2Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x167F24u, 0x167F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F2Cu;
label_167f2c:
    // 0x167f2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167f30:
    // 0x167f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167f38: 0x3e00008  jr          $ra
    ctx->pc = 0x167F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F38u;
        // 0x167f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167F40u;
}
