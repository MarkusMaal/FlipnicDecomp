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

// Function: entry_001d4540
// Address: 0x1d4540 - 0x1d4578
void entry_001d4540_0x1d4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4540_0x1d4540");
#endif

    switch (ctx->pc) {
        case 0x1d4570u: goto label_1d4570;
        default: break;
    }

    ctx->pc = 0x1d4540u;

    // 0x1d4540: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1d4540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1d4544: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4544u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d4548: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x1d4548u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x1d454c: 0x881014  dsllv       $v0, $t0, $a0
    ctx->pc = 0x1d454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1d4550: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1d4550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1d4554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4554u;
    {
        const bool branch_taken_0x1d4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4554u;
        // 0x1d4558: 0x2cc30030  sltiu       $v1, $a2, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4554) {
            ctx->pc = 0x1D4578u;
            return;
        }
    }
    ctx->pc = 0x1D455Cu;
    // 0x1d455c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d4560: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4560u;
    {
        const bool branch_taken_0x1d4560 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1d4560) {
            ctx->pc = 0x1D4578u;
            return;
        }
    }
    ctx->pc = 0x1D4568u;
    // 0x1d4568: 0xc0782e6  jal         func_1E0B98
    ctx->pc = 0x1D4568u;
    SET_GPR_U32(ctx, 31, 0x1D4570u);
    ctx->pc = 0x1E0B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0B98u, 0x1D4568u, 0x1D4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4570u;
label_1d4570:
    // 0x1d4570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4570u;
    {
        const bool branch_taken_0x1d4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4570u;
        // 0x1d4574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4570) {
            ctx->pc = 0x1D4584u;
            return;
        }
    }
    ctx->pc = 0x1D4578u;
}
