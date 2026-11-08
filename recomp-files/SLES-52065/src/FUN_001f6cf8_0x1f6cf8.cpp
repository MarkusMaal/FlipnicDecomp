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

// Function: FUN_001f6cf8
// Address: 0x1f6cf8 - 0x1f6d54
void FUN_001f6cf8_0x1f6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6cf8_0x1f6cf8");
#endif

    switch (ctx->pc) {
        case 0x1f6d14u: goto label_1f6d14;
        case 0x1f6d24u: goto label_1f6d24;
        case 0x1f6d3cu: goto label_1f6d3c;
        default: break;
    }

    ctx->pc = 0x1f6cf8u;

    // 0x1f6cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f6cfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f6d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6d08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6d0c: 0xc07de04  jal         func_1F7810
    ctx->pc = 0x1F6D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D14u);
    ctx->pc = 0x1F6D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D0Cu;
    // 0x1f6d10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7810u, 0x1F6D0Cu, 0x1F6D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D14u;
label_1f6d14:
    // 0x1f6d14: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6D14u;
    {
        const bool branch_taken_0x1f6d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D14u;
        // 0x1f6d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d14) {
            ctx->pc = 0x1F6D40u;
            goto label_1f6d40;
        }
    }
    ctx->pc = 0x1F6D1Cu;
    // 0x1f6d1c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1F6D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D24u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1F6D1Cu, 0x1F6D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D24u;
label_1f6d24:
    // 0x1f6d24: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f6d28: 0x8c701340  lw          $s0, 0x1340($v1)
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x391340u));
    // 0x1f6d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6D2Cu;
    {
        const bool branch_taken_0x1f6d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D2Cu;
        // 0x1f6d30: 0xac711340  sw          $s1, 0x1340($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d2c) {
            ctx->pc = 0x1F6D3Cu;
            goto label_1f6d3c;
        }
    }
    ctx->pc = 0x1F6D34u;
    // 0x1f6d34: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1F6D34u;
    SET_GPR_U32(ctx, 31, 0x1F6D3Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1F6D34u, 0x1F6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D3Cu;
label_1f6d3c:
    // 0x1f6d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f6d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6d40:
    // 0x1f6d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6d44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D4Cu;
        // 0x1f6d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6D54u;
}
