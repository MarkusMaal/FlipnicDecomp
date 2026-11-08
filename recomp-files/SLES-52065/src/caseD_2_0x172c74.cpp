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

// Function: caseD_2
// Address: 0x172c74 - 0x172ca8
void caseD_2_0x172c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x172c74");
#endif

    switch (ctx->pc) {
        case 0x172c7cu: goto label_172c7c;
        default: break;
    }

    ctx->pc = 0x172c74u;

    // 0x172c74: 0xc05e6b0  jal         func_179AC0
    ctx->pc = 0x172C74u;
    SET_GPR_U32(ctx, 31, 0x172C7Cu);
    ctx->pc = 0x179AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179AC0u, 0x172C74u, 0x172C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C7Cu;
label_172c7c:
    // 0x172c7c: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
    // 0x172c80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x172c84: 0x1c4000b4  bgtz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x172C84u;
    {
        const bool branch_taken_0x172c84 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x172C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C84u;
        // 0x172c88: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c84) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172C8Cu;
    // 0x172c8c: 0x92226034  lbu         $v0, 0x6034($s1)
    ctx->pc = 0x172c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24628)));
    // 0x172c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172C90u;
    {
        const bool branch_taken_0x172c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C90u;
        // 0x172c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c90) {
            ctx->pc = 0x172CA8u;
            return;
        }
    }
    ctx->pc = 0x172C98u;
    // 0x172c98: 0xae20601c  sw          $zero, 0x601C($s1)
    ctx->pc = 0x172c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24604), GPR_U32(ctx, 0));
    // 0x172c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172ca0: 0xa2226033  sb          $v0, 0x6033($s1)
    ctx->pc = 0x172ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24627), (uint8_t)GPR_U32(ctx, 2));
    // 0x172ca4: 0xa2206031  sb          $zero, 0x6031($s1)
    ctx->pc = 0x172ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24625), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x172ca8u;
}
