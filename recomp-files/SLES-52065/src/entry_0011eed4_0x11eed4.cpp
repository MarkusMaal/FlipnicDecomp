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

// Function: entry_0011eed4
// Address: 0x11eed4 - 0x11ef44
void entry_0011eed4_0x11eed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eed4_0x11eed4");
#endif

    switch (ctx->pc) {
        case 0x11ef30u: goto label_11ef30;
        default: break;
    }

    ctx->pc = 0x11eed4u;

label_11eed4:
    // 0x11eed4: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x11eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11eed8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x11eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x11eedc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x11eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x11eee0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x11eee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11eee4: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x11eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x11eee8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x11eeec: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x11eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x11eef0: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x11eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x11eef4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x11eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x11eef8: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x11eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x11eefc: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x11eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x11ef00: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x11ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x11ef04: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x11ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x11ef08: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x11ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x11ef0c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x11ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x11ef10: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x11ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x11ef14: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x11ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x11ef18: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x11ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x11ef1c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x11ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x11ef20: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11EF20u;
    {
        const bool branch_taken_0x11ef20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF20u;
        // 0x11ef24: 0xaca00060  sw          $zero, 0x60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef20) {
            ctx->pc = 0x11EED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eed4;
        }
    }
    ctx->pc = 0x11EF28u;
    // 0x11ef28: 0xc047be8  jal         func_11EFA0
    ctx->pc = 0x11EF28u;
    SET_GPR_U32(ctx, 31, 0x11EF30u);
    ctx->pc = 0x11EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF28u;
    // 0x11ef2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFA0u, 0x11EF28u, 0x11EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF30u;
label_11ef30:
    // 0x11ef30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ef38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF3Cu;
        // 0x11ef40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EF44u;
}
