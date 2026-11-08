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

// Function: entry_001d8978
// Address: 0x1d8978 - 0x1d89a0
void entry_001d8978_0x1d8978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8978_0x1d8978");
#endif

    switch (ctx->pc) {
        case 0x1d898cu: goto label_1d898c;
        default: break;
    }

    ctx->pc = 0x1d8978u;

    // 0x1d8978: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d897c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8980: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8984: 0xc077324  jal         func_1DCC90
    ctx->pc = 0x1D8984u;
    SET_GPR_U32(ctx, 31, 0x1D898Cu);
    ctx->pc = 0x1D8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8984u;
    // 0x1d8988: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC90u, 0x1D8984u, 0x1D898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D898Cu;
label_1d898c:
    // 0x1d898c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8990: 0x600003c  bltz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D8990u;
    {
        const bool branch_taken_0x1d8990 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8990u;
        // 0x1d8994: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8990) {
            ctx->pc = 0x1D8A84u;
            return;
        }
    }
    ctx->pc = 0x1D8998u;
    // 0x1d8998: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d899c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d89a0u;
}
