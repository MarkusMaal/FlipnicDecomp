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

// Function: entry_001dc570
// Address: 0x1dc570 - 0x1dc5b0
void entry_001dc570_0x1dc570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc570_0x1dc570");
#endif

    switch (ctx->pc) {
        case 0x1dc578u: goto label_1dc578;
        default: break;
    }

    ctx->pc = 0x1dc570u;

    // 0x1dc570: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DC570u;
    SET_GPR_U32(ctx, 31, 0x1DC578u);
    ctx->pc = 0x1DC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC570u;
    // 0x1dc574: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DC570u, 0x1DC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC578u;
label_1dc578:
    // 0x1dc578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc57c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc580: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dc584: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x1dc584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc588: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC588u;
    {
        const bool branch_taken_0x1dc588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC588u;
        // 0x1dc58c: 0x8c467320  lw          $a2, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc588) {
            ctx->pc = 0x1DC5E4u;
            return;
        }
    }
    ctx->pc = 0x1DC590u;
    // 0x1dc590: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dc594: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc59c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc5a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc5a4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5a8: 0x24847338  addiu       $a0, $a0, 0x7338
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
    // 0x1dc5ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1dc5b0u;
}
