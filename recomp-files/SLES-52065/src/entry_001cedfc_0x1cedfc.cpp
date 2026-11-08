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

// Function: entry_001cedfc
// Address: 0x1cedfc - 0x1cee5c
void entry_001cedfc_0x1cedfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cedfc_0x1cedfc");
#endif

    switch (ctx->pc) {
        case 0x1cee18u: goto label_1cee18;
        case 0x1cee28u: goto label_1cee28;
        case 0x1cee40u: goto label_1cee40;
        default: break;
    }

    ctx->pc = 0x1cedfcu;

    // 0x1cedfc: 0x0  nop
    ctx->pc = 0x1cedfcu;
    // NOP
    // 0x1cee00: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cee00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cee04: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cee0c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1cee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1cee10: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEE10u;
    SET_GPR_U32(ctx, 31, 0x1CEE18u);
    ctx->pc = 0x1CEE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE10u;
    // 0x1cee14: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEE10u, 0x1CEE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE18u;
label_1cee18:
    // 0x1cee18: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1cee18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cee1c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1cee20: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1CEE20u;
    SET_GPR_U32(ctx, 31, 0x1CEE28u);
    ctx->pc = 0x1CEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE20u;
    // 0x1cee24: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1CEE20u, 0x1CEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE28u;
label_1cee28:
    // 0x1cee28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cee2c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1cee2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cee30: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CEE30u;
    {
        const bool branch_taken_0x1cee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE30u;
        // 0x1cee34: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee30) {
            ctx->pc = 0x1CEDE4u;
            return;
        }
    }
    ctx->pc = 0x1CEE38u;
    // 0x1cee38: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CEE38u;
    SET_GPR_U32(ctx, 31, 0x1CEE40u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CEE38u, 0x1CEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE40u;
label_1cee40:
    // 0x1cee40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEE40u;
    {
        const bool branch_taken_0x1cee40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE40u;
        // 0x1cee44: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee40) {
            ctx->pc = 0x1CEE5Cu;
            return;
        }
    }
    ctx->pc = 0x1CEE48u;
    // 0x1cee48: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1cee48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1cee4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee50: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1cee54: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1CEE54u;
    SET_GPR_U32(ctx, 31, 0x1CEE5Cu);
    ctx->pc = 0x1CEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE54u;
    // 0x1cee58: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1CEE54u, 0x1CEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE5Cu;
}
