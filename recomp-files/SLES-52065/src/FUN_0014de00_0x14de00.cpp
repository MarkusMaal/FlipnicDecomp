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

// Function: FUN_0014de00
// Address: 0x14de00 - 0x14de68
void FUN_0014de00_0x14de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014de00_0x14de00");
#endif

    switch (ctx->pc) {
        case 0x14de24u: goto label_14de24;
        case 0x14de38u: goto label_14de38;
        case 0x14de50u: goto label_14de50;
        default: break;
    }

    ctx->pc = 0x14de00u;

    // 0x14de00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14de04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14de08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14de0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14de10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14de10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de14: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14DE14u;
    {
        const bool branch_taken_0x14de14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE14u;
        // 0x14de18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de14) {
            ctx->pc = 0x14DE50u;
            goto label_14de50;
        }
    }
    ctx->pc = 0x14DE1Cu;
    // 0x14de1c: 0xc053a04  jal         func_14E810
    ctx->pc = 0x14DE1Cu;
    SET_GPR_U32(ctx, 31, 0x14DE24u);
    ctx->pc = 0x14E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E810u, 0x14DE1Cu, 0x14DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE24u;
label_14de24:
    // 0x14de24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14de28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DE28u;
    {
        const bool branch_taken_0x14de28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE28u;
        // 0x14de2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de28) {
            ctx->pc = 0x14DE3Cu;
            goto label_14de3c;
        }
    }
    ctx->pc = 0x14DE30u;
    // 0x14de30: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14DE30u;
    SET_GPR_U32(ctx, 31, 0x14DE38u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14DE30u, 0x14DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE38u;
label_14de38:
    // 0x14de38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x14de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_14de3c:
    // 0x14de3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14de3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14de40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DE40u;
    {
        const bool branch_taken_0x14de40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE40u;
        // 0x14de44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de40) {
            ctx->pc = 0x14DE54u;
            goto label_14de54;
        }
    }
    ctx->pc = 0x14DE48u;
    // 0x14de48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14DE48u;
    SET_GPR_U32(ctx, 31, 0x14DE50u);
    ctx->pc = 0x14DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE48u;
    // 0x14de4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14DE48u, 0x14DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE50u;
label_14de50:
    // 0x14de50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14de50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14de54:
    // 0x14de54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14de58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14de58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14de5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14de5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de60: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE60u;
        // 0x14de64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE68u;
}
