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

// Function: entry_0017dec0
// Address: 0x17dec0 - 0x17df08
void entry_0017dec0_0x17dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dec0_0x17dec0");
#endif

    switch (ctx->pc) {
        case 0x17dee0u: goto label_17dee0;
        default: break;
    }

    ctx->pc = 0x17dec0u;

    // 0x17dec0: 0x2333021  addu        $a2, $s1, $s3
    ctx->pc = 0x17dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17dec4: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x17dec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17dec8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x17DEC8u;
    {
        const bool branch_taken_0x17dec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dec8) {
            ctx->pc = 0x17DF08u;
            return;
        }
    }
    ctx->pc = 0x17DED0u;
    // 0x17ded0: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x17DED0u;
    {
        const bool branch_taken_0x17ded0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DED0u;
        // 0x17ded4: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ded0) {
            ctx->pc = 0x17DF08u;
            return;
        }
    }
    ctx->pc = 0x17DED8u;
    // 0x17ded8: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17DED8u;
    SET_GPR_U32(ctx, 31, 0x17DEE0u);
    ctx->pc = 0x17DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DED8u;
    // 0x17dedc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17DED8u, 0x17DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DEE0u;
label_17dee0:
    // 0x17dee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DEE0u;
    {
        const bool branch_taken_0x17dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dee0) {
            ctx->pc = 0x17DF08u;
            return;
        }
    }
    ctx->pc = 0x17DEE8u;
    // 0x17dee8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x17dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17deec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DEECu;
    {
        const bool branch_taken_0x17deec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17deec) {
            ctx->pc = 0x17DF08u;
            return;
        }
    }
    ctx->pc = 0x17DEF4u;
    // 0x17def4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17def8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17defc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DEFCu;
    {
        const bool branch_taken_0x17defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17defc) {
            ctx->pc = 0x17DF08u;
            return;
        }
    }
    ctx->pc = 0x17DF04u;
    // 0x17df04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17df08u;
}
