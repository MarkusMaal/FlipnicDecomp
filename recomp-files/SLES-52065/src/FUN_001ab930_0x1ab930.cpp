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

// Function: FUN_001ab930
// Address: 0x1ab930 - 0x1ab970
void FUN_001ab930_0x1ab930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab930_0x1ab930");
#endif

    ctx->pc = 0x1ab930u;

    // 0x1ab930: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x1ab930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1ab934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB934u;
    {
        const bool branch_taken_0x1ab934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab934) {
            ctx->pc = 0x1AB944u;
            goto label_1ab944;
        }
    }
    ctx->pc = 0x1AB93Cu;
    // 0x1ab93c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AB93Cu;
    {
        const bool branch_taken_0x1ab93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB93Cu;
        // 0x1ab940: 0xa0800024  sb          $zero, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab93c) {
            ctx->pc = 0x1AB968u;
            goto label_1ab968;
        }
    }
    ctx->pc = 0x1AB944u;
label_1ab944:
    // 0x1ab944: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ab948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab94c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ab950: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ab954: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab958: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1ab95c: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1ab960: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ab960u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ab964: 0xa0820024  sb          $v0, 0x24($a0)
    ctx->pc = 0x1ab964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
label_1ab968:
    // 0x1ab968: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x90820024  lbu         $v0, 0x24($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB970u;
}
