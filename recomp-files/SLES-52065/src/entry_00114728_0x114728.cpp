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

// Function: entry_00114728
// Address: 0x114728 - 0x114770
void entry_00114728_0x114728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114728_0x114728");
#endif

    switch (ctx->pc) {
        case 0x11473cu: goto label_11473c;
        default: break;
    }

    ctx->pc = 0x114728u;

label_114728:
    // 0x114728: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_11472c:
    // 0x11472c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x11472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
label_114730:
    // 0x114730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x114730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_114734:
    // 0x114734: 0xc055c78  jal         func_1571E0
label_114738:
    if (ctx->pc == 0x114738u) {
        ctx->pc = 0x114738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114734u;
        // 0x114738: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11473Cu;
        goto label_11473c;
    }
    ctx->pc = 0x114734u;
    SET_GPR_U32(ctx, 31, 0x11473Cu);
    ctx->pc = 0x114738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114734u;
    // 0x114738: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571E0u, 0x114734u, 0x11473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x8e430260  lw          $v1, 0x260($s2)
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114740:
    // 0x114740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x114740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114744:
    // 0x114744: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x114744u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_114748:
    // 0x114748: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x114748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_11474c:
    // 0x11474c: 0x1020050c  beqz        $at, . + 4 + (0x50C << 2)
label_114750:
    if (ctx->pc == 0x114750u) {
        ctx->pc = 0x114750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11474Cu;
        // 0x114750: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114754u;
        goto label_114754;
    }
    ctx->pc = 0x11474Cu;
    {
        const bool branch_taken_0x11474c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x114750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11474Cu;
        // 0x114750: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11474c) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114754u;
label_114754:
    // 0x114754: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x114754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_114758:
    // 0x114758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11475c:
    // 0x11475c: 0x2484e500  addiu       $a0, $a0, -0x1B00
    ctx->pc = 0x11475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960384));
label_114760:
    // 0x114760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x114760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_114764:
    // 0x114764: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x114764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_114768:
    // 0x114768: 0x600008  jr          $v1
label_11476c:
    if (ctx->pc == 0x11476Cu) {
        ctx->pc = 0x114770u;
        goto label_fallthrough_0x114768;
    }
    ctx->pc = 0x114768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x114768:
    ctx->pc = 0x114770u;
}
