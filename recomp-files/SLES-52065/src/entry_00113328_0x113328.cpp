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

// Function: entry_00113328
// Address: 0x113328 - 0x113358
void entry_00113328_0x113328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113328_0x113328");
#endif

    switch (ctx->pc) {
        case 0x113330u: goto label_113330;
        default: break;
    }

    ctx->pc = 0x113328u;

    // 0x113328: 0xc044254  jal         func_110950
    ctx->pc = 0x113328u;
    SET_GPR_U32(ctx, 31, 0x113330u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113328u, 0x113330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113330u;
label_113330:
    // 0x113330: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113334: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x113334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x113338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11333c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x113340: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113344: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x113348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11334c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x113350: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x113350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113354: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x113354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x113358u;
}
