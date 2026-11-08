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

// Function: entry_00112ef4
// Address: 0x112ef4 - 0x112f24
void entry_00112ef4_0x112ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ef4_0x112ef4");
#endif

    switch (ctx->pc) {
        case 0x112efcu: goto label_112efc;
        default: break;
    }

    ctx->pc = 0x112ef4u;

    // 0x112ef4: 0xc044254  jal         func_110950
    ctx->pc = 0x112EF4u;
    SET_GPR_U32(ctx, 31, 0x112EFCu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x112EF4u, 0x112EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EFCu;
label_112efc:
    // 0x112efc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112f00: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x112f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x112f08: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x112f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x112f0c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f10: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x112f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x112f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112f18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112f1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x112f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112f20: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x112f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x112f24u;
}
