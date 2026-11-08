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

// Function: FUN_00105ce0
// Address: 0x105ce0 - 0x105d40
void FUN_00105ce0_0x105ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105ce0_0x105ce0");
#endif

    switch (ctx->pc) {
        case 0x105d2cu: goto label_105d2c;
        default: break;
    }

    ctx->pc = 0x105ce0u;

    // 0x105ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cf0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x105CF0u;
    {
        const bool branch_taken_0x105cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CF0u;
        // 0x105cf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cf0) {
            ctx->pc = 0x105D30u;
            goto label_105d30;
        }
    }
    ctx->pc = 0x105CF8u;
    // 0x105cf8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105cfc: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x105cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x105d00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D00u;
    {
        const bool branch_taken_0x105d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D00u;
        // 0x105d04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d00) {
            ctx->pc = 0x105D14u;
            goto label_105d14;
        }
    }
    ctx->pc = 0x105D08u;
    // 0x105d08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105d0c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105d10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105d14:
    // 0x105d14: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105d18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105d18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105d1c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105D1Cu;
    {
        const bool branch_taken_0x105d1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D1Cu;
        // 0x105d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d1c) {
            ctx->pc = 0x105D2Cu;
            goto label_105d2c;
        }
    }
    ctx->pc = 0x105D24u;
    // 0x105d24: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105D24u;
    SET_GPR_U32(ctx, 31, 0x105D2Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105D24u, 0x105D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D2Cu;
label_105d2c:
    // 0x105d2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105d30:
    // 0x105d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d38: 0x3e00008  jr          $ra
    ctx->pc = 0x105D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D38u;
        // 0x105d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D40u;
}
