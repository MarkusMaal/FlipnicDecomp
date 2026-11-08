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

// Function: entry_0019394c
// Address: 0x19394c - 0x193974
void entry_0019394c_0x19394c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019394c_0x19394c");
#endif

    switch (ctx->pc) {
        case 0x19396cu: goto label_19396c;
        default: break;
    }

    ctx->pc = 0x19394cu;

label_19394c:
    // 0x19394c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193950:
    // 0x193950: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193954:
    // 0x193954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193958:
    // 0x193958: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19395c:
    // 0x19395c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_193960:
    // 0x193960: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x193960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_193964:
    // 0x193964: 0x320f809  jalr        $t9
label_193968:
    if (ctx->pc == 0x193968u) {
        ctx->pc = 0x193968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193964u;
        // 0x193968: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19396Cu;
        goto label_19396c;
    }
    ctx->pc = 0x193964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19396Cu);
        ctx->pc = 0x193968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193964u;
        // 0x193968: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193964u, 0x19396Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19396Cu;
label_19396c:
    // 0x19396c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_193970:
    if (ctx->pc == 0x193970u) {
        ctx->pc = 0x193974u;
        goto label_fallthrough_0x19396c;
    }
    ctx->pc = 0x19396Cu;
    {
        const bool branch_taken_0x19396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19396c) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x19396c:
    ctx->pc = 0x193974u;
}
