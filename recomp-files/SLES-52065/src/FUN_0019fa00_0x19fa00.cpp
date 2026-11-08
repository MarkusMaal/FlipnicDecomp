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

// Function: FUN_0019fa00
// Address: 0x19fa00 - 0x19fa60
void FUN_0019fa00_0x19fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fa00_0x19fa00");
#endif

    switch (ctx->pc) {
        case 0x19fa30u: goto label_19fa30;
        case 0x19fa48u: goto label_19fa48;
        default: break;
    }

    ctx->pc = 0x19fa00u;

    // 0x19fa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fa0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fa10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19fa10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa14: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x19FA14u;
    {
        const bool branch_taken_0x19fa14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA14u;
        // 0x19fa18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa14) {
            ctx->pc = 0x19FA48u;
            goto label_19fa48;
        }
    }
    ctx->pc = 0x19FA1Cu;
    // 0x19fa1c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19fa20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19fa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa24: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x19fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
    // 0x19fa28: 0xc064324  jal         func_190C90
    ctx->pc = 0x19FA28u;
    SET_GPR_U32(ctx, 31, 0x19FA30u);
    ctx->pc = 0x19FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA28u;
    // 0x19fa2c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19FA28u, 0x19FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA30u;
label_19fa30:
    // 0x19fa30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19fa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19fa34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fa34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fa38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FA38u;
    {
        const bool branch_taken_0x19fa38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA38u;
        // 0x19fa3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa38) {
            ctx->pc = 0x19FA4Cu;
            goto label_19fa4c;
        }
    }
    ctx->pc = 0x19FA40u;
    // 0x19fa40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19FA40u;
    SET_GPR_U32(ctx, 31, 0x19FA48u);
    ctx->pc = 0x19FA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA40u;
    // 0x19fa44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19FA40u, 0x19FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA48u;
label_19fa48:
    // 0x19fa48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19fa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19fa4c:
    // 0x19fa4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fa50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa58: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA58u;
        // 0x19fa5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FA60u;
}
