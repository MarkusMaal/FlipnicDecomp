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

// Function: entry_001045e8
// Address: 0x1045e8 - 0x104624
void entry_001045e8_0x1045e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045e8_0x1045e8");
#endif

    switch (ctx->pc) {
        case 0x1045f0u: goto label_1045f0;
        case 0x104600u: goto label_104600;
        default: break;
    }

    ctx->pc = 0x1045e8u;

    // 0x1045e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1045E8u;
    SET_GPR_U32(ctx, 31, 0x1045F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1045E8u, 0x1045F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045F0u;
label_1045f0:
    // 0x1045f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1045F0u;
    {
        const bool branch_taken_0x1045f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045F0u;
        // 0x1045f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045f0) {
            ctx->pc = 0x104624u;
            return;
        }
    }
    ctx->pc = 0x1045F8u;
    // 0x1045f8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1045F8u;
    SET_GPR_U32(ctx, 31, 0x104600u);
    ctx->pc = 0x1045FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045F8u;
    // 0x1045fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1045F8u, 0x104600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104600u;
label_104600:
    // 0x104600: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104604: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104608: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x10460c: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x10460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x104610: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104614: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104618: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10461c: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x104620: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104624u;
}
