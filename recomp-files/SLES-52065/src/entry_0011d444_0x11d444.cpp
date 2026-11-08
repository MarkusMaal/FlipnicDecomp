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

// Function: entry_0011d444
// Address: 0x11d444 - 0x11d484
void entry_0011d444_0x11d444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d444_0x11d444");
#endif

    switch (ctx->pc) {
        case 0x11d464u: goto label_11d464;
        default: break;
    }

    ctx->pc = 0x11d444u;

    // 0x11d444: 0x0  nop
    ctx->pc = 0x11d444u;
    // NOP
    // 0x11d448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d44c: 0x660ffe8  bltz        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11D44Cu;
    {
        const bool branch_taken_0x11d44c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x11D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D44Cu;
        // 0x11d450: 0xaf8283f0  sw          $v0, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d44c) {
            ctx->pc = 0x11D3F0u;
            return;
        }
    }
    ctx->pc = 0x11D454u;
    // 0x11d454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d458: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11d458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d45c: 0xc046804  jal         func_11A010
    ctx->pc = 0x11D45Cu;
    SET_GPR_U32(ctx, 31, 0x11D464u);
    ctx->pc = 0x11D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D45Cu;
    // 0x11d460: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A010u, 0x11D45Cu, 0x11D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D464u;
label_11d464:
    // 0x11d464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x11d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d46c: 0x460ffe0  bltz        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11D46Cu;
    {
        const bool branch_taken_0x11d46c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x11d46c) {
            ctx->pc = 0x11D3F0u;
            return;
        }
    }
    ctx->pc = 0x11D474u;
    // 0x11d474: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D474u;
    {
        const bool branch_taken_0x11d474 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D474u;
        // 0x11d478: 0x1422c3  sra         $a0, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d474) {
            ctx->pc = 0x11D484u;
            return;
        }
    }
    ctx->pc = 0x11D47Cu;
    // 0x11d47c: 0x268307ff  addiu       $v1, $s4, 0x7FF
    ctx->pc = 0x11d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2047));
    // 0x11d480: 0x322c3  sra         $a0, $v1, 11
    ctx->pc = 0x11d480u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 11));
    ctx->pc = 0x11d484u;
}
