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

// Function: entry_001db700
// Address: 0x1db700 - 0x1db740
void entry_001db700_0x1db700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db700_0x1db700");
#endif

    switch (ctx->pc) {
        case 0x1db708u: goto label_1db708;
        default: break;
    }

    ctx->pc = 0x1db700u;

    // 0x1db700: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DB700u;
    SET_GPR_U32(ctx, 31, 0x1DB708u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DB700u, 0x1DB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB708u;
label_1db708:
    // 0x1db708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db70c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1db70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1db710: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1db710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1db714: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB714u;
    {
        const bool branch_taken_0x1db714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB714u;
        // 0x1db718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db714) {
            ctx->pc = 0x1DB780u;
            return;
        }
    }
    ctx->pc = 0x1DB71Cu;
    // 0x1db71c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1db720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db724: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db730: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db734: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db738: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db73c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1db740u;
}
