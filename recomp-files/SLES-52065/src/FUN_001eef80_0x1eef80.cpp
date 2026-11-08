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

// Function: FUN_001eef80
// Address: 0x1eef80 - 0x1eefec
void FUN_001eef80_0x1eef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eef80_0x1eef80");
#endif

    switch (ctx->pc) {
        case 0x1eef9cu: goto label_1eef9c;
        case 0x1eefa4u: goto label_1eefa4;
        case 0x1eefb8u: goto label_1eefb8;
        case 0x1eefd4u: goto label_1eefd4;
        default: break;
    }

    ctx->pc = 0x1eef80u;

    // 0x1eef80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eef84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eef88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1eef8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eef94: 0xc07bba6  jal         func_1EEE98
    ctx->pc = 0x1EEF94u;
    SET_GPR_U32(ctx, 31, 0x1EEF9Cu);
    ctx->pc = 0x1EEF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF94u;
    // 0x1eef98: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE98u, 0x1EEF94u, 0x1EEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF9Cu;
label_1eef9c:
    // 0x1eef9c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EEFA4u);
    ctx->pc = 0x1EEFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF9Cu;
    // 0x1eefa0: 0x8e24a468  lw          $a0, -0x5B98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EEF9Cu, 0x1EEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFA4u;
label_1eefa4:
    // 0x1eefa4: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1eefa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1eefa8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEFA8u;
    {
        const bool branch_taken_0x1eefa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFA8u;
        // 0x1eefac: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefa8) {
            ctx->pc = 0x1EEFC0u;
            goto label_1eefc0;
        }
    }
    ctx->pc = 0x1EEFB0u;
    // 0x1eefb0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEFB0u;
    SET_GPR_U32(ctx, 31, 0x1EEFB8u);
    ctx->pc = 0x1EEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFB0u;
    // 0x1eefb4: 0x8e24a468  lw          $a0, -0x5B98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEFB0u, 0x1EEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFB8u;
label_1eefb8:
    // 0x1eefb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFB8u;
        // 0x1eefbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EEFD8u;
            goto label_1eefd8;
        }
    }
    ctx->pc = 0x1EEFC0u;
label_1eefc0:
    // 0x1eefc0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1eefc4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1eefc8: 0x8e24a468  lw          $a0, -0x5B98($s1)
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    // 0x1eefcc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEFCCu;
    SET_GPR_U32(ctx, 31, 0x1EEFD4u);
    ctx->pc = 0x1EEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEFCCu;
    // 0x1eefd0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEFCCu, 0x1EEFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEFD4u;
label_1eefd4:
    // 0x1eefd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eefd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eefd8:
    // 0x1eefd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eefd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eefdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eefdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eefe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eefe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eefe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEFE4u;
        // 0x1eefe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEFECu;
}
