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

// Function: entry_001fe740
// Address: 0x1fe740 - 0x1fe75c
void entry_001fe740_0x1fe740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe740_0x1fe740");
#endif

    switch (ctx->pc) {
        case 0x1fe754u: goto label_1fe754;
        default: break;
    }

    ctx->pc = 0x1fe740u;

label_1fe740:
    // 0x1fe740: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1fe744:
    // 0x1fe744: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1fe748:
    if (ctx->pc == 0x1FE748u) {
        ctx->pc = 0x1FE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE744u;
        // 0x1fe748: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE74Cu;
        goto label_1fe74c;
    }
    ctx->pc = 0x1FE744u;
    {
        const bool branch_taken_0x1fe744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe744) {
            ctx->pc = 0x1FE748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE744u;
            // 0x1fe748: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE75Cu;
            return;
        }
    }
    ctx->pc = 0x1FE74Cu;
label_1fe74c:
    // 0x1fe74c: 0x280f809  jalr        $s4
label_1fe750:
    if (ctx->pc == 0x1FE750u) {
        ctx->pc = 0x1FE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE74Cu;
        // 0x1fe750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE754u;
        goto label_1fe754;
    }
    ctx->pc = 0x1FE74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1FE754u);
        ctx->pc = 0x1FE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE74Cu;
        // 0x1fe750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE74Cu, 0x1FE754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE754u;
label_1fe754:
    // 0x1fe754: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1fe754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1fe758:
    // 0x1fe758: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1fe75cu;
}
