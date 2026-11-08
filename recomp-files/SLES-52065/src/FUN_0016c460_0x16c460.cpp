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

// Function: FUN_0016c460
// Address: 0x16c460 - 0x16c49c
void FUN_0016c460_0x16c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c460_0x16c460");
#endif

    switch (ctx->pc) {
        case 0x16c460u: goto label_16c460;
        case 0x16c464u: goto label_16c464;
        case 0x16c468u: goto label_16c468;
        case 0x16c46cu: goto label_16c46c;
        case 0x16c470u: goto label_16c470;
        case 0x16c474u: goto label_16c474;
        case 0x16c478u: goto label_16c478;
        case 0x16c47cu: goto label_16c47c;
        case 0x16c480u: goto label_16c480;
        case 0x16c484u: goto label_16c484;
        case 0x16c488u: goto label_16c488;
        case 0x16c48cu: goto label_16c48c;
        case 0x16c490u: goto label_16c490;
        case 0x16c494u: goto label_16c494;
        case 0x16c498u: goto label_16c498;
        default: break;
    }

    ctx->pc = 0x16c460u;

label_16c460:
    // 0x16c460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c464:
    // 0x16c464: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16c464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16c468:
    // 0x16c468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c46c:
    // 0x16c46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c470:
    // 0x16c470: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16c474:
    // 0x16c474: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c478:
    // 0x16c478: 0x320f809  jalr        $t9
label_16c47c:
    if (ctx->pc == 0x16C47Cu) {
        ctx->pc = 0x16C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C478u;
        // 0x16c47c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C480u;
        goto label_16c480;
    }
    ctx->pc = 0x16C478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C480u);
        ctx->pc = 0x16C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C478u;
        // 0x16c47c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C478u, 0x16C480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C480u;
label_16c480:
    // 0x16c480: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16c480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_16c484:
    // 0x16c484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c488:
    // 0x16c488: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x16c488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
label_16c48c:
    // 0x16c48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c490:
    // 0x16c490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c494:
    // 0x16c494: 0x3e00008  jr          $ra
label_16c498:
    if (ctx->pc == 0x16C498u) {
        ctx->pc = 0x16C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C494u;
        // 0x16c498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C49Cu;
        goto label_fallthrough_0x16c494;
    }
    ctx->pc = 0x16C494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C494u;
        // 0x16c498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16c494:
    ctx->pc = 0x16C49Cu;
}
