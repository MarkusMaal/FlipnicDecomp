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

// Function: FUN_0016bd40
// Address: 0x16bd40 - 0x16bd74
void FUN_0016bd40_0x16bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bd40_0x16bd40");
#endif

    switch (ctx->pc) {
        case 0x16bd40u: goto label_16bd40;
        case 0x16bd44u: goto label_16bd44;
        case 0x16bd48u: goto label_16bd48;
        case 0x16bd4cu: goto label_16bd4c;
        case 0x16bd50u: goto label_16bd50;
        case 0x16bd54u: goto label_16bd54;
        case 0x16bd58u: goto label_16bd58;
        case 0x16bd5cu: goto label_16bd5c;
        case 0x16bd60u: goto label_16bd60;
        case 0x16bd64u: goto label_16bd64;
        case 0x16bd68u: goto label_16bd68;
        case 0x16bd6cu: goto label_16bd6c;
        case 0x16bd70u: goto label_16bd70;
        default: break;
    }

    ctx->pc = 0x16bd40u;

label_16bd40:
    // 0x16bd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16bd44:
    // 0x16bd44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16bd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16bd48:
    // 0x16bd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16bd4c:
    // 0x16bd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bd50:
    // 0x16bd50: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16bd50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16bd54:
    // 0x16bd54: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bd58:
    // 0x16bd58: 0x320f809  jalr        $t9
label_16bd5c:
    if (ctx->pc == 0x16BD5Cu) {
        ctx->pc = 0x16BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD58u;
        // 0x16bd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD60u;
        goto label_16bd60;
    }
    ctx->pc = 0x16BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BD60u);
        ctx->pc = 0x16BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD58u;
        // 0x16bd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD58u, 0x16BD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BD60u;
label_16bd60:
    // 0x16bd60: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16bd60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_16bd64:
    // 0x16bd64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16bd68:
    // 0x16bd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bd6c:
    // 0x16bd6c: 0x3e00008  jr          $ra
label_16bd70:
    if (ctx->pc == 0x16BD70u) {
        ctx->pc = 0x16BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD6Cu;
        // 0x16bd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD74u;
        goto label_fallthrough_0x16bd6c;
    }
    ctx->pc = 0x16BD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD6Cu;
        // 0x16bd70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16bd6c:
    ctx->pc = 0x16BD74u;
}
