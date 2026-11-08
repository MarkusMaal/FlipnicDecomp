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

// Function: entry_001c1308
// Address: 0x1c1308 - 0x1c1338
void entry_001c1308_0x1c1308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1308_0x1c1308");
#endif

    switch (ctx->pc) {
        case 0x1c1318u: goto label_1c1318;
        case 0x1c1330u: goto label_1c1330;
        default: break;
    }

    ctx->pc = 0x1c1308u;

    // 0x1c1308: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1c130c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c1310: 0xc07309c  jal         func_1CC270
    ctx->pc = 0x1C1310u;
    SET_GPR_U32(ctx, 31, 0x1C1318u);
    ctx->pc = 0x1C1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1310u;
    // 0x1c1314: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC270u, 0x1C1310u, 0x1C1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1318u;
label_1c1318:
    // 0x1c1318: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c131c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1320: 0x90450084  lbu         $a1, 0x84($v0)
    ctx->pc = 0x1c1320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1c1324: 0x9046008c  lbu         $a2, 0x8C($v0)
    ctx->pc = 0x1c1324u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1c1328: 0xc07154c  jal         func_1C5530
    ctx->pc = 0x1C1328u;
    SET_GPR_U32(ctx, 31, 0x1C1330u);
    ctx->pc = 0x1C132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1328u;
    // 0x1c132c: 0x9044007c  lbu         $a0, 0x7C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5530u, 0x1C1328u, 0x1C1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1330u;
label_1c1330:
    // 0x1c1330: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1334: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1c1338u;
}
