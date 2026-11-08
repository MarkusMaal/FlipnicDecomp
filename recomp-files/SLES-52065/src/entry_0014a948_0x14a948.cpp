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

// Function: entry_0014a948
// Address: 0x14a948 - 0x14a968
void entry_0014a948_0x14a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a948_0x14a948");
#endif

    switch (ctx->pc) {
        case 0x14a950u: goto label_14a950;
        default: break;
    }

    ctx->pc = 0x14a948u;

    // 0x14a948: 0xc050224  jal         func_140890
    ctx->pc = 0x14A948u;
    SET_GPR_U32(ctx, 31, 0x14A950u);
    ctx->pc = 0x14A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A948u;
    // 0x14a94c: 0x27a406c0  addiu       $a0, $sp, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A948u, 0x14A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A950u;
label_14a950:
    // 0x14a950: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a954: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a958: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a95c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a960: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a964: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a964u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14a968u;
}
