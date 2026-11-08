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

// Function: entry_0011996c
// Address: 0x11996c - 0x1199dc
void entry_0011996c_0x11996c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011996c_0x11996c");
#endif

    switch (ctx->pc) {
        case 0x119974u: goto label_119974;
        case 0x119998u: goto label_119998;
        case 0x1199b4u: goto label_1199b4;
        default: break;
    }

    ctx->pc = 0x11996cu;

label_11996c:
    // 0x11996c: 0xc046594  jal         func_119650
label_119970:
    if (ctx->pc == 0x119970u) {
        ctx->pc = 0x119974u;
        goto label_119974;
    }
    ctx->pc = 0x11996Cu;
    SET_GPR_U32(ctx, 31, 0x119974u);
    ctx->pc = 0x119650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119650u, 0x11996Cu, 0x119974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119974u;
label_119974:
    // 0x119974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119978:
    // 0x119978: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11997c:
    // 0x11997c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_119980:
    // 0x119980: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119984:
    // 0x119984: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119988:
    // 0x119988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11998c:
    // 0x11998c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11998cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119990:
    // 0x119990: 0x320f809  jalr        $t9
label_119994:
    if (ctx->pc == 0x119994u) {
        ctx->pc = 0x119994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119990u;
        // 0x119994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119998u;
        goto label_119998;
    }
    ctx->pc = 0x119990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119998u);
        ctx->pc = 0x119994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119990u;
        // 0x119994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119990u, 0x119998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119998u;
label_119998:
    // 0x119998: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_11999c:
    // 0x11999c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1199a0:
    // 0x1199a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1199a4:
    // 0x1199a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1199a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1199a8:
    // 0x1199a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1199ac:
    // 0x1199ac: 0x320f809  jalr        $t9
label_1199b0:
    if (ctx->pc == 0x1199B0u) {
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199B4u;
        goto label_1199b4;
    }
    ctx->pc = 0x1199ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1199B4u);
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ACu;
        // 0x1199b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199ACu, 0x1199B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1199B4u;
label_1199b4:
    // 0x1199b4: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_1199b8:
    if (ctx->pc == 0x1199B8u) {
        ctx->pc = 0x1199BCu;
        goto label_1199bc;
    }
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199DCu;
            return;
        }
    }
    ctx->pc = 0x1199BCu;
label_1199bc:
    // 0x1199bc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1199c0:
    // 0x1199c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1199c4:
    // 0x1199c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1199c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1199c8:
    // 0x1199c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1199c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1199cc:
    // 0x1199cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1199ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1199d0:
    // 0x1199d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1199d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1199d4:
    // 0x1199d4: 0x320f809  jalr        $t9
label_1199d8:
    if (ctx->pc == 0x1199D8u) {
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D4u;
        // 0x1199d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199DCu;
        goto label_fallthrough_0x1199d4;
    }
    ctx->pc = 0x1199D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1199DCu);
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D4u;
        // 0x1199d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199D4u, 0x1199DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1199d4:
    ctx->pc = 0x1199DCu;
}
