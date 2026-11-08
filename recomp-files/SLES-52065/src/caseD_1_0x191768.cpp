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

// Function: caseD_1
// Address: 0x191768 - 0x1917c8
void caseD_1_0x191768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x191768");
#endif

    switch (ctx->pc) {
        case 0x191778u: goto label_191778;
        case 0x191794u: goto label_191794;
        case 0x1917acu: goto label_1917ac;
        default: break;
    }

    ctx->pc = 0x191768u;

    // 0x191768: 0x124002ee  beqz        $s2, . + 4 + (0x2EE << 2)
    ctx->pc = 0x191768u;
    {
        const bool branch_taken_0x191768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191768) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191770u;
    // 0x191770: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x191770u;
    SET_GPR_U32(ctx, 31, 0x191778u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x191770u, 0x191778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191778u;
label_191778:
    // 0x191778: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x191778u;
    {
        const bool branch_taken_0x191778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191778) {
            ctx->pc = 0x1917D8u;
            return;
        }
    }
    ctx->pc = 0x191780u;
    // 0x191780: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191784: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191788: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x19178c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x19178Cu;
    SET_GPR_U32(ctx, 31, 0x191794u);
    ctx->pc = 0x191790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19178Cu;
    // 0x191790: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19178Cu, 0x191794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191794u;
label_191794:
    // 0x191794: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19179c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1917a0: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x1917a4: 0xc067f0c  jal         func_19FC30
    ctx->pc = 0x1917A4u;
    SET_GPR_U32(ctx, 31, 0x1917ACu);
    ctx->pc = 0x1917A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917A4u;
    // 0x1917a8: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x1917A4u, 0x1917ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917ACu;
label_1917ac:
    // 0x1917ac: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1917ACu;
    {
        const bool branch_taken_0x1917ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1917ac) {
            ctx->pc = 0x1917C8u;
            return;
        }
    }
    ctx->pc = 0x1917B4u;
    // 0x1917b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1917b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1917bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1917c0: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x1917C0u;
    {
        const bool branch_taken_0x1917c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C0u;
        // 0x1917c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917c0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1917C8u;
}
