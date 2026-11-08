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

// Function: entry_00198440
// Address: 0x198440 - 0x198464
void entry_00198440_0x198440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198440_0x198440");
#endif

    switch (ctx->pc) {
        case 0x19845cu: goto label_19845c;
        default: break;
    }

    ctx->pc = 0x198440u;

label_198440:
    // 0x198440: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_198444:
    if (ctx->pc == 0x198444u) {
        ctx->pc = 0x198448u;
        goto label_198448;
    }
    ctx->pc = 0x198440u;
    {
        const bool branch_taken_0x198440 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x198440) {
            ctx->pc = 0x19847Cu;
            return;
        }
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19844c:
    // 0x19844c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198450:
    // 0x198450: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_198454:
    // 0x198454: 0x320f809  jalr        $t9
label_198458:
    if (ctx->pc == 0x198458u) {
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19845Cu;
        goto label_19845c;
    }
    ctx->pc = 0x198454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19845Cu);
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198454u, 0x19845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19845Cu;
label_19845c:
    // 0x19845c: 0x10000008  b           . + 4 + (0x8 << 2)
label_198460:
    if (ctx->pc == 0x198460u) {
        ctx->pc = 0x198460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19845Cu;
        // 0x198460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198464u;
        goto label_fallthrough_0x19845c;
    }
    ctx->pc = 0x19845Cu;
    {
        const bool branch_taken_0x19845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19845Cu;
        // 0x198460: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19845c) {
            ctx->pc = 0x198480u;
            return;
        }
    }
label_fallthrough_0x19845c:
    ctx->pc = 0x198464u;
}
