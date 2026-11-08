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

// Function: entry_00199358
// Address: 0x199358 - 0x1993bc
void entry_00199358_0x199358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199358_0x199358");
#endif

    switch (ctx->pc) {
        case 0x199394u: goto label_199394;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993b4u: goto label_1993b4;
        default: break;
    }

    ctx->pc = 0x199358u;

    // 0x199358: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x199358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19935c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x19935cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199360: 0x1460ff51  bnez        $v1, . + 4 + (-0xAF << 2)
    ctx->pc = 0x199360u;
    {
        const bool branch_taken_0x199360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199360u;
        // 0x199364: 0x2933021  addu        $a2, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199360) {
            ctx->pc = 0x1990A8u;
            return;
        }
    }
    ctx->pc = 0x199368u;
    // 0x199368: 0x8e830810  lw          $v1, 0x810($s4)
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x19936c: 0x10600173  beqz        $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x19936Cu;
    {
        const bool branch_taken_0x19936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19936c) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199374u;
    // 0x199374: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x199378: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19937c: 0x1483016f  bne         $a0, $v1, . + 4 + (0x16F << 2)
    ctx->pc = 0x19937Cu;
    {
        const bool branch_taken_0x19937c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19937c) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199384u;
    // 0x199384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199388: 0xae820934  sw          $v0, 0x934($s4)
    ctx->pc = 0x199388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2356), GPR_U32(ctx, 2));
    // 0x19938c: 0xc058018  jal         func_160060
    ctx->pc = 0x19938Cu;
    SET_GPR_U32(ctx, 31, 0x199394u);
    ctx->pc = 0x199390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19938Cu;
    // 0x199390: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19938Cu, 0x199394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x199398: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19939c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1993a0: 0xc064bdc  jal         func_192F70
    ctx->pc = 0x1993A0u;
    SET_GPR_U32(ctx, 31, 0x1993A8u);
    ctx->pc = 0x1993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993A0u;
    // 0x1993a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F70u, 0x1993A0u, 0x1993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993A8u;
label_1993a8:
    // 0x1993a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1993a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993ac: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1993ACu;
    SET_GPR_U32(ctx, 31, 0x1993B4u);
    ctx->pc = 0x1993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1993ACu;
    // 0x1993b0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1993ACu, 0x1993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1993B4u;
label_1993b4:
    // 0x1993b4: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x1993B4u;
    {
        const bool branch_taken_0x1993b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993b4) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1993BCu;
}
