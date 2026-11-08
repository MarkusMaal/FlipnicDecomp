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

// Function: entry_001180ec
// Address: 0x1180ec - 0x118130
void entry_001180ec_0x1180ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001180ec_0x1180ec");
#endif

    switch (ctx->pc) {
        case 0x1180f4u: goto label_1180f4;
        case 0x118100u: goto label_118100;
        default: break;
    }

    ctx->pc = 0x1180ecu;

    // 0x1180ec: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x1180ECu;
    SET_GPR_U32(ctx, 31, 0x1180F4u);
    ctx->pc = 0x1B4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4880u, 0x1180ECu, 0x1180F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180F4u;
label_1180f4:
    // 0x1180f4: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1180f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1180f8: 0xc053c54  jal         func_14F150
    ctx->pc = 0x1180F8u;
    SET_GPR_U32(ctx, 31, 0x118100u);
    ctx->pc = 0x1180FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180F8u;
    // 0x1180fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x1180F8u, 0x118100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118100u;
label_118100:
    // 0x118100: 0x8f848350  lw          $a0, -0x7CB0($gp)
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
    // 0x118104: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118104u;
    {
        const bool branch_taken_0x118104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118104u;
        // 0x118108: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118104) {
            ctx->pc = 0x118154u;
            return;
        }
    }
    ctx->pc = 0x11810Cu;
    // 0x11810c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x11810cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x118110: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118114: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x118114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x118118: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x118118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11811c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11811Cu;
    {
        const bool branch_taken_0x11811c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11811Cu;
        // 0x118120: 0x8f838354  lw          $v1, -0x7CAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11811c) {
            ctx->pc = 0x118130u;
            return;
        }
    }
    ctx->pc = 0x118124u;
    // 0x118124: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x118124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x118128: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x118128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x11812c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11812cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x118130u;
}
