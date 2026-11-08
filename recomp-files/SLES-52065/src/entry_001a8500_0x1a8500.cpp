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

// Function: entry_001a8500
// Address: 0x1a8500 - 0x1a8548
void entry_001a8500_0x1a8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8500_0x1a8500");
#endif

    switch (ctx->pc) {
        case 0x1a8524u: goto label_1a8524;
        case 0x1a8540u: goto label_1a8540;
        default: break;
    }

    ctx->pc = 0x1a8500u;

label_1a8500:
    // 0x1a8500: 0x8e6206c4  lw          $v0, 0x6C4($s3)
    ctx->pc = 0x1a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1732)));
label_1a8504:
    // 0x1a8504: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8508:
    // 0x1a8508: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1a850c:
    if (ctx->pc == 0x1A850Cu) {
        ctx->pc = 0x1A850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8508u;
        // 0x1a850c: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8510u;
        goto label_1a8510;
    }
    ctx->pc = 0x1A8508u;
    {
        const bool branch_taken_0x1a8508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8508u;
        // 0x1a850c: 0x2711821  addu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8508) {
            ctx->pc = 0x1A84BCu;
            return;
        }
    }
    ctx->pc = 0x1A8510u;
label_1a8510:
    // 0x1a8510: 0x8f86870c  lw          $a2, -0x78F4($gp)
    ctx->pc = 0x1a8510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
label_1a8514:
    // 0x1a8514: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a8514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a8518:
    // 0x1a8518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a851c:
    // 0x1a851c: 0xc064a88  jal         func_192A20
label_1a8520:
    if (ctx->pc == 0x1A8520u) {
        ctx->pc = 0x1A8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A851Cu;
        // 0x1a8520: 0x24a507a8  addiu       $a1, $a1, 0x7A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8524u;
        goto label_1a8524;
    }
    ctx->pc = 0x1A851Cu;
    SET_GPR_U32(ctx, 31, 0x1A8524u);
    ctx->pc = 0x1A8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A851Cu;
    // 0x1a8520: 0x24a507a8  addiu       $a1, $a1, 0x7A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x1A851Cu, 0x1A8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8524u;
label_1a8524:
    // 0x1a8524: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_1a8528:
    if (ctx->pc == 0x1A8528u) {
        ctx->pc = 0x1A852Cu;
        goto label_1a852c;
    }
    ctx->pc = 0x1A8524u;
    {
        const bool branch_taken_0x1a8524 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8524) {
            ctx->pc = 0x1A8560u;
            return;
        }
    }
    ctx->pc = 0x1A852Cu;
label_1a852c:
    // 0x1a852c: 0x8e79031c  lw          $t9, 0x31C($s3)
    ctx->pc = 0x1a852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_1a8530:
    // 0x1a8530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8534:
    // 0x1a8534: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a8534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a8538:
    // 0x1a8538: 0x320f809  jalr        $t9
label_1a853c:
    if (ctx->pc == 0x1A853Cu) {
        ctx->pc = 0x1A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8538u;
        // 0x1a853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8540u;
        goto label_1a8540;
    }
    ctx->pc = 0x1A8538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8540u);
        ctx->pc = 0x1A853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8538u;
        // 0x1a853c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8538u, 0x1A8540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a8544:
    if (ctx->pc == 0x1A8544u) {
        ctx->pc = 0x1A8548u;
        goto label_fallthrough_0x1a8540;
    }
    ctx->pc = 0x1A8540u;
    {
        const bool branch_taken_0x1a8540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8540) {
            ctx->pc = 0x1A8560u;
            return;
        }
    }
label_fallthrough_0x1a8540:
    ctx->pc = 0x1A8548u;
}
