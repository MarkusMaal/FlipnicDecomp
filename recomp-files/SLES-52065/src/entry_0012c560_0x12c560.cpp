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

// Function: entry_0012c560
// Address: 0x12c560 - 0x12c584
void entry_0012c560_0x12c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c560_0x12c560");
#endif

    switch (ctx->pc) {
        case 0x12c574u: goto label_12c574;
        default: break;
    }

    ctx->pc = 0x12c560u;

    // 0x12c560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c568: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x12c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c56c: 0xc07d86e  jal         func_1F61B8
    ctx->pc = 0x12C56Cu;
    SET_GPR_U32(ctx, 31, 0x12C574u);
    ctx->pc = 0x12C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C56Cu;
    // 0x12c570: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F61B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61B8u, 0x12C56Cu, 0x12C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C574u;
label_12c574:
    // 0x12c574: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C574u;
    {
        const bool branch_taken_0x12c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c574) {
            ctx->pc = 0x12C584u;
            return;
        }
    }
    ctx->pc = 0x12C57Cu;
    // 0x12c57c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c580: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c584u;
}
