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

// Function: entry_001a1238
// Address: 0x1a1238 - 0x1a125c
void entry_001a1238_0x1a1238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1238_0x1a1238");
#endif

    switch (ctx->pc) {
        case 0x1a1254u: goto label_1a1254;
        default: break;
    }

    ctx->pc = 0x1a1238u;

    // 0x1a1238: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a123c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1240: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1244: 0x1062ffd5  beq         $v1, $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A1244u;
    {
        const bool branch_taken_0x1a1244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1244) {
            ctx->pc = 0x1A119Cu;
            return;
        }
    }
    ctx->pc = 0x1A124Cu;
    // 0x1a124c: 0xc058018  jal         func_160060
    ctx->pc = 0x1A124Cu;
    SET_GPR_U32(ctx, 31, 0x1A1254u);
    ctx->pc = 0x1A1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A124Cu;
    // 0x1a1250: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A124Cu, 0x1A1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1254u;
label_1a1254:
    // 0x1a1254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a125cu;
}
