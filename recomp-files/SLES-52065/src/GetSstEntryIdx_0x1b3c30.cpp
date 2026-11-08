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

// Function: GetSstEntryIdx
// Address: 0x1b3c30 - 0x1b3cd0
void GetSstEntryIdx_0x1b3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSstEntryIdx_0x1b3c30");
#endif

    switch (ctx->pc) {
        case 0x1b3c64u: goto label_1b3c64;
        case 0x1b3c84u: goto label_1b3c84;
        default: break;
    }

    ctx->pc = 0x1b3c30u;

    // 0x1b3c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3c34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b3c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b3c38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b3c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3c44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3c48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b3c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3c54: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3c58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3C5Cu;
    {
        const bool branch_taken_0x1b3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c5c) {
            ctx->pc = 0x1B3C9Cu;
            goto label_1b3c9c;
        }
    }
    ctx->pc = 0x1B3C64u;
label_1b3c64:
    // 0x1b3c64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3c68: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1b3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b3c6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3c70: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1b3c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1b3c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3c7c: 0xc080796  jal         func_201E58
    ctx->pc = 0x1B3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C84u);
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x1B3C7Cu, 0x1B3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C84u;
label_1b3c84:
    // 0x1b3c84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3C84u;
    {
        const bool branch_taken_0x1b3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c84) {
            ctx->pc = 0x1B3C98u;
            goto label_1b3c98;
        }
    }
    ctx->pc = 0x1B3C8Cu;
    // 0x1b3c8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3C90u;
    {
        const bool branch_taken_0x1b3c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c90) {
            ctx->pc = 0x1B3CB0u;
            goto label_1b3cb0;
        }
    }
    ctx->pc = 0x1B3C98u;
label_1b3c98:
    // 0x1b3c98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b3c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b3c9c:
    // 0x1b3c9c: 0x0  nop
    ctx->pc = 0x1b3c9cu;
    // NOP
    // 0x1b3ca0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1b3ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b3ca4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B3CA4u;
    {
        const bool branch_taken_0x1b3ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ca4) {
            ctx->pc = 0x1B3C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3c64;
        }
    }
    ctx->pc = 0x1B3CACu;
    // 0x1b3cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b3cb0:
    // 0x1b3cb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b3cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3cb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3cc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b3cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b3cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3CD0u;
}
