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

// Function: entry_001fcb78
// Address: 0x1fcb78 - 0x1fcc0c
void entry_001fcb78_0x1fcb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcb78_0x1fcb78");
#endif

    switch (ctx->pc) {
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbf4u: goto label_1fcbf4;
        default: break;
    }

    ctx->pc = 0x1fcb78u;

    // 0x1fcb78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb7c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB84u);
    ctx->pc = 0x1FCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB7Cu;
    // 0x1fcb80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FCB7Cu, 0x1FCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB84u;
label_1fcb84:
    // 0x1fcb84: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FCB84u;
    SET_GPR_U32(ctx, 31, 0x1FCB8Cu);
    ctx->pc = 0x1FCB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB84u;
    // 0x1fcb88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FCB84u, 0x1FCB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB8Cu;
label_1fcb8c:
    // 0x1fcb8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fcb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb90: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FCB90u;
    SET_GPR_U32(ctx, 31, 0x1FCB98u);
    ctx->pc = 0x1FCB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB90u;
    // 0x1fcb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FCB90u, 0x1FCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB98u;
label_1fcb98:
    // 0x1fcb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb9c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FCBA4u);
    ctx->pc = 0x1FCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB9Cu;
    // 0x1fcba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB9Cu, 0x1FCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBA4u;
label_1fcba4:
    // 0x1fcba4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fcba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcba8: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCBA8u;
    SET_GPR_U32(ctx, 31, 0x1FCBB0u);
    ctx->pc = 0x1FCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBA8u;
    // 0x1fcbac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCBA8u, 0x1FCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBB0u;
label_1fcbb0:
    // 0x1fcbb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbb4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fcbb8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fcbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcbbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcbc0: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FCBC0u;
    {
        const bool branch_taken_0x1fcbc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBC0u;
        // 0x1fcbc4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbc0) {
            ctx->pc = 0x1FCB50u;
            return;
        }
    }
    ctx->pc = 0x1FCBC8u;
    // 0x1fcbc8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FCBC8u;
    SET_GPR_U32(ctx, 31, 0x1FCBD0u);
    ctx->pc = 0x1FCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBC8u;
    // 0x1fcbcc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FCBC8u, 0x1FCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBD0u;
label_1fcbd0:
    // 0x1fcbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fcbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fcbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbd8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCBD8u;
    SET_GPR_U32(ctx, 31, 0x1FCBE0u);
    ctx->pc = 0x1FCBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBD8u;
    // 0x1fcbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCBD8u, 0x1FCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBE0u;
label_1fcbe0:
    // 0x1fcbe0: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCBE0u;
    {
        const bool branch_taken_0x1fcbe0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE0u;
        // 0x1fcbe4: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbe0) {
            ctx->pc = 0x1FCC14u;
            return;
        }
    }
    ctx->pc = 0x1FCBE8u;
    // 0x1fcbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fcbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbec: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCBECu;
    SET_GPR_U32(ctx, 31, 0x1FCBF4u);
    ctx->pc = 0x1FCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBECu;
    // 0x1fcbf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCBECu, 0x1FCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBF4u;
label_1fcbf4:
    // 0x1fcbf4: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x1FCBF4u;
    {
        const bool branch_taken_0x1fcbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf4) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FCBFCu;
    // 0x1fcbfc: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x1FCBFCu;
    {
        const bool branch_taken_0x1fcbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBFCu;
        // 0x1fcc00: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbfc) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FCC04u;
    // 0x1fcc04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCC04u;
    {
        const bool branch_taken_0x1fcc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC04u;
        // 0x1fcc08: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc04) {
            ctx->pc = 0x1FCC18u;
            return;
        }
    }
    ctx->pc = 0x1FCC0Cu;
}
