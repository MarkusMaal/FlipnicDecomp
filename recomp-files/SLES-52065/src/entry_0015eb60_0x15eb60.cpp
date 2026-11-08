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

// Function: entry_0015eb60
// Address: 0x15eb60 - 0x15ebf8
void entry_0015eb60_0x15eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb60_0x15eb60");
#endif

    switch (ctx->pc) {
        case 0x15eba0u: goto label_15eba0;
        case 0x15ebb4u: goto label_15ebb4;
        case 0x15ebd0u: goto label_15ebd0;
        default: break;
    }

    ctx->pc = 0x15eb60u;

label_15eb60:
    // 0x15eb60: 0x8ea22c20  lw          $v0, 0x2C20($s5)
    ctx->pc = 0x15eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11296)));
label_15eb64:
    // 0x15eb64: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15eb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15eb68:
    // 0x15eb68: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_15eb6c:
    if (ctx->pc == 0x15EB6Cu) {
        ctx->pc = 0x15EB70u;
        goto label_15eb70;
    }
    ctx->pc = 0x15EB68u;
    {
        const bool branch_taken_0x15eb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb68) {
            ctx->pc = 0x15EA38u;
            return;
        }
    }
    ctx->pc = 0x15EB70u;
label_15eb70:
    // 0x15eb70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15eb74:
    // 0x15eb74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15eb78:
    // 0x15eb78: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15eb7c:
    // 0x15eb7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15eb80:
    // 0x15eb80: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15eb84:
    // 0x15eb84: 0x24712cd8  addiu       $s1, $v1, 0x2CD8
    ctx->pc = 0x15eb84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
label_15eb88:
    // 0x15eb88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_15eb8c:
    // 0x15eb8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eb90:
    // 0x15eb90: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_15eb94:
    // 0x15eb94: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15eb98:
    // 0x15eb98: 0x320f809  jalr        $t9
label_15eb9c:
    if (ctx->pc == 0x15EB9Cu) {
        ctx->pc = 0x15EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB98u;
        // 0x15eb9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBA0u;
        goto label_15eba0;
    }
    ctx->pc = 0x15EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBA0u);
        ctx->pc = 0x15EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB98u;
        // 0x15eb9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EB98u, 0x15EBA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBA0u;
label_15eba0:
    // 0x15eba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15eba4:
    // 0x15eba4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eba8:
    // 0x15eba8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15ebac:
    // 0x15ebac: 0x320f809  jalr        $t9
label_15ebb0:
    if (ctx->pc == 0x15EBB0u) {
        ctx->pc = 0x15EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBACu;
        // 0x15ebb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBB4u;
        goto label_15ebb4;
    }
    ctx->pc = 0x15EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBB4u);
        ctx->pc = 0x15EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBACu;
        // 0x15ebb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBACu, 0x15EBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBB4u;
label_15ebb4:
    // 0x15ebb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ebb8:
    // 0x15ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ebbc:
    // 0x15ebbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ebbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ebc0:
    // 0x15ebc0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ebc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ebc4:
    // 0x15ebc4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15ebc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15ebc8:
    // 0x15ebc8: 0x320f809  jalr        $t9
label_15ebcc:
    if (ctx->pc == 0x15EBCCu) {
        ctx->pc = 0x15EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC8u;
        // 0x15ebcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBD0u;
        goto label_15ebd0;
    }
    ctx->pc = 0x15EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EBD0u);
        ctx->pc = 0x15EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC8u;
        // 0x15ebcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBC8u, 0x15EBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBD0u;
label_15ebd0:
    // 0x15ebd0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15ebd4:
    // 0x15ebd4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
label_15ebd8:
    if (ctx->pc == 0x15EBD8u) {
        ctx->pc = 0x15EBDCu;
        goto label_15ebdc;
    }
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EBF8u;
            return;
        }
    }
    ctx->pc = 0x15EBDCu;
label_15ebdc:
    // 0x15ebdc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ebe0:
    // 0x15ebe0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ebe4:
    // 0x15ebe4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_15ebe8:
    if (ctx->pc == 0x15EBE8u) {
        ctx->pc = 0x15EBECu;
        goto label_15ebec;
    }
    ctx->pc = 0x15EBE4u;
    {
        const bool branch_taken_0x15ebe4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x15ebe4) {
            ctx->pc = 0x15EBF8u;
            return;
        }
    }
    ctx->pc = 0x15EBECu;
label_15ebec:
    // 0x15ebec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ebf0:
    // 0x15ebf0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_15ebf4:
    // 0x15ebf4: 0xa464022e  sh          $a0, 0x22E($v1)
    ctx->pc = 0x15ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 558), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15ebf8u;
}
