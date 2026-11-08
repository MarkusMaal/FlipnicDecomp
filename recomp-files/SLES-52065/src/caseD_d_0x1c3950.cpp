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

// Function: caseD_d
// Address: 0x1c3950 - 0x1c39a0
void caseD_d_0x1c3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1c3950");
#endif

    switch (ctx->pc) {
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3968u: goto label_1c3968;
        case 0x1c3974u: goto label_1c3974;
        default: break;
    }

    ctx->pc = 0x1c3950u;

    // 0x1c3950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3954: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3954u;
    SET_GPR_U32(ctx, 31, 0x1C395Cu);
    ctx->pc = 0x1C3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3954u;
    // 0x1c3958: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3954u, 0x1C395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C395Cu;
label_1c395c:
    // 0x1c395c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3960: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3960u;
    SET_GPR_U32(ctx, 31, 0x1C3968u);
    ctx->pc = 0x1C3964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3960u;
    // 0x1c3964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3960u, 0x1C3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3968u;
label_1c3968:
    // 0x1c3968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c396c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C396Cu;
    SET_GPR_U32(ctx, 31, 0x1C3974u);
    ctx->pc = 0x1C3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C396Cu;
    // 0x1c3970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C396Cu, 0x1C3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3974u;
label_1c3974:
    // 0x1c3974: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c397c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C397Cu;
    {
        const bool branch_taken_0x1c397c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c397c) {
            ctx->pc = 0x1C39A4u;
            return;
        }
    }
    ctx->pc = 0x1C3984u;
    // 0x1c3984: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c398c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C398Cu;
    {
        const bool branch_taken_0x1c398c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C398Cu;
        // 0x1c3990: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c398c) {
            ctx->pc = 0x1C39A0u;
            return;
        }
    }
    ctx->pc = 0x1C3994u;
    // 0x1c3994: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c3994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c3998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3998u;
    {
        const bool branch_taken_0x1c3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3998u;
        // 0x1c399c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3998) {
            ctx->pc = 0x1C39A4u;
            return;
        }
    }
    ctx->pc = 0x1C39A0u;
}
