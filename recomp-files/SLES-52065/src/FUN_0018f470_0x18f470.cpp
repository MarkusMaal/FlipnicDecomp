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

// Function: FUN_0018f470
// Address: 0x18f470 - 0x18f4cc
void FUN_0018f470_0x18f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f470_0x18f470");
#endif

    switch (ctx->pc) {
        case 0x18f470u: goto label_18f470;
        case 0x18f474u: goto label_18f474;
        case 0x18f478u: goto label_18f478;
        case 0x18f47cu: goto label_18f47c;
        case 0x18f480u: goto label_18f480;
        case 0x18f484u: goto label_18f484;
        case 0x18f488u: goto label_18f488;
        case 0x18f48cu: goto label_18f48c;
        case 0x18f490u: goto label_18f490;
        case 0x18f494u: goto label_18f494;
        case 0x18f498u: goto label_18f498;
        case 0x18f49cu: goto label_18f49c;
        case 0x18f4a0u: goto label_18f4a0;
        case 0x18f4a4u: goto label_18f4a4;
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4acu: goto label_18f4ac;
        case 0x18f4b0u: goto label_18f4b0;
        case 0x18f4b4u: goto label_18f4b4;
        case 0x18f4b8u: goto label_18f4b8;
        case 0x18f4bcu: goto label_18f4bc;
        case 0x18f4c0u: goto label_18f4c0;
        case 0x18f4c4u: goto label_18f4c4;
        case 0x18f4c8u: goto label_18f4c8;
        default: break;
    }

    ctx->pc = 0x18f470u;

label_18f470:
    // 0x18f470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18f474:
    // 0x18f474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18f478:
    // 0x18f478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18f47c:
    // 0x18f47c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18f480:
    // 0x18f480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f484:
    // 0x18f484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18f488:
    // 0x18f488: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f48c:
    // 0x18f48c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f490:
    // 0x18f490: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x18f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_18f494:
    // 0x18f494: 0x8c99040c  lw          $t9, 0x40C($a0)
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1036)));
label_18f498:
    // 0x18f498: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18f49c:
    // 0x18f49c: 0x320f809  jalr        $t9
label_18f4a0:
    if (ctx->pc == 0x18F4A0u) {
        ctx->pc = 0x18F4A4u;
        goto label_18f4a4;
    }
    ctx->pc = 0x18F49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18F4A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F49Cu, 0x18F4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F4A4u;
label_18f4a4:
    // 0x18f4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18f4a8:
    // 0x18f4a8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18f4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_18f4ac:
    // 0x18f4ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_18f4b0:
    if (ctx->pc == 0x18F4B0u) {
        ctx->pc = 0x18F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ACu;
        // 0x18f4b0: 0x26310420  addiu       $s1, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4B4u;
        goto label_18f4b4;
    }
    ctx->pc = 0x18F4ACu;
    {
        const bool branch_taken_0x18f4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ACu;
        // 0x18f4b0: 0x26310420  addiu       $s1, $s1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f4ac) {
            ctx->pc = 0x18F490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f490;
        }
    }
    ctx->pc = 0x18F4B4u;
label_18f4b4:
    // 0x18f4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18f4b8:
    // 0x18f4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f4bc:
    // 0x18f4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f4c0:
    // 0x18f4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f4c4:
    // 0x18f4c4: 0x3e00008  jr          $ra
label_18f4c8:
    if (ctx->pc == 0x18F4C8u) {
        ctx->pc = 0x18F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4C4u;
        // 0x18f4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4CCu;
        goto label_fallthrough_0x18f4c4;
    }
    ctx->pc = 0x18F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4C4u;
        // 0x18f4c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f4c4:
    ctx->pc = 0x18F4CCu;
}
