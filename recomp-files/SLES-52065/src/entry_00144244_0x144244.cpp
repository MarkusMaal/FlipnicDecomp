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

// Function: entry_00144244
// Address: 0x144244 - 0x144264
void entry_00144244_0x144244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144244_0x144244");
#endif

    switch (ctx->pc) {
        case 0x14424cu: goto label_14424c;
        case 0x144258u: goto label_144258;
        default: break;
    }

    ctx->pc = 0x144244u;

label_144244:
    // 0x144244: 0xc0510ac  jal         func_1442B0
    ctx->pc = 0x144244u;
    SET_GPR_U32(ctx, 31, 0x14424Cu);
    ctx->pc = 0x144248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144244u;
    // 0x144248: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1442B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442B0u, 0x144244u, 0x14424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14424Cu;
label_14424c:
    // 0x14424c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144250: 0xc050d5c  jal         func_143570
    ctx->pc = 0x144250u;
    SET_GPR_U32(ctx, 31, 0x144258u);
    ctx->pc = 0x144254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144250u;
    // 0x144254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143570u, 0x144250u, 0x144258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144258u;
label_144258:
    // 0x144258: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x144258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x14425c: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14425Cu;
    {
        const bool branch_taken_0x14425c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14425Cu;
        // 0x144260: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14425c) {
            ctx->pc = 0x144244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144244;
        }
    }
    ctx->pc = 0x144264u;
}
