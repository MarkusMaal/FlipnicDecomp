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

// Function: caseD_8
// Address: 0x114d98 - 0x114ddc
void caseD_8_0x114d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x114d98");
#endif

    switch (ctx->pc) {
        case 0x114d98u: goto label_114d98;
        case 0x114d9cu: goto label_114d9c;
        case 0x114da0u: goto label_114da0;
        case 0x114da4u: goto label_114da4;
        case 0x114da8u: goto label_114da8;
        case 0x114dacu: goto label_114dac;
        case 0x114db0u: goto label_114db0;
        case 0x114db4u: goto label_114db4;
        case 0x114db8u: goto label_114db8;
        case 0x114dbcu: goto label_114dbc;
        case 0x114dc0u: goto label_114dc0;
        case 0x114dc4u: goto label_114dc4;
        case 0x114dc8u: goto label_114dc8;
        case 0x114dccu: goto label_114dcc;
        case 0x114dd0u: goto label_114dd0;
        case 0x114dd4u: goto label_114dd4;
        case 0x114dd8u: goto label_114dd8;
        default: break;
    }

    ctx->pc = 0x114d98u;

label_114d98:
    // 0x114d98: 0x9382828c  lbu         $v0, -0x7D74($gp)
    ctx->pc = 0x114d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_114d9c:
    // 0x114d9c: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x114d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114da0:
    // 0x114da0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114da4:
    // 0x114da4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114da8:
    // 0x114da8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x114da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_114dac:
    // 0x114dac: 0x320f809  jalr        $t9
label_114db0:
    if (ctx->pc == 0x114DB0u) {
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DB4u;
        goto label_114db4;
    }
    ctx->pc = 0x114DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114DB4u);
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DACu, 0x114DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114DB4u;
label_114db4:
    // 0x114db4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114db8:
    if (ctx->pc == 0x114DB8u) {
        ctx->pc = 0x114DBCu;
        goto label_114dbc;
    }
    ctx->pc = 0x114DB4u;
    {
        const bool branch_taken_0x114db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114db4) {
            ctx->pc = 0x114DDCu;
            return;
        }
    }
    ctx->pc = 0x114DBCu;
label_114dbc:
    // 0x114dbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114dc0:
    // 0x114dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114dc4:
    // 0x114dc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_114dc8:
    // 0x114dc8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114dcc:
    // 0x114dcc: 0x320f809  jalr        $t9
label_114dd0:
    if (ctx->pc == 0x114DD0u) {
        ctx->pc = 0x114DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DCCu;
        // 0x114dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DD4u;
        goto label_114dd4;
    }
    ctx->pc = 0x114DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114DD4u);
        ctx->pc = 0x114DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DCCu;
        // 0x114dd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DCCu, 0x114DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114DD4u;
label_114dd4:
    // 0x114dd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_114dd8:
    if (ctx->pc == 0x114DD8u) {
        ctx->pc = 0x114DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD4u;
        // 0x114dd8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114DDCu;
        goto label_fallthrough_0x114dd4;
    }
    ctx->pc = 0x114DD4u;
    {
        const bool branch_taken_0x114dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD4u;
        // 0x114dd8: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dd4) {
            ctx->pc = 0x114DE0u;
            return;
        }
    }
label_fallthrough_0x114dd4:
    ctx->pc = 0x114DDCu;
}
