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

// Function: entry_001b3a20
// Address: 0x1b3a20 - 0x1b3ab8
void entry_001b3a20_0x1b3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3a20_0x1b3a20");
#endif

    switch (ctx->pc) {
        case 0x1b3a38u: goto label_1b3a38;
        case 0x1b3a44u: goto label_1b3a44;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a7cu: goto label_1b3a7c;
        default: break;
    }

    ctx->pc = 0x1b3a20u;

    // 0x1b3a20: 0x2a42000f  slti        $v0, $s2, 0xF
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1b3a24: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B3A24u;
    {
        const bool branch_taken_0x1b3a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a24) {
            ctx->pc = 0x1B3994u;
            return;
        }
    }
    ctx->pc = 0x1B3A2Cu;
    // 0x1b3a2c: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3a30: 0xc06cff0  jal         func_1B3FC0
    ctx->pc = 0x1B3A30u;
    SET_GPR_U32(ctx, 31, 0x1B3A38u);
    ctx->pc = 0x1B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FC0u, 0x1B3A30u, 0x1B3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A38u;
label_1b3a38:
    // 0x1b3a38: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3a3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B3A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A44u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B3A3Cu, 0x1B3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A44u;
label_1b3a44:
    // 0x1b3a44: 0xae802780  sw          $zero, 0x2780($s4)
    ctx->pc = 0x1b3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10112), GPR_U32(ctx, 0));
    // 0x1b3a48: 0xa68028da  sh          $zero, 0x28DA($s4)
    ctx->pc = 0x1b3a48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10458), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3a4c: 0xae8028e4  sw          $zero, 0x28E4($s4)
    ctx->pc = 0x1b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10468), GPR_U32(ctx, 0));
    // 0x1b3a50: 0xa6802828  sh          $zero, 0x2828($s4)
    ctx->pc = 0x1b3a50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10280), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3a54: 0xa280282c  sb          $zero, 0x282C($s4)
    ctx->pc = 0x1b3a54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10284), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a58: 0xa280282b  sb          $zero, 0x282B($s4)
    ctx->pc = 0x1b3a58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10283), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a5c: 0xa280282a  sb          $zero, 0x282A($s4)
    ctx->pc = 0x1b3a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10282), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a60: 0xae802830  sw          $zero, 0x2830($s4)
    ctx->pc = 0x1b3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10288), GPR_U32(ctx, 0));
    // 0x1b3a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a68: 0xc06cebc  jal         func_1B3AF0
    ctx->pc = 0x1B3A68u;
    SET_GPR_U32(ctx, 31, 0x1B3A70u);
    ctx->pc = 0x1B3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3AF0u, 0x1B3A68u, 0x1B3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A70u;
label_1b3a70:
    // 0x1b3a70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b3a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a74: 0xc06ceb0  jal         func_1B3AC0
    ctx->pc = 0x1B3A74u;
    SET_GPR_U32(ctx, 31, 0x1B3A7Cu);
    ctx->pc = 0x1B3AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3AC0u, 0x1B3A74u, 0x1B3A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A7Cu;
label_1b3a7c:
    // 0x1b3a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a80: 0xa2830010  sb          $v1, 0x10($s4)
    ctx->pc = 0x1b3a80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a84: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1b3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b3a88: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x1b3a88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a8c: 0xa2830012  sb          $v1, 0x12($s4)
    ctx->pc = 0x1b3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3a90: 0xa2800013  sb          $zero, 0x13($s4)
    ctx->pc = 0x1b3a90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b3a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b3a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3aac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3AB8u;
}
