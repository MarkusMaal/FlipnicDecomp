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

// Function: entry_0014a024
// Address: 0x14a024 - 0x14a044
void entry_0014a024_0x14a024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a024_0x14a024");
#endif

    switch (ctx->pc) {
        case 0x14a02cu: goto label_14a02c;
        default: break;
    }

    ctx->pc = 0x14a024u;

    // 0x14a024: 0xc050224  jal         func_140890
    ctx->pc = 0x14A024u;
    SET_GPR_U32(ctx, 31, 0x14A02Cu);
    ctx->pc = 0x14A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A024u;
    // 0x14a028: 0x27a404a0  addiu       $a0, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A024u, 0x14A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A02Cu;
label_14a02c:
    // 0x14a02c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a030: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a034: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a038: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14a038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14a03c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a040: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14a040u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14a044u;
}
