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

// Function: caseD_4
// Address: 0x172d84 - 0x172dec
void caseD_4_0x172d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x172d84");
#endif

    switch (ctx->pc) {
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        case 0x172dd8u: goto label_172dd8;
        case 0x172ddcu: goto label_172ddc;
        case 0x172de0u: goto label_172de0;
        case 0x172de4u: goto label_172de4;
        case 0x172de8u: goto label_172de8;
        default: break;
    }

    ctx->pc = 0x172d84u;

label_172d84:
    // 0x172d84: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172d88:
    // 0x172d88: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172d8c:
    // 0x172d8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172d90:
    // 0x172d90: 0x320f809  jalr        $t9
label_172d94:
    if (ctx->pc == 0x172D94u) {
        ctx->pc = 0x172D98u;
        goto label_172d98;
    }
    ctx->pc = 0x172D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172D98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D90u, 0x172D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172D98u;
label_172d98:
    // 0x172d98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_172d9c:
    if (ctx->pc == 0x172D9Cu) {
        ctx->pc = 0x172DA0u;
        goto label_172da0;
    }
    ctx->pc = 0x172D98u;
    {
        const bool branch_taken_0x172d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d98) {
            ctx->pc = 0x172DECu;
            return;
        }
    }
    ctx->pc = 0x172DA0u;
label_172da0:
    // 0x172da0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172da4:
    // 0x172da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172da8:
    // 0x172da8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172dac:
    // 0x172dac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172db0:
    // 0x172db0: 0x320f809  jalr        $t9
label_172db4:
    if (ctx->pc == 0x172DB4u) {
        ctx->pc = 0x172DB8u;
        goto label_172db8;
    }
    ctx->pc = 0x172DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172DB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DB0u, 0x172DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172DB8u;
label_172db8:
    // 0x172db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172dbc:
    // 0x172dbc: 0xc05e610  jal         func_179840
label_172dc0:
    if (ctx->pc == 0x172DC0u) {
        ctx->pc = 0x172DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DBCu;
        // 0x172dc0: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DC4u;
        goto label_172dc4;
    }
    ctx->pc = 0x172DBCu;
    SET_GPR_U32(ctx, 31, 0x172DC4u);
    ctx->pc = 0x172DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DBCu;
    // 0x172dc0: 0x2624402c  addiu       $a0, $s1, 0x402C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179840u, 0x172DBCu, 0x172DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DC4u;
label_172dc4:
    // 0x172dc4: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172dc8:
    // 0x172dc8: 0x262437a0  addiu       $a0, $s1, 0x37A0
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
label_172dcc:
    // 0x172dcc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x172dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_172dd0:
    // 0x172dd0: 0x320f809  jalr        $t9
label_172dd4:
    if (ctx->pc == 0x172DD4u) {
        ctx->pc = 0x172DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DD0u;
        // 0x172dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DD8u;
        goto label_172dd8;
    }
    ctx->pc = 0x172DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172DD8u);
        ctx->pc = 0x172DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DD0u;
        // 0x172dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DD0u, 0x172DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172DD8u;
label_172dd8:
    // 0x172dd8: 0xae206008  sw          $zero, 0x6008($s1)
    ctx->pc = 0x172dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 0));
label_172ddc:
    // 0x172ddc: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172de0:
    // 0x172de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172de4:
    // 0x172de4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_172de8:
    if (ctx->pc == 0x172DE8u) {
        ctx->pc = 0x172DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DE4u;
        // 0x172de8: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172DECu;
        goto label_fallthrough_0x172de4;
    }
    ctx->pc = 0x172DE4u;
    {
        const bool branch_taken_0x172de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DE4u;
        // 0x172de8: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172de4) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
label_fallthrough_0x172de4:
    ctx->pc = 0x172DECu;
}
