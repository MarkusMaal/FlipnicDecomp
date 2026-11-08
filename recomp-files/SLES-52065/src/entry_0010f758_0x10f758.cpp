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

// Function: entry_0010f758
// Address: 0x10f758 - 0x10f790
void entry_0010f758_0x10f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f758_0x10f758");
#endif

    switch (ctx->pc) {
        case 0x10f76cu: goto label_10f76c;
        case 0x10f78cu: goto label_10f78c;
        default: break;
    }

    ctx->pc = 0x10f758u;

label_10f758:
    // 0x10f758: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f75c:
    // 0x10f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f760:
    // 0x10f760: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f764:
    // 0x10f764: 0x320f809  jalr        $t9
label_10f768:
    if (ctx->pc == 0x10F768u) {
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F76Cu;
        goto label_10f76c;
    }
    ctx->pc = 0x10F764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F76Cu);
        ctx->pc = 0x10F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F764u;
        // 0x10f768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F764u, 0x10F76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F76Cu;
label_10f76c:
    // 0x10f76c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f770:
    // 0x10f770: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10f774:
    // 0x10f774: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_10f778:
    // 0x10f778: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x10f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_10f77c:
    // 0x10f77c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10f780:
    // 0x10f780: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f784:
    // 0x10f784: 0x320f809  jalr        $t9
label_10f788:
    if (ctx->pc == 0x10F788u) {
        ctx->pc = 0x10F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F784u;
        // 0x10f788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F78Cu;
        goto label_10f78c;
    }
    ctx->pc = 0x10F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F78Cu);
        ctx->pc = 0x10F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F784u;
        // 0x10f788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F784u, 0x10F78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F78Cu;
label_10f78c:
    // 0x10f78c: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x10f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x10f790u;
}
