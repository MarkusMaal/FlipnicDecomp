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

// Function: entry_00124530
// Address: 0x124530 - 0x124584
void entry_00124530_0x124530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124530_0x124530");
#endif

    switch (ctx->pc) {
        case 0x12455cu: goto label_12455c;
        case 0x124564u: goto label_124564;
        default: break;
    }

    ctx->pc = 0x124530u;

    // 0x124530: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x124530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x124534: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x124534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x124538: 0x96440060  lhu         $a0, 0x60($s2)
    ctx->pc = 0x124538u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12453c: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124544: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12454c: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x12454cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x124550: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x124550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x124554: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x124554u;
    SET_GPR_U32(ctx, 31, 0x12455Cu);
    ctx->pc = 0x124558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124554u;
    // 0x124558: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x124554u, 0x12455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12455Cu;
label_12455c:
    // 0x12455c: 0xc048148  jal         func_120520
    ctx->pc = 0x12455Cu;
    SET_GPR_U32(ctx, 31, 0x124564u);
    ctx->pc = 0x124560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12455Cu;
    // 0x124560: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12455Cu, 0x124564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124564u;
label_124564:
    // 0x124564: 0x8e53008c  lw          $s3, 0x8C($s2)
    ctx->pc = 0x124564u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x124568: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x12456c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x12456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x124570: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124574: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124578: 0x1420005e  bnez        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x124578u;
    {
        const bool branch_taken_0x124578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124578u;
        // 0x12457c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124578) {
            ctx->pc = 0x1246F4u;
            return;
        }
    }
    ctx->pc = 0x124580u;
    // 0x124580: 0x24150090  addiu       $s5, $zero, 0x90
    ctx->pc = 0x124580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x124584u;
}
