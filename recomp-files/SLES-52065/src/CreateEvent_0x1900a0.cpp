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

// Function: CreateEvent
// Address: 0x1900a0 - 0x190118
void CreateEvent_0x1900a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEvent_0x1900a0");
#endif

    switch (ctx->pc) {
        case 0x1900b8u: goto label_1900b8;
        default: break;
    }

    ctx->pc = 0x1900a0u;

    // 0x1900a0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1900a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1900a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900a8: 0x2442b1d0  addiu       $v0, $v0, -0x4E30
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1900ac: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1900acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1900b0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1900b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1900b4: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1900b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
label_1900b8:
    // 0x1900b8: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1900bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1900bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1900c0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1900C0u;
    {
        const bool branch_taken_0x1900c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1900C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C0u;
        // 0x1900c4: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1900c0) {
            ctx->pc = 0x1900DCu;
            goto label_1900dc;
        }
    }
    ctx->pc = 0x1900C8u;
    // 0x1900c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1900c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1900cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1900ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1900d0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x1900d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1900d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1900D4u;
    {
        const bool branch_taken_0x1900d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1900d4) {
            ctx->pc = 0x1900B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1900b8;
        }
    }
    ctx->pc = 0x1900DCu;
label_1900dc:
    // 0x1900dc: 0x0  nop
    ctx->pc = 0x1900dcu;
    // NOP
    // 0x1900e0: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1900e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x1900e4: 0xac840018  sw          $a0, 0x18($a0)
    ctx->pc = 0x1900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 4));
    // 0x1900e8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1900ec: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1900ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1900f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1900f4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1900f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1900f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1900fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1900fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x190100: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x190104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190104u;
    {
        const bool branch_taken_0x190104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190104) {
            ctx->pc = 0x190110u;
            goto label_190110;
        }
    }
    ctx->pc = 0x19010Cu;
    // 0x19010c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19010cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_190110:
    // 0x190110: 0x3e00008  jr          $ra
    ctx->pc = 0x190110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190110u;
        // 0x190114: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190118u;
}
