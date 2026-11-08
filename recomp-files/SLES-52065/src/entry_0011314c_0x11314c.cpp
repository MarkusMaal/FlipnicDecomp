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

// Function: entry_0011314c
// Address: 0x11314c - 0x113194
void entry_0011314c_0x11314c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011314c_0x11314c");
#endif

    switch (ctx->pc) {
        case 0x113154u: goto label_113154;
        default: break;
    }

    ctx->pc = 0x11314cu;

    // 0x11314c: 0xc044254  jal         func_110950
    ctx->pc = 0x11314Cu;
    SET_GPR_U32(ctx, 31, 0x113154u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x11314Cu, 0x113154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113154u;
label_113154:
    // 0x113154: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113158: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x113158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x11315c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x113160: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113168: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x113168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11316c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113170: 0x90a30224  lbu         $v1, 0x224($a1)
    ctx->pc = 0x113170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x113174: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x113178: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x113178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x11317c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11317Cu;
    {
        const bool branch_taken_0x11317c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11317c) {
            ctx->pc = 0x113194u;
            return;
        }
    }
    ctx->pc = 0x113184u;
    // 0x113184: 0x8ca40224  lw          $a0, 0x224($a1)
    ctx->pc = 0x113184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x113188: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x113188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x11318c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x11318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x113190: 0xaca30224  sw          $v1, 0x224($a1)
    ctx->pc = 0x113190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x113194u;
}
