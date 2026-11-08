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

// Function: entry_00109270
// Address: 0x109270 - 0x10929c
void entry_00109270_0x109270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109270_0x109270");
#endif

    switch (ctx->pc) {
        case 0x109284u: goto label_109284;
        case 0x109294u: goto label_109294;
        default: break;
    }

    ctx->pc = 0x109270u;

    // 0x109270: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x109270u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109274: 0x244702d0  addiu       $a3, $v0, 0x2D0
    ctx->pc = 0x109274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x109278: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x109278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x10927c: 0xc058138  jal         func_1604E0
    ctx->pc = 0x10927Cu;
    SET_GPR_U32(ctx, 31, 0x109284u);
    ctx->pc = 0x109280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10927Cu;
    // 0x109280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x10927Cu, 0x109284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109284u;
label_109284:
    // 0x109284: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x109284u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x109288: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x10928c: 0xc058174  jal         func_1605D0
    ctx->pc = 0x10928Cu;
    SET_GPR_U32(ctx, 31, 0x109294u);
    ctx->pc = 0x109290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10928Cu;
    // 0x109290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1605D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1605D0u, 0x10928Cu, 0x109294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109294u;
label_109294:
    // 0x109294: 0xc054790  jal         func_151E40
    ctx->pc = 0x109294u;
    SET_GPR_U32(ctx, 31, 0x10929Cu);
    ctx->pc = 0x109298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109294u;
    // 0x109298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151E40u, 0x109294u, 0x10929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10929Cu;
}
