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

// Function: entry_001946e4
// Address: 0x1946e4 - 0x194714
void entry_001946e4_0x1946e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001946e4_0x1946e4");
#endif

    switch (ctx->pc) {
        case 0x19470cu: goto label_19470c;
        default: break;
    }

    ctx->pc = 0x1946e4u;

    // 0x1946e4: 0x0  nop
    ctx->pc = 0x1946e4u;
    // NOP
    // 0x1946e8: 0xae800334  sw          $zero, 0x334($s4)
    ctx->pc = 0x1946e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 820), GPR_U32(ctx, 0));
    // 0x1946ec: 0xae800338  sw          $zero, 0x338($s4)
    ctx->pc = 0x1946ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 824), GPR_U32(ctx, 0));
    // 0x1946f0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1946f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1946f4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1946F4u;
    {
        const bool branch_taken_0x1946f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946F4u;
        // 0x1946f8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946f4) {
            ctx->pc = 0x194780u;
            return;
        }
    }
    ctx->pc = 0x1946FCu;
    // 0x1946fc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194700: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x194700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x194704: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194704u;
    SET_GPR_U32(ctx, 31, 0x19470Cu);
    ctx->pc = 0x194708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194704u;
    // 0x194708: 0x7fa00090  sq          $zero, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194704u, 0x19470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19470Cu;
label_19470c:
    // 0x19470c: 0x8e910668  lw          $s1, 0x668($s4)
    ctx->pc = 0x19470cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1640)));
    // 0x194710: 0x0  nop
    ctx->pc = 0x194710u;
    // NOP
    ctx->pc = 0x194714u;
}
