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

// Function: entry_00123704
// Address: 0x123704 - 0x123764
void entry_00123704_0x123704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123704_0x123704");
#endif

    switch (ctx->pc) {
        case 0x12373cu: goto label_12373c;
        case 0x12375cu: goto label_12375c;
        default: break;
    }

    ctx->pc = 0x123704u;

    // 0x123704: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x123704u;
    {
        const bool branch_taken_0x123704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123704u;
        // 0x123708: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123704) {
            ctx->pc = 0x123780u;
            return;
        }
    }
    ctx->pc = 0x12370Cu;
    // 0x12370c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123714: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x123714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x123718: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12371c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x12371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x123720: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x123720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x123724: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x123724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x123728: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x123728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x12372c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12372cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x123730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x123730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123734: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x123734u;
    SET_GPR_U32(ctx, 31, 0x12373Cu);
    ctx->pc = 0x123738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123734u;
    // 0x123738: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x123734u, 0x12373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12373cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123740: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x123740u;
    {
        const bool branch_taken_0x123740 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x123744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123740u;
        // 0x123744: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123740) {
            ctx->pc = 0x123764u;
            return;
        }
    }
    ctx->pc = 0x123748u;
    // 0x123748: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12374c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x123750: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x123754: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x123754u;
    SET_GPR_U32(ctx, 31, 0x12375Cu);
    ctx->pc = 0x123758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123754u;
    // 0x123758: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x123754u, 0x12375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12375Cu;
label_12375c:
    // 0x12375c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12375Cu;
    SET_GPR_U32(ctx, 31, 0x123764u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12375Cu, 0x123764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123764u;
}
