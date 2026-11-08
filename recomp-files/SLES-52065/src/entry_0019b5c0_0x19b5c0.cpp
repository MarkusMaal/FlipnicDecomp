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

// Function: entry_0019b5c0
// Address: 0x19b5c0 - 0x19b604
void entry_0019b5c0_0x19b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b5c0_0x19b5c0");
#endif

    switch (ctx->pc) {
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b600u: goto label_19b600;
        default: break;
    }

    ctx->pc = 0x19b5c0u;

label_19b5c0:
    // 0x19b5c0: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_19b5c4:
    if (ctx->pc == 0x19B5C4u) {
        ctx->pc = 0x19B5C8u;
        goto label_19b5c8;
    }
    ctx->pc = 0x19B5C0u;
    {
        const bool branch_taken_0x19b5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b5c0) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B5C8u;
label_19b5c8:
    // 0x19b5c8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_19b5cc:
    // 0x19b5cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19b5d0:
    if (ctx->pc == 0x19B5D0u) {
        ctx->pc = 0x19B5D4u;
        goto label_19b5d4;
    }
    ctx->pc = 0x19B5CCu;
    {
        const bool branch_taken_0x19b5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5cc) {
            ctx->pc = 0x19B604u;
            return;
        }
    }
    ctx->pc = 0x19B5D4u;
label_19b5d4:
    // 0x19b5d4: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5d8:
    // 0x19b5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b5dc:
    // 0x19b5dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5e0:
    // 0x19b5e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19b5e4:
    // 0x19b5e4: 0x320f809  jalr        $t9
label_19b5e8:
    if (ctx->pc == 0x19B5E8u) {
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5ECu;
        goto label_19b5ec;
    }
    ctx->pc = 0x19B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B5ECu);
        ctx->pc = 0x19B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E4u;
        // 0x19b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5E4u, 0x19B5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5ECu;
label_19b5ec:
    // 0x19b5ec: 0x8e240784  lw          $a0, 0x784($s1)
    ctx->pc = 0x19b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1924)));
label_19b5f0:
    // 0x19b5f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b5f4:
    // 0x19b5f4: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19b5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19b5f8:
    // 0x19b5f8: 0x320f809  jalr        $t9
label_19b5fc:
    if (ctx->pc == 0x19B5FCu) {
        ctx->pc = 0x19B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5F8u;
        // 0x19b5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B600u;
        goto label_19b600;
    }
    ctx->pc = 0x19B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19B600u);
        ctx->pc = 0x19B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5F8u;
        // 0x19b5fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5F8u, 0x19B600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B600u;
label_19b600:
    // 0x19b600: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    ctx->pc = 0x19b604u;
}
